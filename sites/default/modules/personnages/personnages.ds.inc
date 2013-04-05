<?php
/**
 * @file
 * personnages.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function personnages_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|character|full_zorga';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'character';
  $ds_fieldsetting->view_mode = 'full_zorga';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|character|full_zorga'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|character|trombinoscope';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'character';
  $ds_fieldsetting->view_mode = 'trombinoscope';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|character|trombinoscope'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function personnages_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|character|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'character';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_photo',
      ),
      'right' => array(
        1 => 'group_complements',
        3 => 'field_temperament1',
        4 => 'field_temperament2',
        5 => 'field_temperament3',
        6 => 'field_temperament4',
        7 => 'field_temperament5',
        14 => 'group_temperaments',
        15 => 'field_species',
        16 => 'field_nationalite',
        17 => 'field_occupation',
        18 => 'field_confession',
      ),
      'footer' => array(
        2 => 'group_onglets',
        8 => 'field_view_groups',
        9 => 'field_canevas',
        10 => 'group_canevas',
        11 => 'group_groupes',
        12 => 'group_avantages',
        13 => 'group_informations',
        19 => 'field_pugilat',
        20 => 'field_credit',
      ),
    ),
    'fields' => array(
      'field_photo' => 'left',
      'group_complements' => 'right',
      'group_onglets' => 'footer',
      'field_temperament1' => 'right',
      'field_temperament2' => 'right',
      'field_temperament3' => 'right',
      'field_temperament4' => 'right',
      'field_temperament5' => 'right',
      'field_view_groups' => 'footer',
      'field_canevas' => 'footer',
      'group_canevas' => 'footer',
      'group_groupes' => 'footer',
      'group_avantages' => 'footer',
      'group_informations' => 'footer',
      'group_temperaments' => 'right',
      'field_species' => 'right',
      'field_nationalite' => 'right',
      'field_occupation' => 'right',
      'field_confession' => 'right',
      'field_pugilat' => 'footer',
      'field_credit' => 'footer',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|character|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|character|full_zorga';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'character';
  $ds_layout->view_mode = 'full_zorga';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_photo',
        1 => 'title',
        2 => 'group_public_data',
        3 => 'body',
      ),
      'left' => array(
        4 => 'group_avantages',
        6 => 'field_avantages',
        8 => 'field_pugilat',
        12 => 'field_credit',
      ),
      'right' => array(
        5 => 'field_temperament1',
        7 => 'group_infos',
        9 => 'group_temperaments',
        10 => 'field_temperament2',
        13 => 'field_temperament3',
        14 => 'field_temperament4',
        17 => 'field_temperament5',
        19 => 'field_character_type',
        20 => 'field_character_state',
        21 => 'field_incarnate',
        22 => 'field_species',
        23 => 'field_nationalite',
        24 => 'field_occupation',
        25 => 'field_confession',
        26 => 'zorgas_links',
      ),
      'footer' => array(
        11 => 'view_groupes_zorga',
        15 => 'view_events',
        16 => 'view_infos',
        18 => 'view_sequences',
      ),
    ),
    'fields' => array(
      'field_photo' => 'header',
      'title' => 'header',
      'group_public_data' => 'header',
      'body' => 'header',
      'group_avantages' => 'left',
      'field_temperament1' => 'right',
      'field_avantages' => 'left',
      'group_infos' => 'right',
      'field_pugilat' => 'left',
      'group_temperaments' => 'right',
      'field_temperament2' => 'right',
      'view_groupes_zorga' => 'footer',
      'field_credit' => 'left',
      'field_temperament3' => 'right',
      'field_temperament4' => 'right',
      'view_events' => 'footer',
      'view_infos' => 'footer',
      'field_temperament5' => 'right',
      'view_sequences' => 'footer',
      'field_character_type' => 'right',
      'field_character_state' => 'right',
      'field_incarnate' => 'right',
      'field_species' => 'right',
      'field_nationalite' => 'right',
      'field_occupation' => 'right',
      'field_confession' => 'right',
      'zorgas_links' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|character|full_zorga'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|character|trombinoscope';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'character';
  $ds_layout->view_mode = 'trombinoscope';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        0 => 'field_photo',
      ),
      'right' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_photo' => 'left',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|character|trombinoscope'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function personnages_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'trombinoscope';
  $ds_view_mode->label = 'Trombinoscope';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['trombinoscope'] = $ds_view_mode;

  return $export;
}
