<?php
/**
 * @file
 * lieux.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lieux_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lieux_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
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
  drupal_alter('node_info', $items);
  return $items;
}
