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
        8 => 'group_temperaments',
        9 => 'field_species',
        10 => 'field_nationalite',
        11 => 'field_occupation',
        12 => 'field_confession',
      ),
      'footer' => array(
        2 => 'group_onglets',
        13 => 'field_pugilat',
        14 => 'field_credit',
        15 => 'view_avantages_player',
        16 => 'group_background',
        17 => 'group_objectifs',
        18 => 'group_avantages',
        19 => 'group_groupes',
        20 => 'group_informations',
        21 => 'group_trombi',
        22 => 'field_objectifs_hj',
        23 => 'field_characters',
        24 => 'view_infos_player',
        25 => 'view_groupes_player',
        26 => 'view_events_player',
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
      'group_temperaments' => 'right',
      'field_species' => 'right',
      'field_nationalite' => 'right',
      'field_occupation' => 'right',
      'field_confession' => 'right',
      'field_pugilat' => 'footer',
      'field_credit' => 'footer',
      'view_avantages_player' => 'footer',
      'group_background' => 'footer',
      'group_objectifs' => 'footer',
      'group_avantages' => 'footer',
      'group_groupes' => 'footer',
      'group_informations' => 'footer',
      'group_trombi' => 'footer',
      'field_objectifs_hj' => 'footer',
      'field_characters' => 'footer',
      'view_infos_player' => 'footer',
      'view_groupes_player' => 'footer',
      'view_events_player' => 'footer',
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
        2 => 'body',
        3 => 'group_public_data',
        4 => 'field_objectifs_hj',
      ),
      'left' => array(
        5 => 'group_avantages',
        6 => 'field_avantages',
        10 => 'field_pugilat',
        12 => 'field_credit',
      ),
      'right' => array(
        7 => 'group_infos',
        8 => 'field_temperament1',
        9 => 'group_temperaments',
        11 => 'field_temperament2',
        13 => 'field_temperament3',
        15 => 'field_temperament4',
        16 => 'field_temperament5',
        18 => 'field_character_type',
        19 => 'field_character_state',
        20 => 'field_incarnate',
        21 => 'field_species',
        22 => 'field_nationalite',
        23 => 'field_occupation',
        24 => 'field_confession',
        25 => 'zorgas_links',
      ),
      'footer' => array(
        14 => 'view_groupes_zorga',
        17 => 'comments',
        26 => 'view_events_zorga',
        27 => 'view_infos_zorga',
        28 => 'view_sequences_zorga',
      ),
    ),
    'fields' => array(
      'field_photo' => 'header',
      'title' => 'header',
      'body' => 'header',
      'group_public_data' => 'header',
      'field_objectifs_hj' => 'header',
      'group_avantages' => 'left',
      'field_avantages' => 'left',
      'group_infos' => 'right',
      'field_temperament1' => 'right',
      'group_temperaments' => 'right',
      'field_pugilat' => 'left',
      'field_temperament2' => 'right',
      'field_credit' => 'left',
      'field_temperament3' => 'right',
      'view_groupes_zorga' => 'footer',
      'field_temperament4' => 'right',
      'field_temperament5' => 'right',
      'comments' => 'footer',
      'field_character_type' => 'right',
      'field_character_state' => 'right',
      'field_incarnate' => 'right',
      'field_species' => 'right',
      'field_nationalite' => 'right',
      'field_occupation' => 'right',
      'field_confession' => 'right',
      'zorgas_links' => 'right',
      'view_events_zorga' => 'footer',
      'view_infos_zorga' => 'footer',
      'view_sequences_zorga' => 'footer',
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
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'field_photo',
      ),
      'right' => array(
        2 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_photo' => 'left',
      'body' => 'right',
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
    'layout_attributes_merge' => 1,
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
