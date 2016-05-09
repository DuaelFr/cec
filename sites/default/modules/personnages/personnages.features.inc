<?php
/**
 * @file
 * personnages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function personnages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function personnages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function personnages_image_default_styles() {
  $styles = array();

  // Exported image style: trombinoscope.
  $styles['trombinoscope'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'trombinoscope',
  );

  return $styles;
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
  drupal_alter('node_info', $items);
  return $items;
}
