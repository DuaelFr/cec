<?php
/**
 * @file
 * global_filter.block.inc
 *
 * Block hooks for global_filter.module blocks.
 */

/**
 * Implements hook_block_info().
 */
function global_filter_block_info() {
  $num_filter_blocks = variable_get('global_filter_num_filters', GLOBAL_FILTER_DEF_NUM_FILTERS);
  for ($i = 1; $i <= $num_filter_blocks; $i++) {
    $info = variable_get("global_filter_$i");
    $blocks["global_filter_$i"] = array(
      'info' => t('Global filter @name', array('@name' => empty($info) ? "$i (not configured)" : $info)),
      'cache' => DRUPAL_NO_CACHE
    );
  }
  // For the case that the number of blocks is reduced.
  while ($i <= 10) {
    if ($name = variable_get("global_filter_$i")) {
      unset($_SESSION['global_filter'][$name]);
      _global_filter_remove_default_filter_from_views($name);
    }
    variable_del("global_filter_$i");
    variable_get("global_filter_$i" . '_set_on_init');
    $i++;
  }
  return $blocks;
}

/**
 * Implements hook_block_configure().
 */
function global_filter_block_configure($delta = '') {

  $form = array();
  $form['global_filter'] = array(
    '#type' => 'fieldset',
    '#title' => 'Global filter settings',
    '#collapsible' => FALSE
  );

  $form['global_filter']['driver'] = array(
    '#type' => 'fieldset',
    '#title' => 'Filter driver',
    '#collapsible' => FALSE,
    '#attributes' => array('id' => 'global-filter-driver')
  //'#description' => t('Select the field or view that drives the global filter options')
  );

  $form['global_filter']['driver'][$delta . '_uses_view'] = array(
    '#type' => 'radios',
    '#title' => t('Select whether this global filter is to be populated by a field or by a view'),
    '#options' => array(
      0 => t('field, content property, location proximity or search term(s)'),
      1 => t('view')
    ),
    '#default_value' => variable_get($delta . '_uses_view', 0),
  );
  // Add javascript to reveal the appropriate field or view selector depending
  // on the radio button selected.
  $path = drupal_get_path('module', 'global_filter');
  drupal_add_js($path . '/global_filter.js');

  $field_options = array_merge(
    array(
      '' => t('- None -'),
      GLOBAL_FILTER_VIEWS_PROXIMITY_FIELD => t('Location: Distance/Proximity'),
      GLOBAL_FILTER_VIEWS_SEARCH_TERMS_FIELD => t('Search: Search terms') // as in Views
    ),
    global_filter_get_node_properties(),
    global_filter_get_field_labels()
  );
  asort($field_options);
  $form['global_filter']['driver'][$delta . '_field'] = array(
    '#type' => 'select',
    '#title' => t('Choose the field to be used as a global filter'),
    '#default_value' => variable_get($delta . '_field'),
    '#options' => $field_options,
    '#description' => t('The field or property employed to populate the widget used to filter views or other page elements on.'),
    '#attributes' => array('id' => 'global-filter-selector-field')
  );
  $view_options = array_merge(
    array('' => t('- None -')),
    global_filter_get_view_names()
  );
  asort($view_options);
  $form['global_filter']['driver'][$delta . '_view'] = array(
    '#type' => 'select',
    '#title' => t('Choose the view to be used as a global filter'),
    '#default_value' => variable_get($delta . '_view'),
    '#options' => $view_options,
    '#description' => t('The view employed to populate the selector used to filter views or other page elements on.'),
    '#attributes' => array('id' => 'global-filter-selector-view')
  );

  $widget_options = variable_get($delta . '_uses_view', 0)
    ? array()
    : array('default' => t('Inherit from field (does not apply when view-driven)'));
  $widget_options += array(
    'select' => t('Single choice drop-down'),
    'radios' => t('Single choice radio buttons'),
    'multiselect' => t('Multi choice select box'),
    'checkboxes' => t('Multi choice check boxes'),
    'links' => t('List of hyperlinks')
  );

  $form['global_filter']['widget'] = array(
    '#type' => 'fieldset',
    '#title' => 'Widget to render the global filter',
    '#collapsible' => TRUE,
    '#description' => t('These options apply only if the global filter is not natively rendered as a textfield or date picker widget.')
  );
  $form['global_filter']['widget'][$delta . '_widget'] = array(
    '#type' => 'radios',
    '#title' => t('Widget'),
    '#default_value' => variable_get($delta . '_widget', 'default'),
    '#options' => $widget_options,
    '#description' => t("If you tick one of the multi choice widgets, make sure to tick the <strong>Allow multiple values</strong> box in the <strong>More</strong> section of the view's contextual filter."),
  );
  $form['global_filter']['widget'][$delta . '_option_all_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Text to appear as the "all" option (non-field widgets only)'),
    '#default_value' => variable_get($delta . '_option_all_text'),
    '#description' => t('Field widgets always use core defaults. Remaining widgets default to <strong>@all</strong>, if left blank.<br/>Enter <em>&lt;none&gt;</em> to omit the "all" option from the widget. <em>&lt;none&gt;</em> is recommended for multi choice widgets.',
      array('@all' => GLOBAL_FILTER_DEF_OPTION_ALL_TEXT))
  );
  $form['global_filter']['widget'][$delta . '_set_on_select'] = array(
    '#type' => 'checkbox',
    '#title' => t('Invoke widget immediately upon select'),
    '#default_value' => variable_get($delta . '_set_on_select'),
    '#description' => t('When ticked this does away with the Set button next to the widget. Not recommended for multi choice widgets.')
  );

  $form['global_filter']['global_defaults'] = array(
    '#type' => 'fieldset',
    '#title' => 'Global filter defaults',
    '#collapsible' => TRUE,
  );
  $field_or_view_options = array('' => ' - ' . t('No default ("all")') . ' - ');
  if (variable_get($delta . '_uses_view', 0)) {
    // Execute View to present possible default values.
    $view_name = drupal_substr(variable_get($delta . '_view'), 5);
    global_filter_add_view_results($field_or_view_options, $view_name);
  }
  else {
    // Retrieve field values
    $field_name = variable_get($delta . '_field');
    $field = field_info_field($field_name);
    if ($field['type'] == 'taxonomy_term_reference') {
      $vocabulary_name = $field['settings']['allowed_values'][0]['vocabulary'];
      _global_filter_add_terms($field_or_view_options, $vocabulary_name);
    }
    elseif (!empty($field['settings']['allowed_values'])) {
      foreach (list_allowed_values($field) as $key => $value) {
        $field_or_view_options[$key] = $value;
      }
    }
  }
  $form['global_filter']['global_defaults'][$delta . '_global_field_or_view_default'] = array(
    '#type' => 'select',
    '#title' => t('Default value for the field or view selected above'),
    '#multiple' => in_array(variable_get($delta . '_widget'), array('multiselect', 'checkboxes', 'default')),
    '#options' => $field_or_view_options,
    '#size' => 1,
    '#description' => t('Optionally select default value(s) for the field or view above. These values will be active until the user selects another global filter value.'),
    '#default_value' => variable_get($delta . '_global_field_or_view_default'),
  );
  $description = t("Enclose in PHP 'brackets'. Examples:<br/><code>&lt;?php return 'Beatles'; ?&gt;</code><br/><code>&lt;?php return '20120101--20121231'; ?&gt;</code> (date range, note the double hyphen)<br/>If the selected widget allows multiple choices, then return either an array or a string with choices delimited by plus signs.");
  if (!module_exists('php')) {
    $description .= t('<br/>Enable the core <strong>PHP filter</strong> module for this setting to take effect.');
  }
  $form['global_filter']['global_defaults'][$delta . '_global_php_default'] = array(
    '#type' => 'textfield',
    '#title' => t('Alternatively specify a default through PHP code'),
    '#default_value' => variable_get($delta . '_global_php_default'),
    '#description' => $description
  );

  $form['global_filter'][$delta . '_set_on_init'] = array(
    '#type' => 'checkbox',
    '#title' => t("Guarantee that all dependent page elements immediately receive this global filter's newly selected value"),
    '#default_value' => variable_get($delta . '_set_on_init', FALSE),
    '#description' => t("Only tick this box when you're finding that you need to refresh the page or set the global filter twice before the value is picked up by the depending page element. Should not be necessary for global filters used as contextual filter arguments in views.")
  );
  return $form;
}

