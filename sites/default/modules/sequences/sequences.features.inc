<?php
/**
 * @file
 * sequences.features.inc
 */

/**
 * Implements hook_default_bat_event_type().
 */
function sequences_default_bat_event_type() {
  $items = array();
  $items['availability'] = entity_import('bat_event_type', '{
    "type" : "availability",
    "label" : "Disponibilit\\u00e9",
    "event_granularity" : "bat_hourly",
    "fixed_event_states" : "1",
    "weight" : "0",
    "default_event_value_field_ids" : null,
    "default_event_label_field_name" : "field_sequence",
    "data" : "",
    "target_entity_type" : "bat_unit",
    "event_states" : [
      {
        "machine_name" : "available",
        "label" : "Disponible",
        "color" : "#009900",
        "calendar_label" : "Dispo",
        "locked" : "0",
        "blocking" : "0",
        "default_state" : "1"
      },
      {
        "machine_name" : "unavailable",
        "label" : "Utilis\\u00e9",
        "color" : "#990000",
        "calendar_label" : "Indisp.",
        "locked" : "0",
        "blocking" : "1",
        "default_state" : "0"
      }
    ]
  }');
  return $items;
}

/**
 * Implements hook_default_bat_type_bundle().
 */
function sequences_default_bat_type_bundle() {
  $items = array();
  $items['resource'] = entity_import('bat_type_bundle', '{
    "type" : "resource",
    "label" : "Ressource",
    "weight" : "0",
    "data" : { "revision" : 0 },
    "default_event_value_field_ids" : { "availability" : "field_default_state" }
  }');
  return $items;
}

/**
 * Implements hook_default_bat_unit_bundle().
 */
function sequences_default_bat_unit_bundle() {
  $items = array();
  $items['npc'] = entity_import('bat_unit_bundle', '{ "type" : "npc", "label" : "PNJ", "weight" : "0", "data" : "" }');
  $items['pc'] = entity_import('bat_unit_bundle', '{ "type" : "pc", "label" : "PJ", "weight" : "0", "data" : "" }');
  $items['stuff'] = entity_import('bat_unit_bundle', '{
    "type" : "stuff",
    "label" : "Mat\\u00e9riel",
    "weight" : "0",
    "data" : ""
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function sequences_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sequences_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sequences_node_info() {
  $items = array(
    'sequence' => array(
      'name' => t('Séquence'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Intitulé orga'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
