<?php
/**
 * @file
 * sequences.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sequences_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bat_fullcalendar_scheduler_key';
  $strongarm->value = 'gpl';
  $export['bat_fullcalendar_scheduler_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_sequence';
  $strongarm->value = 0;
  $export['comment_anonymous_sequence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_sequence';
  $strongarm->value = 1;
  $export['comment_default_mode_sequence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_sequence';
  $strongarm->value = '50';
  $export['comment_default_per_page_sequence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_sequence';
  $strongarm->value = 1;
  $export['comment_form_location_sequence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_sequence';
  $strongarm->value = '1';
  $export['comment_preview_sequence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_sequence';
  $strongarm->value = '2';
  $export['comment_sequence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_sequence';
  $strongarm->value = 0;
  $export['comment_subject_field_sequence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__sequence';
  $strongarm->value = array(
    'view_modes' => array(
      'full_zorga' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'trombinoscope' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '10',
        ),
        'workflow' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(
        'comments' => array(
          'default' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'print' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'workflow_current_state' => array(
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'print' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
        'workflow' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'print' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'cec_comments' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '99',
            'visible' => TRUE,
          ),
          'print' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__sequence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_sequence';
  $strongarm->value = '0';
  $export['language_content_type_sequence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sequence';
  $strongarm->value = array();
  $export['menu_options_sequence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sequence';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sequence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sequence';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_sequence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_sequence';
  $strongarm->value = '1';
  $export['node_preview_sequence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_sequence';
  $strongarm->value = 0;
  $export['node_submitted_sequence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_sequence_pattern';
  $strongarm->value = 'sequence/[node:title]';
  $export['pathauto_node_sequence_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_sequence_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_sequence_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'view_mode_per_role_sequence';
  $strongarm->value = array(
    0 => array(
      'role' => '168020977',
      'view_mode' => 'full_zorga',
    ),
  );
  $export['view_mode_per_role_sequence'] = $strongarm;

  return $export;
}
