<?php
/**
 * @file
 * config_base.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function config_base_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'full_zorga';
  $ds_view_mode->label = 'Contenu Complet - Zorga';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['full_zorga'] = $ds_view_mode;

  return $export;
}
