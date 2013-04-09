<?php
/**
 * @file
 * matos.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function matos_taxonomy_default_vocabularies() {
  return array(
    'stuff_type' => array(
      'name' => 'Type de matériel',
      'machine_name' => 'stuff_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
