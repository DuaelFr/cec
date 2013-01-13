<?php
/**
 * @file
 * intrigues.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function intrigues_taxonomy_default_vocabularies() {
  return array(
    'intrigue_theme' => array(
      'name' => 'Thématique d\'intrigue',
      'machine_name' => 'intrigue_theme',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'intrigue_type' => array(
      'name' => 'Type d\'intrigue',
      'machine_name' => 'intrigue_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
