<?php
/**
 * @file
 * personnages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function personnages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_character';
  $strongarm->value = 0;
  $export['comment_anonymous_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_character';
  $strongarm->value = '2';
  $export['comment_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_character';
  $strongarm->value = 1;
  $export['comment_default_mode_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_character';
  $strongarm->value = '50';
  $export['comment_default_per_page_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_character';
  $strongarm->value = 1;
  $export['comment_form_location_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_character';
  $strongarm->value = '1';
  $export['comment_preview_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_character';
  $strongarm->value = 0;
  $export['comment_subject_field_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__character';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'trombinoscope' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
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
      'full_zorga' => array(
        'custom_settings' => TRUE,
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
        'view_events' => array(
          'full_zorga' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
          'trombinoscope' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
        ),
        'view_infos' => array(
          'full_zorga' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
          'trombinoscope' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
        ),
        'view_sequences' => array(
          'full_zorga' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
          'trombinoscope' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
        ),
        'view_groupes_zorga' => array(
          'full_zorga' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'trombinoscope' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
        ),
        'view_groupes_player' => array(
          'full_zorga' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '99',
            'visible' => TRUE,
          ),
          'trombinoscope' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
        ),
        'zorgas_links' => array(
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '22',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'trombinoscope' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
        ),
        'comments' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'trombinoscope' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
        ),
        'workflow_current_state' => array(
          'default' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'trombinoscope' => array(
            'weight' => '-99',
            'visible' => FALSE,
          ),
        ),
        'workflow' => array(
          'default' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'trombinoscope' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
        ),
        'view_events_zorga' => array(
          'default' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'trombinoscope' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
        ),
        'view_events_player' => array(
          'default' => array(
            'weight' => '99',
            'visible' => TRUE,
          ),
          'full_zorga' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'trombinoscope' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
        ),
        'view_infos_zorga' => array(
          'default' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'trombinoscope' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
        ),
        'view_infos_player' => array(
          'default' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'trombinoscope' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
        ),
        'view_sequences_zorga' => array(
          'default' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'trombinoscope' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
        ),
        'view_avantages_player' => array(
          'default' => array(
            'weight' => '20',
            'visible' => TRUE,
          ),
          'full_zorga' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'trombinoscope' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
        ),
        'view_trombi' => array(
          'default' => array(
            'weight' => '29',
            'visible' => TRUE,
          ),
          'trombinoscope' => array(
            'weight' => '99',
            'visible' => FALSE,
          ),
          'full_zorga' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
        ),
        'cec_comments' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'full_zorga' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_character';
  $strongarm->value = '0';
  $export['language_content_type_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_character';
  $strongarm->value = array();
  $export['menu_options_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_character';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_character';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_character';
  $strongarm->value = '1';
  $export['node_preview_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_character';
  $strongarm->value = 0;
  $export['node_submitted_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'view_mode_per_role_character';
  $strongarm->value = array(
    0 => array(
      'role' => 'view_mode_per_role--role_168020977',
      'view_mode' => 'full_zorga',
    ),
  );
  $export['view_mode_per_role_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workflow_character';
  $strongarm->value = array(
    0 => 'node',
  );
  $export['workflow_character'] = $strongarm;

  return $export;
}
