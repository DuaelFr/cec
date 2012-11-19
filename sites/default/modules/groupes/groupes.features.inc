<?php
/**
 * @file
 * groupes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function groupes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function groupes_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function groupes_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Groupe'),
      'base' => 'node_content',
      'description' => t('Groupe de personnages, public ou secret.'),
      'has_title' => '1',
      'title_label' => t('Intitulé membres'),
      'help' => '',
    ),
  );
  return $items;
}
