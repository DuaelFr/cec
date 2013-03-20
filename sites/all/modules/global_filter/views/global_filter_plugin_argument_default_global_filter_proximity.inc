<?php
/**
 * @file
 * global_filter_plugin_argument_default_global_filter_proximity.inc
 *
 * Contains a Global Filter default argument plugin (for proxomity argument).
 */

/**
 * Default argument plugin to extract the global View filter proximity value
 * set for this contextual filter.
 */
class global_filter_plugin_argument_default_global_filter_proximity extends views_plugin_argument_default {

  function option_definition() {
    $options = parent::option_definition();
    $options['global_filter_proximity_distance'] = array('default' => '100');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['global_filter_proximity_distance'] = array(
      '#type' => 'textfield',
      '#title' => t('Distance'),
      '#size' => 12,
      '#default_value' => $this->options['global_filter_proximity_distance'],
      '#description' => t('Enter a distance to define the proximity area centered on either the postal code or lat/long coordinates supplied by the user in the global filter. For units etc. see the settings at the bottom of this panel.')
    );
  }

  function get_argument() {
    $exception_value = $this->argument->options['exception']['value']; // e.g. 'all'
    $proximity_field_name = $this->argument->field;
    if (global_filter_key_by_name($proximity_field_name)) {

      $arg = global_filter_get_session_value($proximity_field_name);
      if (!empty($arg)) {
        if (is_array($arg)) { // shouldn't be
          $arg = reset($arg);
        }
        $arg = trim($arg);
        if (!empty($arg)) {
          // Allow $arg to contain distance as second arg. If not specified
          // fall back on the administrator default.
          // Allowed patterns: lat,long_dist and postcode_dist
          if (strpos($arg, '_')) { // this is the Location native format
            return $arg;
          }
          // Allow a space as a separator, convert to underscore.
          // Avoid confusion with "lat, long" format.
          if (($pos_space = strrpos($arg, ' ')) && drupal_substr($arg, $pos_space - 1, 1) != ',') {
            $arg = drupal_substr($arg, 0, $pos_space) . '_' . drupal_substr($arg, $pos_space + 1);
          }
          else { // no distance specified, append the admin default
            $arg .= '_' . trim($this->options['global_filter_proximity_distance']);
          }
          return $arg;
        }
      }
      return $exception_value;
    }
    $view_name = empty($this->view->human_name) ? $this->view->name : $this->view->human_name;
    drupal_set_message(t('The view %view specifies a global filter location proximity field, %name, as its default contextual filter. However there is no associated <strong>Global Filter block</strong> for it. Please configure a global filter <a href="admin/structure/block">here</a> or remove this contextual filter default argument from the view.', array(
      '%view' => $view_name, '%name' => $proximity_field_name)), 'warning', FALSE);
    return $exception_value;
  }
}
