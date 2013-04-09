<?php
/**
 * @file
 * sequences.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function sequences_taxonomy_default_vocabularies() {
  return array(
    'sequence_type' => array(
      'name' => 'Type de séquence',
      'machine_name' => 'sequence_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
