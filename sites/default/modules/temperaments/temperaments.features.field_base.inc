<?php
/**
 * @file
 * temperaments.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function temperaments_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_antonym'.
  $field_bases['field_antonym'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_antonym',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'temperament',
          'parent' => 0,
        ),
      ),
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
