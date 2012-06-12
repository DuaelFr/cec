<?php
/**
 * @file
 * profiles.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function profiles_field_default_fields() {
  $fields = array();

  // Exported field: 'profile2-inscription_administrative-field_address'
  $fields['profile2-inscription_administrative-field_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'addressfield',
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'default_value' => array(
        0 => array(
          'element_key' => 'profile2|inscription_administrative|field_address|und|0',
          'thoroughfare' => '',
          'premise' => '',
          'postal_code' => '',
          'locality' => '',
          'country' => 'FR',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_address',
      'label' => 'Adresse de votre domicile',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(
            'FR' => 'FR',
          ),
          'format_handlers' => array(
            'address' => 'address',
            'address-hide-country' => 'address-hide-country',
            'name-full' => 0,
            'name-oneline' => 0,
            'organisation' => 0,
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'profile2-inscription_administrative-field_birthdate'
  $fields['profile2-inscription_administrative-field_birthdate'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_birthdate',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'cache_count' => '1',
        'cache_enabled' => 1,
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'profile2_private' => 0,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => '0',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'deleted' => '0',
      'description' => 'Les personnes mineures de plus de 16 ans sont admises sous conditions. Merci de nous contacter avant de vous inscrire.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_birthdate',
      'label' => 'Date de naissance',
      'required' => 1,
      'settings' => array(
        'default_value' => 'blank',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'increment' => '15',
          'input_format' => 'd/m/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '-100:-16',
        ),
        'type' => 'date_popup',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'profile2-inscription_administrative-field_convention'
  $fields['profile2-inscription_administrative-field_convention'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_convention',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'KO',
          1 => 'OK',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '<a href="http://www.terraludis.org">Télécharger le texte</a>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 11,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_convention',
      'label' => 'J\'ai lu et j\'accepte la Charte de Déontologie de l\'association Terra Ludis',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '22',
      ),
    ),
  );

  // Exported field: 'profile2-inscription_administrative-field_firstname'
  $fields['profile2-inscription_administrative-field_firstname'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_firstname',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_firstname',
      'label' => 'Nom',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'profile2-inscription_administrative-field_food'
  $fields['profile2-inscription_administrative-field_food'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_food',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 7,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_food',
      'label' => 'Régime alimentaire spécial',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'profile2-inscription_administrative-field_health'
  $fields['profile2-inscription_administrative-field_health'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_health',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 6,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_health',
      'label' => 'Allergies et problèmes de santé',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'profile2-inscription_administrative-field_health_skills'
  $fields['profile2-inscription_administrative-field_health_skills'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_health_skills',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Je n\'en ai pas' => 'Je n\'en ai pas',
          'Médecin' => 'Médecin',
          'Autre profession médicale' => 'Autre profession médicale',
          'Secouriste' => 'Secouriste',
          'Autre' => 'Autre',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 8,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_health_skills',
      'label' => 'Compétences médicales',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'profile2-inscription_administrative-field_image_right'
  $fields['profile2-inscription_administrative-field_image_right'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_image_right',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'SiteWeb' => 'Dans le cadre de l\'illustration du site Internet de Terra Ludis',
          'AutreDoc' => 'Dans le cadre de tout autre document utile à l\'association',
          'FédéGN' => 'En les communiquant à la FédéGN',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_image_right',
      'label' => 'J’autorise Terra Ludis à utiliser les photographies me représentant prises sur ce GN',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '24',
      ),
    ),
  );

  // Exported field: 'profile2-inscription_administrative-field_insurance'
  $fields['profile2-inscription_administrative-field_insurance'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_insurance',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'markup',
      'settings' => array(
        'markup' => '<label>Assurance</label>
<p>Le prix de l\'assurance <strong>est inclus</strong> dans le prix du GN.</p>',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'markup',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'markup',
          'settings' => array(),
          'type' => 'markup_default',
          'weight' => 18,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_insurance',
      'label' => 'Assurance',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup',
        'weight' => '25',
      ),
    ),
  );

  // Exported field: 'profile2-inscription_administrative-field_lastname'
  $fields['profile2-inscription_administrative-field_lastname'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lastname',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_lastname',
      'label' => 'Prénom',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'profile2-inscription_administrative-field_membership'
  $fields['profile2-inscription_administrative-field_membership'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_membership',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'KO',
          1 => 'OK',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'La feuille d\'adhésion sera envoyée début 2013 aux personnes inscrites au GN',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 19,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_membership',
      'label' => 'Je m\'engage à m\'inscrire à l\'association Terra Ludis en 2013',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '21',
      ),
    ),
  );

  // Exported field: 'profile2-inscription_administrative-field_opus'
  $fields['profile2-inscription_administrative-field_opus'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_opus',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'opus',
            'parent' => '0',
          ),
        ),
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'default_value' => array(
        0 => array(
          'tid' => '2',
        ),
      ),
      'deleted' => '0',
      'description' => 'Accessible uniquement par les Zorgas.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 14,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_opus',
      'label' => 'Opus',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'profile2-inscription_administrative-field_phone1'
  $fields['profile2-inscription_administrative-field_phone1'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_phone1',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'phone',
      'settings' => array(
        'country' => 'fr',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'phone',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Si vous ne résidez pas en France, merci de saisir votre numéro de téléphone avec indicatif national.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'phone',
          'settings' => array(),
          'type' => 'phone',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_phone1',
      'label' => 'Numéro de téléphone principal',
      'required' => 1,
      'settings' => array(
        'ca_phone_parentheses' => 1,
        'ca_phone_separator' => '-',
        'phone_country_code' => 1,
        'phone_default_country_code' => '1',
        'phone_int_max_length' => 15,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'profile2-inscription_administrative-field_phone2'
  $fields['profile2-inscription_administrative-field_phone2'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_phone2',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'phone',
      'settings' => array(
        'country' => 'fr',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'phone',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Si vous ne résidez pas en France, merci de saisir votre numéro de téléphone avec indicatif national.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'phone',
          'settings' => array(),
          'type' => 'phone',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_phone2',
      'label' => 'Numéro de téléphone secondaire',
      'required' => 0,
      'settings' => array(
        'ca_phone_parentheses' => 1,
        'ca_phone_separator' => '-',
        'phone_country_code' => 1,
        'phone_default_country_code' => '1',
        'phone_int_max_length' => 15,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone_textfield',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'profile2-inscription_administrative-field_photo'
  $fields['profile2-inscription_administrative-field_photo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_photo',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'profile2_private' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'deleted' => '0',
      'description' => 'Merci de nous fournir une photo en civil au format photo d\'identité sur laquelle on peut vous reconnaître distinctement. Une fois les rôles attribués, nous vous demanderons éventuellement de nous envoyer une photo en costume.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 15,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_photo',
      'label' => 'Photo',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'photos_civiles',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'imce' => 0,
              'reference' => 0,
              'remote' => 0,
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'copy',
              'path' => 'file_attach',
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'preview_image_style' => 'medium',
          'progress_indicator' => 'bar',
        ),
        'type' => 'image_image',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'profile2-inscription_administrative-field_storage'
  $fields['profile2-inscription_administrative-field_storage'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_storage',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'KO',
          1 => 'OK',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'inscription_administrative',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 16,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_storage',
      'label' => 'Je participerai au rangement et au nettoyage du site',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '23',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_character_name'
  $fields['profile2-profil_joueur-field_character_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_character_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_character_name',
      'label' => 'Nom du personnage',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_crimes'
  $fields['profile2-profil_joueur-field_crimes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_crimes',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Non',
          1 => 'Oui',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => array(
        0 => array(
          'value' => '0',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 15,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_crimes',
      'label' => 'Vous sentez-vous l\'âme d\'un vrai méchant de roman ?',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_crimes_condition'
  $fields['profile2-profil_joueur-field_crimes_condition'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_crimes_condition',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 16,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_crimes_condition',
      'label' => 'Commentaire',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '18',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_exposure'
  $fields['profile2-profil_joueur-field_exposure'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_exposure',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Fond de scène' => 'Fond de scène : vous venez pour l\'ambiance. Un beau costume, du jeu, du spectacle et vous êtes content.',
          'Milieu de scène' => 'Milieu de scène : vous venez pour l\'aventure. Vous voulez vous amuser mais sans être submergé par les intrigues.',
          'Avant scène' => 'Avant scène : vous venez pour une immersion totale. Vous voulez être sur tous les fronts, à fond à fond à fond...',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_exposure',
      'label' => 'Formule choisie',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_freetalk'
  $fields['profile2-profil_joueur-field_freetalk'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_freetalk',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 8,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_freetalk',
      'label' => 'Autre chose à nous dire ?',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_friends'
  $fields['profile2-profil_joueur-field_friends'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_friends',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Si oui, donnez ici leur nom. Sinon laissez le champ vide.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 11,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_friends',
      'label' => 'Désirez-vous avoir des interactions spécifiques avec certains joueurs ?',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_great_costume'
  $fields['profile2-profil_joueur-field_great_costume'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_great_costume',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'KO',
          1 => 'OK',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 9,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_great_costume',
      'label' => 'Je suis prêt(e) à faire un effort pour que mon costume et mon rôle-play soient appropriés à mon personnage.',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_help_costume'
  $fields['profile2-profil_joueur-field_help_costume'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_help_costume',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'KO',
          1 => 'OK',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_help_costume',
      'label' => 'Mais j\'ai besoin d\'aide!',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_intro'
  $fields['profile2-profil_joueur-field_intro'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_intro',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'markup',
      'settings' => array(
        'markup' => '<p>Le personnage que vous allez incarner va être construit autour de 3 éléments :</p>
<ol>
<li>le niveau d\'immersion (fond de scène, milieu de scène ou avant scène) indiquera son degré d\'implication - et donc de responsabilité - dans notre scénario</li>
<li>les "tempéraments" (ex : calculateur ou candide, cupide ou dévoué…) définiront son caractère général</li>
<li>les relations en jeu affineront ses interactions avec les autres personnages.</li>
</ol>
<p>Une fois ces éléments renseignés lors de votre inscription, nous vous contacterons pour vous proposer un rôle (et les compétences qui vont avec) que nous ajusterons ensemble selon vos envies.</p>',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'markup',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'markup',
          'settings' => array(),
          'type' => 'markup_default',
          'weight' => 22,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_intro',
      'label' => 'Intro',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_job0'
  $fields['profile2-profil_joueur-field_job0'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_job0',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Commerçant/Artisan' => 'Commerçant/Artisan',
          'Homme d\'armes' => 'Homme d\'armes',
          'Domestique' => 'Domestique',
          'Noble' => 'Noble',
          'Religieux' => 'Religieux',
          'Homme de science (appliquée ou non)' => 'Homme de science (appliquée ou non)',
          'Artiste' => 'Artiste',
          'Autre (précisez)' => 'Autre (précisez)',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Ce que vous ne voulez surtout pas faire...',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 6,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_job0',
      'label' => 'Occupation à éviter',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_job1'
  $fields['profile2-profil_joueur-field_job1'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_job1',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Commerçant/Artisan' => 'Commerçant/Artisan',
          'Homme d\'armes' => 'Homme d\'armes',
          'Domestique' => 'Domestique',
          'Noble' => 'Noble',
          'Religieux' => 'Religieux',
          'Homme de science (appliquée ou non)' => 'Homme de science (appliquée ou non)',
          'Artiste' => 'Artiste',
          'Autre (précisez)' => 'Autre (précisez)',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_job1',
      'label' => 'Occupation principale',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_job2'
  $fields['profile2-profil_joueur-field_job2'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_job2',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Commerçant/Artisan' => 'Commerçant/Artisan',
          'Homme d\'armes' => 'Homme d\'armes',
          'Domestique' => 'Domestique',
          'Noble' => 'Noble',
          'Religieux' => 'Religieux',
          'Homme de science (appliquée ou non)' => 'Homme de science (appliquée ou non)',
          'Artiste' => 'Artiste',
          'Autre (précisez)' => 'Autre (précisez)',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Si votre premier choix se révèle impossible...',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_job2',
      'label' => 'Occupation secondaire',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_love'
  $fields['profile2-profil_joueur-field_love'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_love',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Non',
          1 => 'Oui',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 13,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_love',
      'label' => 'Accepteriez vous de jouer des intrigues sentimentales avec un tiers ?',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_love_condition'
  $fields['profile2-profil_joueur-field_love_condition'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_love_condition',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 14,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_love_condition',
      'label' => 'Commentaire',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_opus'
  $fields['profile2-profil_joueur-field_opus'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_opus',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'opus',
            'parent' => '0',
          ),
        ),
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Accessible uniquement par les Zorgas.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_opus',
      'label' => 'Opus',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_origin'
  $fields['profile2-profil_joueur-field_origin'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_origin',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Si vous n\'avez pas de préférences, laissez ce champ vide. Sinon, les Zorgas essaieront d\'adapter le profil du personnage a vos souhaits.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 7,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_origin',
      'label' => 'Nationalité souhaitée',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_temperament1'
  $fields['profile2-profil_joueur-field_temperament1'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_temperament1',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'temperament',
            'parent' => '0',
          ),
        ),
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 17,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_temperament1',
      'label' => 'Premier Tempérament',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_temperament2'
  $fields['profile2-profil_joueur-field_temperament2'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_temperament2',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'temperament',
            'parent' => '0',
          ),
        ),
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 18,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_temperament2',
      'label' => 'Second Tempérament',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_temperament3'
  $fields['profile2-profil_joueur-field_temperament3'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_temperament3',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'temperament',
            'parent' => '0',
          ),
        ),
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 19,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_temperament3',
      'label' => 'Troisième Tempérament',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_temperament4'
  $fields['profile2-profil_joueur-field_temperament4'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_temperament4',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'temperament',
            'parent' => '0',
          ),
        ),
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 20,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_temperament4',
      'label' => 'Quatrième Tempérament',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_temperament5'
  $fields['profile2-profil_joueur-field_temperament5'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_temperament5',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'temperament',
            'parent' => '0',
          ),
        ),
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 21,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_temperament5',
      'label' => 'Dernier Tempérament',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'profile2-profil_joueur-field_temperament_intro'
  $fields['profile2-profil_joueur-field_temperament_intro'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_temperament_intro',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'markup',
      'settings' => array(
        'markup' => 'Comme tous les personnages romancés de cette époque, les Capecroquiens sont définis à grands traits colorés, en préférant souvent un caractère extrême à une tiède normalité. Cette personnalité fascinante s\'exprime en cinq tempéraments, <a href="/temperaments">dont vous trouverez le détail ici</a>. Le premier tempérament est celui qui donne sa couleur au personnage, les suivants précisent le dessin selon leur ordre d\'importance.',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'markup',
    ),
    'field_instance' => array(
      'bundle' => 'profil_joueur',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'markup',
          'settings' => array(),
          'type' => 'markup_default',
          'weight' => 23,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_temperament_intro',
      'label' => 'Intro Tempéraments',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'profile2-profil_pnj_orga-field_arrival_date'
  $fields['profile2-profil_pnj_orga-field_arrival_date'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_arrival_date',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'le mercredi 8 mai 2013 (férié) après-midi' => 'le mercredi 8 mai 2013 (férié) après-midi',
          'le jeudi 9 mai 2013 (férié) matin' => 'le jeudi 9 mai 2013 (férié) matin',
          'le jeudi 9 mai 2013 (férié) avant 16h' => 'le jeudi 9 mai 2013 (férié) avant 16h',
          'je ne sais pas encore, mais je vous communiquerai ça dès que possible' => 'je ne sais pas encore, mais je vous communiquerai ça dès que possible',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'profil_pnj_orga',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_arrival_date',
      'label' => 'J\'arriverai sur le site pour aider à l\'installation',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'profile2-profil_pnj_orga-field_arrival_time'
  $fields['profile2-profil_pnj_orga-field_arrival_time'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_arrival_time',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'profil_pnj_orga',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Laissez en blanc si vous ne savez pas encore...
Format HH:MM',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_arrival_time',
      'label' => 'Heure d\'arrivée approximative sur le site du GN',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'profile2-profil_pnj_orga-field_base'
  $fields['profile2-profil_pnj_orga-field_base'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_base',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'markup',
      'settings' => array(
        'markup' => 'La base est indispensable :
<ul>
<li>pantalon noir intemporel (pas de jean)</li>
<li>chemise blanche (pas de T-shirt)</li>
<li>chaussures adaptées au GN (pas de baskets)</li>
</ul>',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'markup',
    ),
    'field_instance' => array(
      'bundle' => 'profil_pnj_orga',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'markup',
          'settings' => array(),
          'type' => 'markup_default',
          'weight' => 6,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_base',
      'label' => 'Base',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'profile2-profil_pnj_orga-field_costumes'
  $fields['profile2-profil_pnj_orga-field_costumes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_costumes',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'profil_pnj_orga',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 7,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_costumes',
      'label' => 'J\'aurai d\'autres costumes qui iront bien pour l\'époque',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'profile2-profil_pnj_orga-field_craft'
  $fields['profile2-profil_pnj_orga-field_craft'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_craft',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'KO',
          1 => 'OK',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'profil_pnj_orga',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'documents secrets, costumes, jambons en latex...',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_craft',
      'label' => 'Je suis disponible et motivé pour aider à réaliser les accessoires du GN.',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'profile2-profil_pnj_orga-field_fight_xp'
  $fields['profile2-profil_pnj_orga-field_fight_xp'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_fight_xp',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Je suis à l\'aise en combat.' => 'Je suis à l\'aise en combat.',
          'Un peu...' => 'Un peu...',
          'Pas du tout !' => 'Pas du tout !',
          'Je ne souhaite pas me battre' => 'Je ne souhaite pas me battre',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'profil_pnj_orga',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_fight_xp',
      'label' => 'Je sais combattre avec des armes de GN',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'profile2-profil_pnj_orga-field_freetalk'
  $fields['profile2-profil_pnj_orga-field_freetalk'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_freetalk',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'profil_pnj_orga',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 12,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_freetalk',
      'label' => 'Autre chose à nous dire ?',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'profile2-profil_pnj_orga-field_kitchen'
  $fields['profile2-profil_pnj_orga-field_kitchen'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '2',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_kitchen',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'un peu comme tous les Zorgas/PNJ' => 'un peu comme tous les Zorgas/PNJ',
          '…voir plus, parce que c’est chouette !' => '…voir plus, parce que c’est chouette !',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'profil_pnj_orga',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 9,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_kitchen',
      'label' => 'Je filerai un coup de main en cuisine',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'profile2-profil_pnj_orga-field_opus'
  $fields['profile2-profil_pnj_orga-field_opus'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_opus',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'opus',
            'parent' => '0',
          ),
        ),
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'profil_pnj_orga',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Accessible uniquement par les Zorgas.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 13,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_opus',
      'label' => 'Opus',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'profile2-profil_pnj_orga-field_pj_count'
  $fields['profile2-profil_pnj_orga-field_pj_count'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pj_count',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Aucun' => 'Aucun',
          'Un' => 'Un',
          'Deux' => 'Deux',
          'Trois' => 'Trois',
          'Plus de trois' => 'Plus de trois',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'profil_pnj_orga',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_pj_count',
      'label' => 'J\'ai déjà participé à des GN en tant que joueur',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'profile2-profil_pnj_orga-field_pnj_count'
  $fields['profile2-profil_pnj_orga-field_pnj_count'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pnj_count',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Aucun' => 'Aucun',
          'Un' => 'Un',
          'Deux' => 'Deux',
          'Trois' => 'Trois',
          'Plus de trois' => 'Plus de trois',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'profil_pnj_orga',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_pnj_count',
      'label' => 'J\'ai déjà participé à des GN en tant que PNJ ou orga',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'profile2-profil_pnj_orga-field_skills'
  $fields['profile2-profil_pnj_orga-field_skills'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_skills',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'profil_pnj_orga',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '(musique, pyrotechnie, couture, dessin, bricolage, ...)',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 11,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_skills',
      'label' => 'Compétences utiles particulières',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'profile2-profil_pnj_orga-field_stuff'
  $fields['profile2-profil_pnj_orga-field_stuff'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_stuff',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'profil_pnj_orga',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 8,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_stuff',
      'label' => 'J\'aurai du matériel qui peut être utile et que je suis prêt à amener',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'profile2-profil_pnj_orga-field_unloading'
  $fields['profile2-profil_pnj_orga-field_unloading'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_unloading',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'KO',
          1 => 'OK',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'profil_pnj_orga',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_unloading',
      'label' => 'Je pourrai participer au déchargement du camion aux locaux de Terra Ludis le dimanche 12 mai au soir.',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '3',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('(musique, pyrotechnie, couture, dessin, bricolage, ...)');
  t('<a href="http://www.terraludis.org">Télécharger le texte</a>');
  t('Accepteriez vous de jouer des intrigues sentimentales avec un tiers ?');
  t('Accessible uniquement par les Zorgas.');
  t('Adresse de votre domicile');
  t('Allergies et problèmes de santé');
  t('Assurance');
  t('Autre chose à nous dire ?');
  t('Base');
  t('Ce que vous ne voulez surtout pas faire...');
  t('Commentaire');
  t('Compétences médicales');
  t('Compétences utiles particulières');
  t('Date de naissance');
  t('Dernier Tempérament');
  t('Désirez-vous avoir des interactions spécifiques avec certains joueurs ?');
  t('Formule choisie');
  t('Heure d\'arrivée approximative sur le site du GN');
  t('Intro');
  t('Intro Tempéraments');
  t('J\'ai déjà participé à des GN en tant que PNJ ou orga');
  t('J\'ai déjà participé à des GN en tant que joueur');
  t('J\'ai lu et j\'accepte la Charte de Déontologie de l\'association Terra Ludis');
  t('J\'arriverai sur le site pour aider à l\'installation');
  t('J\'aurai d\'autres costumes qui iront bien pour l\'époque');
  t('J\'aurai du matériel qui peut être utile et que je suis prêt à amener');
  t('Je filerai un coup de main en cuisine');
  t('Je m\'engage à m\'inscrire à l\'association Terra Ludis en 2013');
  t('Je participerai au rangement et au nettoyage du site');
  t('Je pourrai participer au déchargement du camion aux locaux de Terra Ludis le dimanche 12 mai au soir.');
  t('Je sais combattre avec des armes de GN');
  t('Je suis disponible et motivé pour aider à réaliser les accessoires du GN.');
  t('Je suis prêt(e) à faire un effort pour que mon costume et mon rôle-play soient appropriés à mon personnage.');
  t('J’autorise Terra Ludis à utiliser les photographies me représentant prises sur ce GN');
  t('La feuille d\'adhésion sera envoyée début 2013 aux personnes inscrites au GN');
  t('Laissez en blanc si vous ne savez pas encore...
Format HH:MM');
  t('Les personnes mineures de plus de 16 ans sont admises sous conditions. Merci de nous contacter avant de vous inscrire.');
  t('Mais j\'ai besoin d\'aide!');
  t('Merci de nous fournir une photo en civil au format photo d\'identité sur laquelle on peut vous reconnaître distinctement. Une fois les rôles attribués, nous vous demanderons éventuellement de nous envoyer une photo en costume.');
  t('Nationalité souhaitée');
  t('Nom');
  t('Nom du personnage');
  t('Numéro de téléphone principal');
  t('Numéro de téléphone secondaire');
  t('Occupation principale');
  t('Occupation secondaire');
  t('Occupation à éviter');
  t('Opus');
  t('Photo');
  t('Premier Tempérament');
  t('Prénom');
  t('Quatrième Tempérament');
  t('Régime alimentaire spécial');
  t('Second Tempérament');
  t('Si oui, donnez ici leur nom. Sinon laissez le champ vide.');
  t('Si votre premier choix se révèle impossible...');
  t('Si vous n\'avez pas de préférences, laissez ce champ vide. Sinon, les Zorgas essaieront d\'adapter le profil du personnage a vos souhaits.');
  t('Si vous ne résidez pas en France, merci de saisir votre numéro de téléphone avec indicatif national.');
  t('Troisième Tempérament');
  t('Vous sentez-vous l\'âme d\'un vrai méchant de roman ?');
  t('documents secrets, costumes, jambons en latex...');

  return $fields;
}
