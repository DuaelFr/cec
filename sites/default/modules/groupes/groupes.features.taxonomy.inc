<?php
/**
 * @file
 * groupes.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function groupes_taxonomy_default_vocabularies() {
  return array(
    'type_de_groupe' => array(
      'name' => 'Type de groupe',
      'machine_name' => 'type_de_groupe',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
