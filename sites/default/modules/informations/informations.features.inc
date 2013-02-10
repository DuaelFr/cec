<?php
/**
 * @file
 * informations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function informations_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function informations_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function informations_node_info() {
  $items = array(
    'information' => array(
      'name' => t('Information'),
      'base' => 'node_content',
      'description' => t('Une information qui peut être perçue de diverses manières selon les Personnages ou les Groupes.'),
      'has_title' => '1',
      'title_label' => t('Intitulé orga'),
      'help' => '',
    ),
  );
  return $items;
}
