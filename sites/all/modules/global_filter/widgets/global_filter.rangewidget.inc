<?php

/**
 * @file
 * global_filter.rangewidget.inc
 *
 * Requires module contextual_range_filter.
 */

/**
 * Called via hook_field_widget_form_alter().
 *
 * Turns slider widget into a slider range widget...
 * ...provided this was requested on the Global Filter block configuration
 * ...provided Contextual Range Filter module is enabled.
 */
function global_filter_field_slider_widget_form_alter(&$element, &$form_state, $context) {

  $name = $element['#field_name']; // or $context['instance']['field_name'];
  $filter_key = global_filter_key_by_name($name);

  $convert_to_range = global_filter_get_parameter($filter_key, 'convert_to_range');
  $autosubmit = global_filter_get_parameter($filter_key, 'set_on_select');

  $slider_settings = &$element['value']['#attached']['js']['0']['data']['slider'];
  $lang = $form_state['language'];

  foreach ($slider_settings as &$settings) { // normally loops only once

    $settings['autosubmit'] = $autosubmit;

    // Only convert slider to range slider if we can support ranges via module
    // Contextual Range Filter. Maybe we should also check if this field is
    // actually enabled as a CRF ?
    if ($convert_to_range && module_exists('contextual_range_filter')) {
      $settings['range'] = TRUE;

      // Remove validation and ease maxlength restriction on textfield when it's a range
      unset($element['value']['#element_validate']);
      //$element['value']['#size'] = min(8, $element['value']['#size']);
      if (isset($element['value']['#maxlength'])) {
        $element['value']['#maxlength'] = max(12, $element['value']['#maxlength']);
      }
      if (empty($form_state['input'][$name][$lang][0])) {
        $range = global_filter_get_session_value($name);
      }
      else {
        $range = reset($form_state['input'][$name][$lang][0]);
      }
      list($from, $to) = contextual_range_filter_split(is_array($range) ? reset($range) : $range);

      $settings['values'] = array(
        empty($from) ? $settings['min'] : $from,
        empty($to)   ? $settings['max'] : $to
      );
      unset($settings['value']);
    }
  }
}

function global_filter_create_range_widget($filter_key, &$form, &$form_state) {

  if (!module_exists('contextual_range_filter')) { // revert to single textfield
    $form_state['global_filters'][$filter_key]['widget'] = 'textfield';
    global_filter_create_simple_widget($filter_key, NULL, $form, $form_state);
    return;
  }
  $name = $form_state['global_filters'][$filter_key]['name'];

  list($from, $to) = contextual_range_filter_split(global_filter_get_session_value($name));

  if (isset($form_state['input']['from'])) {
    $from = $form_state['input']['from'];
  }
  if (isset($form_state['input']['to'])) {
    $to = $form_state['input']['to'];
  }

  $form[$name] = array(
    '#type' => 'fieldset',
    '#element_validate' => array('global_filter_range_widget_validate')
  );
  $form[$name]['from'] = array(
    '#title' => t('From'),
    '#type' => 'textfield',
    '#size' => 8,
    '#maxlength' => 32,
    '#default_value' => $from,
    '#description' => t('May be left blank.')
  );
  $form[$name]['to'] = array(
    '#title' => t('To'),
    '#type' => 'textfield',
    '#size' => 8,
    '#maxlength' => 32,
    '#default_value' => empty($to) ? '' : $to, // $to could be FALSE
    '#description' => t('May be left blank.')
  );
}

function global_filter_range_widget_validate($form, &$form_state) {
  $from = $form_state['values']['from'];
  $to = $form_state['values']['to'];
  // Only validate numbers as PHP char order may not be order used by database.
  if (is_numeric($from) && is_numeric($to) && $from > $to) {
    form_set_error('from', t('"from" value must not be greater than "to" value.'));
    form_set_error('to');
  }
}

/**
 * Convert "from" and "to" values on the form to a single range string.
 *
 * @param $form_state
 * @return range in the format from--to, from-- or --to
 */
function global_filter_extract_alphanumeric_range($form_state) {
  $from = $form_state['values']['from'];
  $to = $form_state['values']['to'];
  return ($from === $to) ? $from : "$from--$to";
}
