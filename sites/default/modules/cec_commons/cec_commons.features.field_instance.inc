<?php
/**
 * @file
 * cec_commons.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cec_commons_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_version-field_alternate_body'.
  $field_instances['field_collection_item-field_version-field_alternate_body'] = array(
    'bundle' => 'field_version',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_alternate_body',
    'label' => 'Contenu Interprétation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_version-field_alternate_title'.
  $field_instances['field_collection_item-field_version-field_alternate_title'] = array(
    'bundle' => 'field_version',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_alternate_title',
    'label' => 'Intitulé interprétation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_version-field_target'.
  $field_instances['field_collection_item-field_version-field_target'] = array(
    'bundle' => 'field_version',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_target',
    'label' => 'Cible Interprétation',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'user-user-field_unit_ref'.
  $field_instances['user-user-field_unit_ref'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_unit_ref',
    'label' => 'Disponibilité',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bat_calendar_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
      ),
      'type' => 'bat_calendar_reference_unit_autocomplete',
      'weight' => 52,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Cible Interprétation');
  t('Contenu Interprétation');
  t('Disponibilité');
  t('Intitulé interprétation');

  return $field_instances;
}
