<?php
/**
 * @file
 * personnages.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function personnages_taxonomy_default_vocabularies() {
  return array(
    'nationalites' => array(
      'name' => 'Nationalités',
      'machine_name' => 'nationalites',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'occupations' => array(
      'name' => 'Occupations',
      'machine_name' => 'occupations',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'religions' => array(
      'name' => 'Religions',
      'machine_name' => 'religions',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
