<?php
/**
 * @file
 * cec_commons.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cec_commons_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}