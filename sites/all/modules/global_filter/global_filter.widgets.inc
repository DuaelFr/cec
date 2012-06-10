<?php

/**
 * @file
 * global_filter.widgets.inc
 */

define('GLOBAL_FILTER_DEF_OPTION_ALL_TEXT', t('All'));
define('GLOBAL_FILTER_VIEWS_PROXIMITY_FIELD', 'distance');
define('GLOBAL_FILTER_VIEWS_SEARCH_TERMS_FIELD', 'keys');

/**
 * Implements hook_forms();
 *
 * Called as a result of the fact that there are no hard-coded handlers for the
 * unique form_id's ('global_filter_1', 'global_filter_2'...), generated in
 * global_filter_block_info().
 * Here we map these form_id's back to the same 'global_filter_form'.
 */
function global_filter_forms($form_id, $args) {
  if (strpos($form_id, 'global_filter') === 0) {
    $form = array(
      $form_id => array(
        'callback' => 'global_filter_form',
        'callback arguments' => array($filter = $form_id)
      )
    );
    return $form;
  }
}

/**
 * Creates the global selector widget, e.g. drop-down, radio-boxes, links...
 *
 * If the filter is driven by a field, then we use the field instance's default
 * widget, unless overridden by the user.
 *
 * @ingroup forms
 *
 */
function global_filter_form($form, &$form_state, $filter) {

  // Pass filter name and language to other functions that may need it.
  if ($form_state['global_filter_name'] = variable_get($filter)) {

    $form_state['language'] = LANGUAGE_NONE; // @todo ?

    global_filter_create_widget($filter, $form, $form_state);

    // Complete form with visible or invisible submit button and markup.
    if ($form_state['widget'] != 'links') {
      global_filter_add_submit_button($form, $filter);
    }
    $path = drupal_get_path('module', 'global_filter');
    $form['#attached']['css'] = array($path . '/global_filter.css');
    $form['#attributes']['class'][] = 'global-filter';
  }
  return $form;
}

/**
 * Based on the requested or field-implied widget there are three main case:
 *
 * o global filter driven by a view: user may request any list widget
 * o global filter driven by a node property: textfield
 * o global filter driven by a field: widget default may be overriden by user,
 *   provided the widget default is not a text field or or date field;
 *   autocomplete fields may be overridden.
 *
 * @param $option_all_text
 * @param $form, the form that will be added to
 * @param $form_state
 * @return nothing
 */
function global_filter_create_widget($filter, &$form, &$form_state) {

  $option_all_text = variable_get($filter . '_option_all_text');
  $options = empty($option_all_text) ? array('' => GLOBAL_FILTER_DEF_OPTION_ALL_TEXT):
    ($option_all_text == '<none>' ? array() : array('' => $option_all_text));

  $name = $form_state['global_filter_name'];

  // Establish the widget type and create widget form accordingly.
  if (drupal_substr($name, 0, 4) == 'view') {

    $requested_widget = variable_get(global_filter_get_by_name($name) . '_widget');
    if (empty($requested_widget) || $requested_widget == 'default') {
      $requested_widget = 'select';
    }
    $view_name = drupal_substr($name, 5);
    global_filter_add_view_results($options, $view_name);

  }
  elseif (in_array($name, array(GLOBAL_FILTER_VIEWS_PROXIMITY_FIELD, GLOBAL_FILTER_VIEWS_SEARCH_TERMS_FIELD)) ||
          in_array($name, array_keys(global_filter_get_node_properties()))) {

    $requested_widget = 'textfield';
  }
  else {
    // Field-based widget
    $field = field_info_field($name);
    if (!$field) {
      if ($name) {
        drupal_set_message(t('The field %name used for %filter does not exist. Please re-configure the associated Global Filter block.',
          array('%name' => $name, '%filter' => $filter)), 'error');
      }
      return;
    }
    $instance = global_filter_get_field_instance($name);

    $requested_widget = variable_get(global_filter_get_by_name($name) . '_widget', 'default');

    if ($requested_widget == 'default' || $instance['widget']['type'] == 'textfield' || drupal_substr($instance['widget']['type'], 0, 4) == 'date') {
      // This widget is not available as a simple widget.
      $form_state['widget'] = $instance['widget']['type'];
      global_filter_create_field_instance_widget($option_all_text, $field, $instance, $form, $form_state);
      return;
    }

    // Simple or links widget, load up the $options.
    if ($field['type'] == 'taxonomy_term_reference') {
      $vocabulary_name = $field['settings']['allowed_values'][0]['vocabulary'];
      // Only show hierarchy depth indicators for select and multi-select.
      $show_depth = drupal_substr($requested_widget, -6) == 'select';
      _global_filter_add_terms($options, $vocabulary_name, $show_depth);
    }
    elseif (!empty($field['settings']['allowed_values'])) {
      foreach (list_allowed_values($field) as $value => $label) {
        $options[$value] = $label;
      }
    }
  }

  $form_state['widget'] = $requested_widget;
  if ($form_state['widget'] == 'links') {
    global_filter_create_links_widget($options, $form, $form_state);
  }
  else {
    global_filter_create_simple_widget($options, $form, $form_state);
  }
}

