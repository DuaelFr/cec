<?php
/**
 * @file
 * personnages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function personnages_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_canevas|node|character|default';
  $field_group->group_name = 'group_canevas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_onglets';
  $field_group->data = array(
    'label' => 'Canevas',
    'weight' => '9',
    'children' => array(
      0 => 'field_canevas',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_canevas|node|character|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_canevas|node|character|form';
  $field_group->group_name = 'group_canevas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Canevas',
    'weight' => '7',
    'children' => array(
      0 => 'field_species',
      1 => 'field_nationalite',
      2 => 'field_confession',
      3 => 'field_canevas',
      4 => 'field_occupation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_canevas|node|character|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_complements|node|character|default';
  $field_group->group_name = 'group_complements';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Compléments',
    'weight' => '0',
    'children' => array(
      0 => 'field_species',
      1 => 'field_nationalite',
      2 => 'field_confession',
      3 => 'field_occupation',
      4 => 'group_temperaments',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Compléments',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_complements|node|character|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_groupes|node|character|default';
  $field_group->group_name = 'group_groupes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_onglets';
  $field_group->data = array(
    'label' => 'Groupes',
    'weight' => '10',
    'children' => array(
      0 => 'field_view_groups',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_groupes|node|character|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_onglets|node|character|default';
  $field_group->group_name = 'group_onglets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'group_canevas',
      1 => 'group_groupes',
      2 => 'group_avantages',
      3 => 'group_informations',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_onglets|node|character|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_data|node|character|form';
  $field_group->group_name = 'group_public_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Trombinoscope',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_photo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_public_data|node|character|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_temperaments|node|character|default';
  $field_group->group_name = 'group_temperaments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_complements';
  $field_group->data = array(
    'label' => 'Tempéraments',
    'weight' => '12',
    'children' => array(
      0 => 'field_temperament1',
      1 => 'field_temperament2',
      2 => 'field_temperament3',
      3 => 'field_temperament4',
      4 => 'field_temperament5',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tempéraments',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_temperaments|node|character|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_temperaments|node|character|form';
  $field_group->group_name = 'group_temperaments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tempéraments',
    'weight' => '6',
    'children' => array(
      0 => 'field_temperament1',
      1 => 'field_temperament2',
      2 => 'field_temperament3',
      3 => 'field_temperament4',
      4 => 'field_temperament5',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_temperaments|node|character|form'] = $field_group;

  return $export;
}
