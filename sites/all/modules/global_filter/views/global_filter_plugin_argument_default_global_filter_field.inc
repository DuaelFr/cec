
<?php
/**
 * @file
 * Contains the Global Filter default argument plugin (field).
 */

/**
 * Default argument plugin to extract the global filter value set for this
 * contextual filter.
 *
 * If the argument is a date or date range, it must be in this format:
 * YYYYMMDD--YYYYMMDD
 * Note the double hyphen, if a date range is used, which is always the case.
 */
class global_filter_plugin_argument_default_global_filter_field extends views_plugin_argument_default {

  function get_argument() {
    $field_name = $views_field_name = $this->argument->field;

    if (!($filter_found = global_filter_get_by_name($views_field_name))) {
      // Not found as a node property, maybe it's a field.
      // Where $views_field_name refers to a field it equals one of:
      // '<field_name>_value', '<field_name>_tid' or '<field_name>_fid'
      $_ = strrpos($views_field_name, '_');
      $field_name = drupal_substr($views_field_name, 0, $_);
      $filter_found = global_filter_get_by_name($field_name);
    }
    $exception_value = $this->argument->options['exception']['value']; // e.g. 'all'
    if ($filter_found) {

      if (isset($_SESSION['global_filter'][$field_name])) {
        $arg = $_SESSION['global_filter'][$field_name];
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
    $view_name = empty($this->view->human_name) ? $this->view->name : $this->view->human_name;
    drupal_set_message(t('The view %view specifies a global filter field, %name, as its default contextual filter. However there is no associated <strong>Global Filter block</strong> for %name. Please configure a global filter <a href="/admin/structure/block">here</a> or remove this contextual filter default argument from the view.', array(
      '%view' => $view_name, '%name' => $views_field_name)), 'warning', FALSE);
    return $exception_value;
  }
}
