<?php
/**
 * @file
 * Provides the Views content cache, views cache plugin.
 */

/**
 * Simple caching of query results for Views displays.
 * Includes listening for changes/posts/deletions of
 * certain node types.
 */
class views_content_cache_plugin_cache extends views_plugin_cache {
  function option_definition() {
    $options = parent::option_definition();

    $options['results_min_lifespan'] = array('default' => 0);
    $options['results_max_lifespan'] = array('default' => 21600);
    $options['output_min_lifespan'] = array('default' => 0);
    $options['output_max_lifespan'] = array('default' => 21600);
    $options['keys'] = array('default' => array());

    return $options;
  }

  function option_defaults(&$options) {
    $options['results_max_lifespan'] = 21600;
    $options['output_max_lifespan'] = 21600;
  }


  function options_form(&$form, &$form_state) {
    $form['keys'] = array(
      '#title' => t('Cache segments'),
      '#type' => 'fieldset',
      '#description' => t("Choose which events will update this View's cache."),
    );
    foreach (views_content_cache_get_plugin() as $key_id => $plugin) {
      $option_value = isset($this->options['keys'][$key_id]) ? $this->options['keys'][$key_id] : array();
      $form['keys'][$key_id] = $plugin->options_form($option_value, $this);
    }

    $options = array(60, 300, 1800, 3600, 21600, 518400);
    $options = drupal_map_assoc($options, 'format_interval');
    $options = array(-1 => t('None')) + $options;

    $form['results_min_lifespan'] = array(
      '#type' => 'select',
      '#title' => t('Query results - Minimum lifetime'),
      '#description' => t('Query results will be cached for <strong>at least</strong> this amount of time, even if a selected event has occured more recently.'),
      '#options' => $options,
      '#default_value' => $this->options['results_min_lifespan'],
    );
    $form['results_max_lifespan'] = array(
      '#type' => 'select',
      '#title' => t('Query results - Maximum lifetime'),
      '#description' => t('Query results will be cached for <strong>at most</strong> this amount of time.'),
      '#options' => $options,
      '#default_value' => $this->options['results_max_lifespan'],
    );

    $form['output_min_lifespan'] = array(
      '#type' => 'select',
      '#title' => t('Rendered output - Minimum lifetime'),
      '#description' => t('Rendered HTML output will be cached for <strong>at least</strong> this amount of time, even if a selected event has occured more recently.'),
      '#options' => $options,
      '#default_value' => $this->options['output_min_lifespan'],
    );
    $form['output_max_lifespan'] = array(
      '#type' => 'select',
      '#title' => t('Rendered output - Maximum lifetime'),
      '#description' => t('Rendered HTML output will be cached for <strong>at most</strong> this amount of time.'),
      '#options' => $options,
      '#default_value' => $this->options['output_max_lifespan'],
    );
  }

  function summary_title() {
    return "Content cache";
  }

  /**
   * Return the expiry time for this cache plugin.
   *
   * This should be the last time that the content has changed, altered to allow
   * for the the min/max lifetimes.
   */
  function cache_expire($type) {
    $cutoff = 0;

    // Retrieve the latest update time matching the settings on this View.
    $cid = array();
    if (!empty($this->options['keys'])) {
      foreach ($this->options['keys'] as $key_id => $key_values) {
        if ($plugin = views_content_cache_get_plugin($key_id)) {
          $cid[$key_id] = $plugin->view_key($key_values, $this);
        }
      }
    }
    if (!empty($cid) && $timestamp = views_content_cache_update_get($cid)) {
      $cutoff = $timestamp;
    }

    // If there's a minimum lifetime, enforce it:
    if ($min_lifespan = $this->options[$type . '_min_lifespan']) {
      $min_lifespan = REQUEST_TIME - $min_lifespan;
      $cutoff = min($min_lifespan, $cutoff);
    }

    // Only enforce a maximum lifetime if it's been specifically selected:
    if ($max_lifespan = $this->options[$type . '_max_lifespan']) {
      if ($max_lifespan != -1) {
        $max_lifespan = REQUEST_TIME - $max_lifespan;
        $cutoff = max($max_lifespan, $cutoff);
      }
    }
    return $cutoff;
  }


  /**
   * An exact duplicate of DatabaseConnection::expandArguments().
   *
   * This is not a great solution but about the only one available to us if we
   * still want VCC to work the way it always has in Drupal 7.
   */
  function expand_arguments(&$query, &$args) {
    // If the placeholder value to insert is an array, assume that we need
    // to expand it out into a comma-delimited set of placeholders.
    foreach (array_filter($args, 'is_array') as $key => $data) {
      $new_keys = array();
      foreach ($data as $i => $value) {
        // This assumes that there are no other placeholders that use the same
        // name.  For example, if the array placeholder is defined as :example
        // and there is already an :example_2 placeholder, this will generate
        // a duplicate key.  We do not account for that as the calling code
        // is already broken if that happens.
        $new_keys[$key . '_' . $i] = $value;
      }

      // Update the query with the new placeholders.
      // preg_replace is necessary to ensure the replacement does not affect
      // placeholders that start with the same exact text. For example, if the
      // query contains the placeholders :foo and :foobar, and :foo has an
      // array of values, using str_replace would affect both placeholders,
      // but using the following preg_replace would only affect :foo because
      // it is followed by a non-word character.
      $query = preg_replace('#' . $key . '\b#', implode(', ', array_keys($new_keys)), $query);

      // Update the args array with the new placeholders.
      unset($args[$key]);
      $args += $new_keys;

      $modified = TRUE;
    }
  }

  function get_results_key() {
    global $user;

    if (!isset($this->_results_key)) {
      $execute_info = array();
      foreach (array('query', 'count_query') as $v) {
        $query = clone($this->view->build_info[$v]);
        $args = $query->getArguments();

        // For testing.
        $this->expand_arguments($query, $args);
        $execute_info[$v] = strtr((string)$query, $args);
      }

      $key_data = array(
        'execute_info' => $execute_info,
        'roles' => array_keys($user->roles),
        'super-user' => $user->uid == 1, // special caching for super user.
        'language' => $GLOBALS['language'],
      );
      foreach (array('exposed_info', 'page', 'sort', 'order') as $key) {
        if (isset($_GET[$key])) {
          $key_data[$key] = $_GET[$key];
        }
      }

      $this->_results_key = $this->view->name . ':' . $this->display->id . ':results:' . md5(serialize($key_data));
    }

    return $this->_results_key;
  }
}
