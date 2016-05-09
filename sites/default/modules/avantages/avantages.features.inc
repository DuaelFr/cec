<?php
/**
 * @file
 * avantages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function avantages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function avantages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
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
  drupal_alter('node_info', $items);
  return $items;
}
