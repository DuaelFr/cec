<?php
/**
 * @file
 * personnages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function personnages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function personnages_views_api() {
  return array("api" => "3.0");
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function personnages_node_info() {
  $items = array(
    'character' => array(
      'name' => t('Personnage'),
      'base' => 'node_content',
      'description' => t('Personnage joueur ou non joueur, incarné pendant le GN ou pas.'),
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
  );
  return $items;
}