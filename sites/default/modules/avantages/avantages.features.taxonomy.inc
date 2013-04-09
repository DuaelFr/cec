<?php
/**
 * @file
 * avantages.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function avantages_taxonomy_default_vocabularies() {
  return array(
    'avantage_type' => array(
      'name' => 'Type d\'avantage',
      'machine_name' => 'avantage_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
