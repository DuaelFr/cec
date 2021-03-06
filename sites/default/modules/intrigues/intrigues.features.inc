<?php
/**
 * @file
 * intrigues.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function intrigues_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function intrigues_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function intrigues_node_info() {
  $items = array(
    'intrigue' => array(
      'name' => t('Intrigue'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Intitulé orga'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
