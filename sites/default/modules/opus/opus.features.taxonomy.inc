<?php
/**
 * @file
 * opus.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function opus_taxonomy_default_vocabularies() {
  return array(
    'opus' => array(
      'name' => 'Opus',
      'machine_name' => 'opus',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
