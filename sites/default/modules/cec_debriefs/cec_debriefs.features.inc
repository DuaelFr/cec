<?php
/**
 * @file
 * cec_debriefs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cec_debriefs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cec_debriefs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function cec_debriefs_default_profile2_type() {
  $items = array();
  $items['debrief_sondage'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "debrief_sondage",
    "label" : "Debrief sondage",
    "weight" : "2",
    "data" : { "registration" : 0, "use_page" : 1 }
  }');
  $items['debrief_texte'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "debrief_texte",
    "label" : "Debrief texte",
    "weight" : "3",
    "data" : { "registration" : 0, "use_page" : 1 }
  }');
  return $items;
}
