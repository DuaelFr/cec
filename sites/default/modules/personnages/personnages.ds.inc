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
        5 => 'field_temperament2',
        6 => 'field_temperament3',
        7 => 'field_temperament4',
        8 => 'field_temperament5',
        9 => 'group_temperaments',
        10 => 'field_species',
        11 => 'field_nationalite',
        12 => 'field_occupation',
        13 => 'field_confession',
      ),
      'footer' => array(
        2 => 'group_onglets',
        4 => 'cec_comments',
        14 => 'field_pugilat',
        15 => 'field_credit',
        16 => 'view_avantages_player',
        17 => 'group_background',
        18 => 'group_informations',
        19 => 'group_objectifs',
        20 => 'group_avantages',
        21 => 'group_groupes',
        22 => 'group_trombi',
        23 => 'field_objectifs_hj',
        24 => 'view_trombi',
        25 => 'group_comments',
        26 => 'view_infos_player',
        27 => 'view_events_player',
        28 => 'view_groupes_player',
      ),
    ),
    'fields' => array(
      'field_photo' => 'left',
      'group_complements' => 'right',
      'group_onglets' => 'footer',
      'field_temperament1' => 'right',
      'cec_comments' => 'footer',
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
      'group_informations' => 'footer',
      'group_objectifs' => 'footer',
      'group_avantages' => 'footer',
      'group_groupes' => 'footer',
      'group_trombi' => 'footer',
      'field_objectifs_hj' => 'footer',
      'view_trombi' => 'footer',
      'group_comments' => 'footer',
      'view_infos_player' => 'footer',
      'view_events_player' => 'footer',
      'view_groupes_player' => 'footer',
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
        0 => 'title',
        1 => 'field_photo',
        2 => 'body',
        3 => 'field_opus',
        4 => 'field_objectifs_hj',
        5 => 'group_public_data',
      ),
      'right' => array(
        6 => 'field_temperament1',
        9 => 'group_infos',
        11 => 'field_temperament2',
        12 => 'field_temperament3',
        14 => 'group_temperaments',
        15 => 'field_temperament4',
        18 => 'field_temperament5',
        22 => 'field_character_type',
        23 => 'field_character_state',
        24 => 'field_incarnate',
        25 => 'field_species',
        26 => 'field_nationalite',
        27 => 'field_occupation',
        28 => 'field_confession',
        29 => 'zorgas_links',
      ),
      'left' => array(
        7 => 'field_avantages',
        8 => 'group_avantages',
        10 => 'field_pugilat',
        13 => 'field_credit',
      ),
      'footer' => array(
        16 => 'view_groupes_zorga',
        17 => 'view_sequences_zorga',
        19 => 'view_infos_zorga',
        20 => 'view_events_zorga',
        21 => 'cec_comments',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_photo' => 'header',
      'body' => 'header',
      'field_opus' => 'header',
      'field_objectifs_hj' => 'header',
      'group_public_data' => 'header',
      'field_temperament1' => 'right',
      'field_avantages' => 'left',
      'group_avantages' => 'left',
      'group_infos' => 'right',
      'field_pugilat' => 'left',
      'field_temperament2' => 'right',
      'field_temperament3' => 'right',
      'field_credit' => 'left',
      'group_temperaments' => 'right',
      'field_temperament4' => 'right',
      'view_groupes_zorga' => 'footer',
      'view_sequences_zorga' => 'footer',
      'field_temperament5' => 'right',
      'view_infos_zorga' => 'footer',
      'view_events_zorga' => 'footer',
      'cec_comments' => 'footer',
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
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
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
