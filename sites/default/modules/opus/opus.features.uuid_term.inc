<?php
/**
 * @file
 * opus.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function opus_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'uuid' => '44bd5379-5e3e-4a67-8799-350f92d9a7be',
    'name' => 'octobre 2010',
    'description' => '',
    'weight' => '1',
    'vocabulary' => 'opus',
  );
  $terms[] = array(
    'uuid' => 'c975a9ce-bef2-4deb-a36a-2e3a33d444bd',
    'name' => 'mai 2013',
    'description' => '',
    'weight' => '0',
    'vocabulary' => 'opus',
  );
  return $terms;
}