/**
 * Implements hook_block_view().
 */
function global_filter_block_view($delta = '') {
  $block = array();
  $filter_name = variable_get($delta);
  if (drupal_substr($filter_name, 0, 4) == 'view') {
    $all_views = global_filter_get_view_names();
    $block['subject'] = drupal_substr($all_views[$filter_name], 6);
  }
  elseif (!empty($filter_name)) {
    $all_filters = array_merge(
      array(GLOBAL_FILTER_VIEWS_PROXIMITY_FIELD => t('Location: Distance/Proximity'),
            GLOBAL_FILTER_VIEWS_SEARCH_TERMS_FIELD => t('Search: Search terms')),
      global_filter_get_node_properties(),
      global_filter_get_field_labels()
    );
    if (isset($all_filters[$filter_name])) {
      $label = $all_filters[$filter_name];
      $pos_colon = strpos($label, ':');
      $pos_bracket = strrpos($label, '(');
      $block['subject'] = drupal_substr($label, $pos_colon + 2, $pos_bracket > $pos_colon ? $pos_bracket - $pos_colon - 3 : NULL);
    }
  }
  $block['content'] = drupal_get_form($delta); // $delta becomes id="global-filter-2" on form
  return $block;
}

/**
 * Implements hook_block_save().
 */
function global_filter_block_save($delta = '', $edit = array()) {
  $uses_view = $edit[$delta . '_uses_view'];
  $old_name = variable_get($delta);
  $new_name = $uses_view ? $edit[$delta . '_view'] : $edit[$delta . '_field'];

  variable_set($delta . '_uses_view', $uses_view);
  variable_set($delta . '_view', $edit[$delta . '_view']);
  variable_set($delta . '_field', $edit[$delta . '_field']);
  variable_set($delta . '_widget',  $edit[$delta . '_widget']);
  variable_set($delta . '_option_all_text', $edit[$delta . '_option_all_text']);
  variable_set($delta . '_set_on_select', $edit[$delta . '_set_on_select']);
  variable_set($delta . '_global_field_or_view_default', $edit[$delta . '_global_field_or_view_default']);
  variable_set($delta . '_global_php_default', $edit[$delta . '_global_php_default']);
  variable_set($delta . '_set_on_init', $edit[$delta . '_set_on_init']);

  if (empty($new_name)) {
    variable_del($delta);
  }
  else {
    variable_set($delta, $new_name);
  }

  if (empty($old_name) || $old_name != $new_name) {
    if (module_exists('views')) {
      _global_filter_remove_default_filter_from_views($old_name);
    }
    if (!empty($new_name)) {
      drupal_set_message(t('As you changed the global filter driver to %new, please check that the <strong>Global Filter defaults</strong> are correct. If not, make a selection and press <em>Save block</em>.',
        array('%new' => $new_name)));
      drupal_goto($_GET['q']);
    }
  }
}

/**
 * Get a list of labels of fields of the supplied type, or all fields if type is
 * omitted.
 *
 * @param string $field_type, e.g. 'text'; for all lists use 'list'.
 * @return array of labels indexed by field machine names
 */
function global_filter_get_field_labels($field_type = NULL) {
  $field_names = &drupal_static(__FUNCTION__, array());
  if (empty($field_names)) {
    $prefix = t('Field');
    foreach (field_info_instances() as $type_bundles) {
      foreach ($type_bundles as $bundle_instances) {
        foreach ($bundle_instances as $field_name => $instance) {
          $field = field_info_field($field_name);
          if (empty($field_type) || $field_type == $field['type'] || ($field_type == 'list' && drupal_substr($field['type'], 0, 4) == 'list')) {
            $field_names[$field_name] = $prefix . ': ' . $instance['label'] . " ($field_name)";
          }
        }
      }
    }
  }
  return $field_names;
}