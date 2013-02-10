<?php
/**
 * @file
 * sequences.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sequences_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sequences_node_info() {
  $items = array(
    'sequence' => array(
      'name' => t('Séquence'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Intitulé orga'),
      'help' => '',
    ),
  );
  return $items;
}
