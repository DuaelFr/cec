<?php
/**
 * @file
 * profiles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function profiles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cec_profiles_limit';
  $strongarm->value = '30 juillet 2016';
  $export['cec_profiles_limit'] = $strongarm;

  return $export;
}