/**
 * Cast widget in the mould of the widget configured for the supplied's field.
 *
 * @param $option_all_text
 *   Currently not used. See global_filter_options_none().
 * @param $field
 * @param $instance
 * @param $form
 * @param $form_state
 */
function global_filter_create_field_instance_widget($option_all_text, $field, $instance, &$form, &$form_state) {

  $name = $form_state['global_filter_name'];
  $lang = $form_state['language'];

  if (!isset($form['#parents'])) {
    $form['#parents'] = array(); // must be set for most widgets before creation
  }

  // $items is used to set the default value on the widget
  if (drupal_substr($instance['widget']['type'], 0, 4) == 'date') {
    $items = global_filter_set_instance_widget_date_value($form_state);
    $form_state['field'][$name][$lang] = array(
      'field' => $field,
      'instance' => $instance,
      'items_count' => 1
    );
  }
  else {
    $session_value = global_filter_get_session_value($name);
    $items = global_filter_set_instance_widget_value($session_value, $field, $form_state);
  }

  // Uncomment next two lines to obtain control over the option list, with the
  // exception of the first 'none' option. See global_filter_options_list().
  //$field['real_module'] = $field['module'];
  //$field['module'] = 'global_filter';

  // Trying to add/suppress 'All' option. Line below doesn't have desired effect.
  // $instance['required'] = ($option_all_text == '<none>');

  $form += field_default_form($instance['entity_type'], NULL, $field, $instance, $lang, $items, $form, $form_state);
}

function global_filter_create_links_widget($options, &$form, &$form_state) {
  $post_it = variable_get('global_filter_links_widget_via_post', TRUE);
  if ($post_it) {
    $form['#attached']['js'] = array(drupal_get_path('module', 'global_filter') . '/global_filter.js');
  }
  $no_language = new stdClass();
  $no_language->language = FALSE;
  $name = $form_state['global_filter_name'];
  $selected_value = global_filter_get_session_value($name);
  $links = '';

  foreach ($options as $value => $link_text) {
    $active = is_array($selected_value) ? in_array($value, $selected_value) : $value == $selected_value;
    $link_options = array(
      'attributes' => array('title' => $link_text),
      'language' => $active ? NULL : $no_language // Hack to avoid every link being classed as 'active'
    );
    if (empty($value)) {
      $value = '';
    }
    if ($post_it) {
      $link_options['attributes']['id'] = "$name:$value";
      if ($active) {
        $link_options['attributes']['class'] = 'active';
      }
    }
    else {
      $link_options['query'] = array($name => $value);
    }
    $link = $post_it
      ? '<a href="" ' . drupal_attributes($link_options['attributes']) . ">$link_text</a>"
      : l($link_text, $_GET['q'], $link_options);
    $links .= ($active ? '<li class="active">' : '<li>') . $link . '</li>';
  }
  $form[$name]['#markup'] = '<ul class="global-filter-links ' . $name . '">' . $links . '</ul>';
  $form[$name]['#suffix'] = '<div class="suffix">' . t('Click link to filter') . '</div>';
}

function global_filter_create_simple_widget($options, &$form, &$form_state) {
  $name = $form_state['global_filter_name'];

  $default_value = isset($form_state['input'][$name])
    ? $form_state['input'][$name]
    : global_filter_get_session_value($name);

  if (is_array($default_value)) {
    if ($form_state['widget'] == 'radios' || $form_state['widget'] == 'textfield') {
      $default_value = reset($default_value);
    }
  }
  else {
    if ($form_state['widget'] == 'checkboxes') {
      $default_value = array($default_value);
    }
  }
  $form[$name] = array(
    '#type' => ($form_state['widget'] == 'multiselect') ? 'select' : $form_state['widget'],
    '#default_value' => $default_value,
    '#description' => empty($description) ? NULL : $description
  );
  if ($form_state['widget'] != 'textfield' && !empty($options)) {
    $form[$name]['#options'] = $options;
    $form[$name]['#multiple'] = in_array($form_state['widget'], array('multiselect', 'checkboxes'));
  }
}

