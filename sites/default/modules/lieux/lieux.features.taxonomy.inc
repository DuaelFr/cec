<?php
/**
 * @file
 * lieux.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lieux_taxonomy_default_vocabularies() {
  return array(
    'location_type' => array(
      'name' => 'Type de lieu',
      'machine_name' => 'location_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
