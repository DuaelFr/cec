<?php
/**
 * @file
 * evenements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function evenements_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function evenements_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function evenements_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Evénement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Intitulé orga'),
      'help' => '',
    ),
  );
  return $items;
}
