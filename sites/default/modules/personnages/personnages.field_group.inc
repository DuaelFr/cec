<?php
/**
 * @file
 * personnages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function personnages_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_avantages|node|character|default';
  $field_group->group_name = 'group_avantages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_onglets';
  $field_group->data = array(
    'label' => 'Avantages',
    'weight' => '26',
    'children' => array(
      0 => 'field_credit',
      1 => 'field_pugilat',
      2 => 'view_avantages_player',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-avantages field-group-htab',
      ),
    ),
  );
  $field_groups['group_avantages|node|character|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_avantages|node|character|form';
  $field_group->group_name = 'group_avantages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Avantages',
    'weight' => '8',
    'children' => array(
      0 => 'field_avantages',
      1 => 'field_credit',
      2 => 'field_pugilat',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-avantages field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_avantages|node|character|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_avantages|node|character|full_zorga';
  $field_group->group_name = 'group_avantages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'full_zorga';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Avantages',
    'weight' => '3',
    'children' => array(
      0 => 'field_avantages',
      1 => 'field_credit',
      2 => 'field_pugilat',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-avantages field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_avantages|node|character|full_zorga'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background|node|character|default';
  $field_group->group_name = 'group_background';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_onglets';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '23',
    'children' => array(
      0 => 'view_events_player',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-background field-group-htab',
      ),
    ),
  );
  $field_groups['group_background|node|character|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_canevas|node|character|default';
  $field_group->group_name = 'group_canevas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Canevas',
    'weight' => '16',
    'children' => array(
      0 => 'field_canevas',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-canevas field-group-htab',
      ),
    ),
  );
  $field_groups['group_canevas|node|character|default'] = $field_group;

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
      0 => 'field_canevas',
      1 => 'field_confession',
      2 => 'field_nationalite',
      3 => 'field_occupation',
      4 => 'field_species',
      5 => 'field_objectifs_hj',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-canevas field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_canevas|node|character|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_canevas|node|character|full_zorga';
  $field_group->group_name = 'group_canevas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'full_zorga';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Canevas',
    'weight' => '21',
    'children' => array(
      0 => 'field_canevas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-canevas field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_canevas|node|character|full_zorga'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comments|node|character|default';
  $field_group->group_name = 'group_comments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_onglets';
  $field_group->data = array(
    'label' => 'Commentaires',
    'weight' => '29',
    'children' => array(
      0 => 'cec_comments',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Commentaires',
      'instance_settings' => array(
        'classes' => ' group-comments field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_comments|node|character|default'] = $field_group;

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
    'weight' => '1',
    'children' => array(
      0 => 'field_confession',
      1 => 'field_nationalite',
      2 => 'field_occupation',
      3 => 'field_species',
      4 => 'group_temperaments',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Compléments',
      'instance_settings' => array(
        'classes' => ' group-complements field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_character_full_group_complements',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_complements|node|character|default'] = $field_group;

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
    'weight' => '27',
    'children' => array(
      0 => 'view_groupes_player',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-groupes field-group-htab',
      ),
    ),
  );
  $field_groups['group_groupes|node|character|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_informations|node|character|default';
  $field_group->group_name = 'group_informations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_onglets';
  $field_group->data = array(
    'label' => 'Informations',
    'weight' => '24',
    'children' => array(
      0 => 'view_infos_player',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-informations field-group-htab',
      ),
    ),
  );
  $field_groups['group_informations|node|character|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_infos|node|character|full_zorga';
  $field_group->group_name = 'group_infos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'full_zorga';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Informations',
    'weight' => '4',
    'children' => array(
      0 => 'field_character_state',
      1 => 'field_character_type',
      2 => 'field_confession',
      3 => 'field_incarnate',
      4 => 'field_nationalite',
      5 => 'field_occupation',
      6 => 'field_species',
      7 => 'zorgas_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-infos field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_infos|node|character|full_zorga'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objectifs|node|character|default';
  $field_group->group_name = 'group_objectifs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_onglets';
  $field_group->data = array(
    'label' => 'Objectifs',
    'weight' => '25',
    'children' => array(
      0 => 'field_objectifs_hj',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-objectifs field-group-htab',
      ),
    ),
  );
  $field_groups['group_objectifs|node|character|default'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'group_avantages',
      1 => 'group_background',
      2 => 'group_comments',
      3 => 'group_groupes',
      4 => 'group_informations',
      5 => 'group_objectifs',
      6 => 'group_trombi',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => ' group-onglets field-group-htabs',
      ),
    ),
  );
  $field_groups['group_onglets|node|character|default'] = $field_group;

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
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'field_photo',
      2 => 'field_characters',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-public-data field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_public_data|node|character|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_data|node|character|full_zorga';
  $field_group->group_name = 'group_public_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'full_zorga';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Trombinoscope',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_photo',
      2 => 'field_objectifs_hj',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-public-data field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_public_data|node|character|full_zorga'] = $field_group;

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
        'classes' => ' group-temperaments field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_character_full_group_temperaments',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_temperaments|node|character|default'] = $field_group;

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
    'weight' => '5',
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
        'classes' => ' group-temperaments field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_temperaments|node|character|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_temperaments|node|character|full_zorga';
  $field_group->group_name = 'group_temperaments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'full_zorga';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tempéraments',
    'weight' => '5',
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
        'classes' => ' group-temperaments field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_temperaments|node|character|full_zorga'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_trombi|node|character|default';
  $field_group->group_name = 'group_trombi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'character';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_onglets';
  $field_group->data = array(
    'label' => 'Trombinoscope',
    'weight' => '28',
    'children' => array(
      0 => 'view_trombi',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-trombi field-group-htab',
      ),
    ),
  );
  $field_groups['group_trombi|node|character|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Avantages');
  t('Background');
  t('Canevas');
  t('Commentaires');
  t('Compléments');
  t('Groupes');
  t('Informations');
  t('Objectifs');
  t('Tempéraments');
  t('Trombinoscope');

  return $field_groups;
}
