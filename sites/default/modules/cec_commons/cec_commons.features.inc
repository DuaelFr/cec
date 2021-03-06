<?php
/**
 * @file
 * cec_commons.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cec_commons_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cec_commons_views_api() {
  return [
    'api' => 3,
    'path' => drupal_get_path('module', 'cec_commons') . '/views',
  ];
}
