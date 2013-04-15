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
 * Implements hook_image_default_styles().
 */
function personnages_image_default_styles() {
  $styles = array();

  // Exported image style: trombinoscope.
  $styles['trombinoscope'] = array(
    'name' => 'trombinoscope',
    'effects' => array(
      1 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
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
  return $items;
}
