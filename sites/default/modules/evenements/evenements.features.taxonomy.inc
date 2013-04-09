<?php
/**
 * @file
 * evenements.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function evenements_taxonomy_default_vocabularies() {
  return array(
    'event_type' => array(
      'name' => 'Type d\'évènement',
      'machine_name' => 'event_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
