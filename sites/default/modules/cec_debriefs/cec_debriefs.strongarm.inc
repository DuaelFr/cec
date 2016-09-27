<?php
/**
 * @file
 * cec_debriefs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cec_debriefs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_profile2__debrief_sondage';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '18',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_profile2__debrief_sondage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_profile2__debrief_texte';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '23',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_profile2__debrief_texte'] = $strongarm;

  return $export;
}
