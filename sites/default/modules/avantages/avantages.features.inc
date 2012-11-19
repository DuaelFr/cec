<?php
/**
 * @file
 * avantages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function avantages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function avantages_node_info() {
  $items = array(
    'avantage' => array(
      'name' => t('Avantage'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nom public'),
      'help' => '',
    ),
  );
  return $items;
}
