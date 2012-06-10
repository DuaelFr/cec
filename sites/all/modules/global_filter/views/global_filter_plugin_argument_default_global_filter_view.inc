
<?php
/**
 * @file
 * Contains the Global Filter default argument plugin (view).
 */

/**
 * Default argument plugin to extract the global View filter value set for this
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
      '#description' => t('Select the global filter view that will provide the default value for this contextual filter.')
    );
  }

  function get_argument() {
    $exception_value = $this->argument->options['exception']['value']; // e.g. 'all'
    $view_name = $this->options['global_filter_view'];

    if (isset($_SESSION['global_filter'][$view_name])) {
      $arg = $_SESSION['global_filter'][$view_name];
      if (is_array($arg)) {
        $arg = array_filter($arg);
      }
      if (empty($arg)) {
        $arg = $exception_value;
      }
    }
    else {
      $arg = $exception_value;
    }
    // If the argument is multi-valued (combo-box or checkboxes) string the
    // values together separated by plus-signs.
    // Note this requires the user to tick "Allow multiple values" after
    // expanding the "More" fieldset on the Contextual Filter configuration
    // panel. Otherwise only the first of the values will used.
    return is_array($arg) ? implode('+', $arg) : $arg;
  }
}
