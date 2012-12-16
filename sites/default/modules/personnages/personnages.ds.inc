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
      'right' => array(
        0 => 'group_complements',
        3 => 'field_temperament1',
        4 => 'field_temperament2',
        5 => 'field_temperament3',
        6 => 'field_temperament4',
        7 => 'field_temperament5',
        13 => 'group_temperaments',
        15 => 'field_species',
        16 => 'field_nationalite',
        17 => 'field_occupation',
        18 => 'field_confession',
      ),
      'left' => array(
        1 => 'field_photo',
      ),
      'footer' => array(
        2 => 'group_onglets',
        8 => 'field_view_groups',
        9 => 'field_canevas',
        10 => 'group_canevas',
        11 => 'group_groupes',
        12 => 'group_avantages',
        14 => 'group_informations',
      ),
    ),
    'fields' => array(
      'group_complements' => 'right',
      'field_photo' => 'left',
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
      'group_temperaments' => 'right',
      'group_informations' => 'footer',
      'field_species' => 'right',
      'field_nationalite' => 'right',
      'field_occupation' => 'right',
      'field_confession' => 'right',
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