function global_filter_add_submit_button(&$form, $filter) {
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Set'),
    '#submit' => array('global_filter_set_form_on_session'),
    '#weight' => 4,
  );
  $name = variable_get($filter);
  if ($form[$name]['#type'] != 'textfield' && variable_get($filter . '_set_on_select')) {

    // Add javascript to auto-submit on select.
    // We're adding a class rather than an id as it needs to be attached to all
    // of the <input>'s of each sequence of check boxes or radio buttons.
    $form[$name]['#attributes']['class'][] = "$filter-$name";
    drupal_add_js(array($filter => "$filter-$name"), 'setting');

    $form[$name]['#attached']['js'] = array(drupal_get_path('module', 'global_filter') . '/global_filter.js');

    // Suppress the 'Set' submit button defined above.
    $form['submit']['#attributes']['style'][] = 'display:none';
  }
}

function global_filter_add_view_results(&$options, $view_id) {
  $view = views_get_view($view_id);
  if (!is_object($view)) {
    drupal_set_message(t('Global Filter: could not find view: %view.', array(
      '%view' => empty($view_id) ? t('no name specified') : $view_id)), 'error');
    return FALSE;
  }
  $view->init_display();
  $view->pre_execute();
  $view->execute();
  // Pick the first non-id field of each returned row as the next value for
  // the filter.
  foreach ($view->result as $row) {
    $row_as_array = (array)$row;
    foreach ($row_as_array as $fid => $value) {
      if ($fid != $view->base_field) { // e.g. 'nid', 'uid', 'cid', 'tid', 'aid' {accesslog}
        break;
      }
    }
    $key = isset($row_as_array[$view->base_field]) ? $row_as_array[$view->base_field] : NULL;
    $options[empty($key) ? $value : $key] = $value;
  }
}

function global_filter_get_field_instance($field_name) {
  foreach (field_info_instances() as $type_bundles) {
    foreach ($type_bundles as $bundle_instances) {
      foreach ($bundle_instances as $f_name => $instance) {
        if ($f_name == $field_name) {
          return $instance;
        }
      }
    }
  }
  return NULL;
}

function global_filter_set_instance_widget_date_value(&$form_state) {
  $name = $form_state['global_filter_name'];
  $lang = $form_state['language'];

  if (empty($form_state['input'][$name][$lang])) {
    // If this is the first time the form is presented or if this form is on
    // a page with another global filter that was just set, we tell
    // hook_field_widget_form_alter() to take the date range from the session
    // and convert it into a format compatible with the widget.
    $form_state['set_date_from_session'] = TRUE;
    return array();
  }
  return reset($form_state['input'][$name][$lang]);
}

function global_filter_set_instance_widget_value($session_value, $field, $form_state) {
  $name = $form_state['global_filter_name'];
  $lang = $form_state['language'];

  $form_input  = isset($form_state['input' ][$name][$lang]) ? $form_state['input' ][$name][$lang] : NULL;
  $form_values = isset($form_state['values'][$name][$lang]) ? $form_state['values'][$name][$lang] : NULL;

  if (is_array($form_input)) {
    $value = $form_input;
  }
  if (is_array($form_values)) {
    // Usually this means an autocomplete taxonomy, retrieve the term id.
    $form_values = reset($form_values);
    $value = empty($form_values['tid']) ? $form_values['name'] : $form_values['tid'];
  }

  if (empty($value)) {
    $value = $session_value;
  }
  // $items is used to set defaults. Must use this format (multi-valued):
  //   $items[0][value_key] = 4
  //   $items[1][value_key] = 23
  $items = array();
  $value_key = key($field['columns']);
  if (is_array($value)) {
    foreach (global_filter_array_flatten($value) as $value) {
      $items[] = array($value_key => $value);
    }
  }
  else {
    $items[0][$value_key] = $value;
  }
  // If nothing set, return something that represents 'All'. Otherwise the
  // field widget will set the instance default.
  return empty($items) ? array(0 => array()) : $items;
}

