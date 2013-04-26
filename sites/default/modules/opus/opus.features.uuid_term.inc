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
    'name' => 'octobre 2010',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '44bd5379-5e3e-4a67-8799-350f92d9a7be',
    'vocabulary_machine_name' => 'opus',
  );
  $terms[] = array(
    'name' => 'mai 2013',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c975a9ce-bef2-4deb-a36a-2e3a33d444bd',
    'vocabulary_machine_name' => 'opus',
  );
  return $terms;
}
