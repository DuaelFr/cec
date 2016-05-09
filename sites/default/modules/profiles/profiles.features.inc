<?php
/**
 * @file
 * profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function profiles_default_profile2_type() {
  $items = array();
  $items['inscription_administrative'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "inscription_administrative",
    "label" : "Inscription Administrative",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 }
  }');
  $items['profil_joueur'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "profil_joueur",
    "label" : "Profil Joueur",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 }
  }');
  return $items;
}
