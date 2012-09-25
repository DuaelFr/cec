<?php
/**
 * @file
 * profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function profiles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|profile2|inscription_administrative|form';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'inscription_administrative';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administratif',
    'weight' => '3',
    'children' => array(
      0 => 'field_image_right',
      1 => 'field_convention',
      2 => 'field_storage',
      3 => 'field_insurance',
      4 => 'field_membership',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Administratif',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_admin|profile2|inscription_administrative|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_character_profile|profile2|profil_joueur|form';
  $field_group->group_name = 'group_character_profile';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profil_joueur';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profil du rôle',
    'weight' => '1',
    'children' => array(
      0 => 'field_character_name',
      1 => 'field_exposure',
      2 => 'field_storage',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Profil du rôle',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_character_profile|profile2|profil_joueur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|profile2|inscription_administrative|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'inscription_administrative';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '1',
    'children' => array(
      0 => 'field_address',
      1 => 'field_phone1',
      2 => 'field_phone2',
      3 => 'field_phone_international',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact|profile2|inscription_administrative|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_detail|profile2|profil_joueur|form';
  $field_group->group_name = 'group_detail';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profil_joueur';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Plus en détail',
    'weight' => '3',
    'children' => array(
      0 => 'field_job1',
      1 => 'field_job2',
      2 => 'field_job0',
      3 => 'field_origin',
      4 => 'field_freetalk',
      5 => 'field_great_costume',
      6 => 'field_help_costume',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Plus en détail',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_detail|profile2|profil_joueur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_first|profile2|profil_joueur|form';
  $field_group->group_name = 'group_first';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profil_joueur';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'En premier lieu...',
    'weight' => '2',
    'children' => array(
      0 => 'field_temperament1',
      1 => 'field_temperament2',
      2 => 'field_temperament3',
      3 => 'field_temperament4',
      4 => 'field_temperament5',
      5 => 'field_temperament_intro',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'En premier lieu...',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_first|profile2|profil_joueur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_health|profile2|inscription_administrative|form';
  $field_group->group_name = 'group_health';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'inscription_administrative';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Santé',
    'weight' => '2',
    'children' => array(
      0 => 'field_health',
      1 => 'field_food',
      2 => 'field_health_skills',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Santé',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_health|profile2|inscription_administrative|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_identity|profile2|inscription_administrative|form';
  $field_group->group_name = 'group_identity';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'inscription_administrative';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Identité',
    'weight' => '0',
    'children' => array(
      0 => 'field_firstname',
      1 => 'field_lastname',
      2 => 'field_birthdate',
      3 => 'field_photo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Identité',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_identity|profile2|inscription_administrative|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relationship|profile2|profil_joueur|form';
  $field_group->group_name = 'group_relationship';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profil_joueur';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relations en jeu',
    'weight' => '4',
    'children' => array(
      0 => 'field_friends',
      1 => 'field_group',
      2 => 'field_love',
      3 => 'field_love_condition',
      4 => 'field_crimes',
      5 => 'field_crimes_condition',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Relations en jeu',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_relationship|profile2|profil_joueur|form'] = $field_group;

  return $export;
}
