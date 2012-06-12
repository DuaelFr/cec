<?php
/**
 * @file
 * temperaments.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function temperaments_taxonomy_default_vocabularies() {
  return array(
    'temperament' => array(
      'name' => 'Tempérament',
      'machine_name' => 'temperament',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