/**
 * Stashes the selected global filter value in the user's HTTP session.
 *
 * The form format differs from the session format, which is the one passed to
 * the Views contextual filter. So a conversion needs to take place before
 * storing.
 *
 * @param array $form
 * @param array $form_state
 */
function global_filter_set_form_on_session($form, $form_state) {
  $is_done = &drupal_static(__FUNCTION__, array());

  $name = $form_state['global_filter_name'];

  if (empty($is_done[$name])) {
    $lang = $form_state['language'];
    $widget = $form_state['widget'];

    if (drupal_substr($widget, 0, 4) == 'date') {
      // If successful this function returns a date range in the format:
      // YYYYMMDD--YYYYMMDD, which is what the Views contextual filters need.
      $session_value = global_filter_extract_date_range($form_state);
    }
    elseif (drupal_substr($widget, 0, 8) == 'taxonomy') {
      // Taxonomy autocomplete
      $form_values = $form_state['values'][$name];
      $session_value = empty($form_values[$lang]) ? '' : $form_values[$lang][0]['tid'];
    }
    else {
      // The rest of the widgets, both single and multi-choice.
      $form_values = $form_state['values'][$name];
      if (is_array($form_values)) {
        // lang level won't be there for simple widgets
        if (empty($form_values[$lang])) {
          $session_value = array_values($form_values);
        }
        else {
          $session_value = array();
          foreach ($form_values[$lang] as $v) {
            $session_value[] = is_array($v) ? reset($v) : $v;
          }
        }
      }
      else {
        $session_value = $form_values;
      }
    }
    global_filter_set_on_session($name, $session_value);

    $is_done[$name] = TRUE;
  }
  // We don't need to rebuild the form values, as the second time round, we
  // pick them up from where they were dropped the first time, i.e. the session.
  // $form_state['rebuild'] = TRUE; // to preserve values entered on form
}

function global_filter_extract_date_range($form_state) {
  $name = $form_state['global_filter_name'];
  $lang = $form_state['language'];
  if (empty($form_state['input'][$name][$lang][0]) || !is_array($form_state['input'][$name][$lang][0])) {
    // Not a date
    return FALSE;
  }
  $values = $form_state['input'][$name][$lang][0];
  if (isset($values['value']['date'])) { // from date_popup
    $date_string = $values['value']['date'];
    if (!empty($date_string)) {
      // Convert to date range of format YYYYMMDD--YYYYMMDD
      $timestamp = strtotime($date_string);
      $value = format_date($timestamp, 'custom', 'Ymd');
      if (!empty($values['value2']['date'])) {
        $timestamp2 = strtotime($values['value2']['date']);
        $value .= '--' . format_date($timestamp2, 'custom', 'Ymd');
      }
    }
  }
  elseif (!empty($values['value']['day'])) { // from_date_select
    // Convert to date range of format YYYYMMDD--YYYYMMDD
    $value = $form_state['input'][$name][$lang][0]['value'];
    $day = drupal_strlen($value['day']) == 1 ? ('0' . $value['day']) : $value['day'];
    $month = drupal_strlen($value['month']) == 1 ? ('0' . $value['month']) : $value['month'];
    $value = $value['year'] . $month . $day;
    if (!empty($form_state['input'][$name][$lang][0]['value2']['day'])) {
      $value2 = $form_state['input'][$name][$lang][0]['value2'];
      $day = drupal_strlen($value2['day']) == 1 ? ('0' . $value2['day']) : $value2['day'];
      $month = drupal_strlen($value2['month']) == 1 ? ('0' . $value2['month']) : $value2['month'];
      $value .= '--' . $value2['year'] . $month . $day;
    }
  }
  // Check for corrupt date and return.
  return (empty($value) || drupal_strlen($value) < 8) ? '' : $value;
}

function _global_filter_add_terms(&$options, $vocabulary_machine_name, $show_depth = TRUE) {
  if (!module_exists('taxonomy')) {
    drupal_set_message(t('Global Filter: using vocabulary %vocabulary, but Taxonomy module is not enabled.', array('%vocabulary' => $vocabulary_machine_name)), 'error');
    return;
  }
  if (!empty($vocabulary_machine_name)) {
    foreach (taxonomy_get_vocabularies() as $vid => $vocabulary) {
      $found = ($vocabulary->machine_name == $vocabulary_machine_name);
      if ($found) {
        break;
      }
    }
  }
  if (empty($found)) {
    drupal_set_message(t('Global Filter: the vocabulary %vocabulary does not exist.', array('%vocabulary' => $vocabulary_machine_name)), 'error');
  }
  else {
    foreach (taxonomy_get_tree($vid) as $term) {
      // If $show_depth is set, we follow core's way and add one hyphen for each
      // hierarchy level.
      $options[$term->tid] = $show_depth ? (str_repeat('-', $term->depth) . $term->name) : $term->name;
    }
  }
}

