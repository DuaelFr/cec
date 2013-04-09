<?php
/**
 * @file
 * informations.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function informations_taxonomy_default_vocabularies() {
  return array(
    'information_type' => array(
      'name' => 'Type d\'information',
      'machine_name' => 'information_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
