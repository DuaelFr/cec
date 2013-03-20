<?php
/**
 * @file
 * Contains the Global Filter default argument plugin (view).
 */

/**
 * Default argument plugin to extract the View filter values set for this
 * contextual filter.
 */
class global_filter_plugin_argument_default_global_filter_view extends views_plugin_argument_default {

  function option_definition() {
    $options = parent::option_definition();
    $options['global_filter_view'] = array('default' => '');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['global_filter_view'] = array(
      '#type' => 'select',
      '#title' => t('View providing default value'),
      '#options' => global_filter_get_used_view_names(),
      '#default_value' => $this->options['global_filter_view'],
      '#description' => t('Select the global filter view(s) that will provide the default value for this contextual filter.'),
      '#multiple' => TRUE, // [#1618302]
    );
  }

  function get_argument() {

    $arg = $view_names = $this->options['global_filter_view'];

    if (!empty($view_names)) {
      if (!is_array($view_names)) {
        $view_names = array($view_names);
      }
      $arg = array();
      foreach ($view_names as $view_name) {
        $value = global_filter_get_session_value($view_name);
        if (isset($value)) {
          if (is_array($value)) {
            $arg = array_merge($arg, $value);
          }
          else {
            $arg[] = $value;
          }
        }
      }
      $arg = array_filter($arg);
    }
    if (empty($arg)) {
      $arg = $this->argument->options['exception']['value']; // e.g. 'all'
    }
    // If the argument is multi-valued, ie multi-select box or check boxes,
    // string the values together separated by plus-signs.
    // Note this requires the user to tick "Allow multiple values" after
    // expanding the "More" fieldset on the Contextual Filter configuration
    // panel. Otherwise only the first of the values will used.
    return is_array($arg) ? implode('+', $arg) : $arg;
  }
}
