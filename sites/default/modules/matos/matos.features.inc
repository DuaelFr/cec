<?php
/**
 * @file
 * matos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function matos_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function matos_node_info() {
  $items = array(
    'stuff' => array(
      'name' => t('Matériel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Intitulé'),
      'help' => '',
    ),
  );
  return $items;
}
