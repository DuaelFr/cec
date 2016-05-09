<?php
/**
 * @file
 * temperaments.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function temperaments_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-temperament-field_antonym'.
  $field_instances['taxonomy_term-temperament-field_antonym'] = array(
    'bundle' => 'temperament',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_antonym',
    'label' => 'Tempérament antagoniste',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Tempérament antagoniste');

  return $field_instances;
}
