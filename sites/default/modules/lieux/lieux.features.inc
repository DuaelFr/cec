<?php
/**
 * @file
 * lieux.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lieux_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function lieux_node_info() {
  $items = array(
    'location' => array(
      'name' => t('Lieu'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Intitulé'),
      'help' => '',
    ),
  );
  return $items;
}