/**
 * Quick and dirty way to flatten an array.
 *
 * @param $array
 * @return flattened array
 */
function global_filter_array_flatten($array) {
  foreach ($array as $key => $value) {
    $array[$key] = (array)$value;
  }
  return call_user_func_array('array_merge', $array);
}


/**
 * Implements hook_field_widget_properties_alter().
 *
 * Alters the widget properties of a field instance before it gets displayed.
 * Used here to make sure that no defaults are set on any widget, as we do that
 * ourselves (from the session), thank you very much.
 * This is done in global_filter_field_widget_form_alter().
 */
function global_filter_field_widget_properties_alter(&$widget, $context) {
  $widget['is_new'] = FALSE;
}

/**
 * Implements hook_field_widget_form_alter().
 *
 * Responds to 'set_date_from_session' being set on the $form_state.
 */
function global_filter_field_widget_form_alter(&$element, $form_state, $context) {

  if (!empty($form_state['set_date_from_session'])) {
    $session_value = global_filter_get_session_value($form_state['global_filter_name']);

    $date_range = new date_sql_handler();
    $parts = $date_range->arg_parts($session_value);

    if (!empty($parts[0]['date'])) {
      $instance = $context['instance'];
      $instance['settings']['default_value'] = 'strtotime';
      $instance['settings']['default_value_code']  = implode('-', $parts[0]['date']);
      if (!empty($parts[1]['date'])) {
        $instance['settings']['default_value2'] = 'strtotime';
        $instance['settings']['default_value_code2'] = implode('-', $parts[1]['date']);
      }
      $element['#default_value'] = reset(date_default_value($context['field'], $instance, $context['langcode']));
    }
  }
}

/**
 * Implements hook_date_combo_process_alter().
 *
 * Remove the 'Show End Date' checkbox and line up the start and end date boxes.
 */
function global_filter_date_combo_process_alter(&$element, &$form_state, &$context) {
  if (!empty($context['form']['#id']) && drupal_substr($context['form']['#id'], 0, 13) == 'global-filter') {
    unset($element['show_todate']); // remove 'Show End Date' checkbox
    if (empty($element['value']['#title'])) {
      // Remove 'to:' from end date box so that it lines up with start date box
      unset($element['value2']['#title']);
    }
  }
}

/**
 * Implements hook_theme_registry_alter().
 *
 * Override theme_options_none() (options.module) to make the '- None -' text
 * configurable for buttons and select lists, but only for Global Filter
 * widgets, see function global_filter_options_none() below.
 */
function global_filter_theme_registry_alter(&$theme_registry) {
  $theme_registry['options_none']['function'] = 'global_filter_options_none';
  $theme_registry['options_none']['theme_path'] = drupal_get_path('module', 'global_filter');
}

/*
 * theme_options_none() override.
 *
 * In addition to the regular options as returned by hook_options_list, the
 * Options module will always prepend a 'none' for non-required fields, whether
 * appearing as a single or multiple-select. We can't intercept this process.
 * We could make the select mandatory and then prepend a 'none' option
 * ourselves, but than we end up with a red asterisk for a select that isn't
 * really mandatory...
 *
 * Until I can find a way to determine if this is a global filter context,
 * I'll switch this feature off for global filters driven by field widgets.
 */
function global_filter_options_none($variables) {
  if (!empty($variables['global_filter_context'])) { // see comment above
    $filter = global_filter_get_by_name($variables['instance']['field_name']);
    $option_all_text = variable_get($filter . '_option_all_text');
    if (!empty($option_all_text)) {
      return $option_all_text == '<none>' ? '' : check_plain($option_all_text);
    }
  }
  // Not used in a global filter context or no 'All' text specified, so return
  // the widget default.
  return theme_options_none($variables);
}

function select_with_style_preprocess_options_none(&$variables) {
  // $variables['global_filter_context'] = TRUE;
  return;
}

function global_filter_options_list($field, $instance) {
  $options = (array) module_invoke($field['real_module'], 'options_list', $field, $instance);
  // ...
  return $options;
}
