<?php
/**
 * @file
 * profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function profiles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function profiles_default_profile2_type() {
  $items = array();
  $items['inscription_administrative'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "inscription_administrative",
    "label" : "Inscription Administrative",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  $items['profil_joueur'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "profil_joueur",
    "label" : "Profil Joueur",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  $items['profil_pnj_orga'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "profil_pnj_orga",
    "label" : "Profil PNJ\\/Orga",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  return $items;
}
