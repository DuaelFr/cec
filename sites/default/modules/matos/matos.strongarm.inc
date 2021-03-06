<?php
/**
 * @file
 * matos.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function matos_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_stuff';
  $strongarm->value = 0;
  $export['comment_anonymous_stuff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_stuff';
  $strongarm->value = 1;
  $export['comment_default_mode_stuff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_stuff';
  $strongarm->value = '50';
  $export['comment_default_per_page_stuff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_stuff';
  $strongarm->value = 1;
  $export['comment_form_location_stuff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_stuff';
  $strongarm->value = '1';
  $export['comment_preview_stuff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_stuff';
  $strongarm->value = '0';
  $export['comment_stuff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_stuff';
  $strongarm->value = 0;
  $export['comment_subject_field_stuff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__stuff';
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
        'custom_settings' => FALSE,
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
      'bat_list' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'workflow' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'comments' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'workflow_current_state' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'workflow' => array(
          'default' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'cec_comments' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full_zorga' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__stuff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_stuff';
  $strongarm->value = '0';
  $export['language_content_type_stuff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_stuff';
  $strongarm->value = array();
  $export['menu_options_stuff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_stuff';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_stuff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stuff';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_stuff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_stuff';
  $strongarm->value = '1';
  $export['node_preview_stuff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_stuff';
  $strongarm->value = 0;
  $export['node_submitted_stuff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_stuff_pattern';
  $strongarm->value = 'materiel/[node:title]';
  $export['pathauto_node_stuff_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_stuff_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_stuff_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'view_mode_per_role_stuff';
  $strongarm->value = array(
    0 => array(
      'role' => '168020977',
      'view_mode' => 'full_zorga',
    ),
  );
  $export['view_mode_per_role_stuff'] = $strongarm;

  return $export;
}
