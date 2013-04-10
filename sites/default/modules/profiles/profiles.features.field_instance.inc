<?php
/**
 * @file
 * profiles.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function profiles_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-inscription_administrative-field_address'
  $field_instances['profile2-inscription_administrative-field_address'] = array(
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
    'deleted' => 0,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_birthdate'
  $field_instances['profile2-inscription_administrative-field_birthdate'] = array(
    'bundle' => 'inscription_administrative',
    'deleted' => 0,
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
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-100:-16',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_convention'
  $field_instances['profile2-inscription_administrative-field_convention'] = array(
    'bundle' => 'inscription_administrative',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
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
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_firstname'
  $field_instances['profile2-inscription_administrative-field_firstname'] = array(
    'bundle' => 'inscription_administrative',
    'default_value' => NULL,
    'deleted' => 0,
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_food'
  $field_instances['profile2-inscription_administrative-field_food'] = array(
    'bundle' => 'inscription_administrative',
    'default_value' => NULL,
    'deleted' => 0,
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
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_health'
  $field_instances['profile2-inscription_administrative-field_health'] = array(
    'bundle' => 'inscription_administrative',
    'default_value' => NULL,
    'deleted' => 0,
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
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_health_skills'
  $field_instances['profile2-inscription_administrative-field_health_skills'] = array(
    'bundle' => 'inscription_administrative',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_image_right'
  $field_instances['profile2-inscription_administrative-field_image_right'] = array(
    'bundle' => 'inscription_administrative',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_insurance'
  $field_instances['profile2-inscription_administrative-field_insurance'] = array(
    'bundle' => 'inscription_administrative',
    'deleted' => 0,
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
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_lastname'
  $field_instances['profile2-inscription_administrative-field_lastname'] = array(
    'bundle' => 'inscription_administrative',
    'default_value' => NULL,
    'deleted' => 0,
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_membership'
  $field_instances['profile2-inscription_administrative-field_membership'] = array(
    'bundle' => 'inscription_administrative',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
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
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_opus'
  $field_instances['profile2-inscription_administrative-field_opus'] = array(
    'bundle' => 'inscription_administrative',
    'default_value' => array(
      0 => array(
        'tid' => 2,
      ),
    ),
    'deleted' => 0,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_phone1'
  $field_instances['profile2-inscription_administrative-field_phone1'] = array(
    'bundle' => 'inscription_administrative',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Si vous ne résidez pas en France, merci de saisir votre numéro de téléphone dans le champ "Numéro de téléphone international" ci-après.',
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
    'required' => 0,
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'phone_country_code' => 1,
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_phone2'
  $field_instances['profile2-inscription_administrative-field_phone2'] = array(
    'bundle' => 'inscription_administrative',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_phone_international'
  $field_instances['profile2-inscription_administrative-field_phone_international'] = array(
    'bundle' => 'inscription_administrative',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Champ a destination des participants ne résidant pas en France.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_phone_international',
    'label' => 'Numéro de téléphone international',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_photo'
  $field_instances['profile2-inscription_administrative-field_photo'] = array(
    'bundle' => 'inscription_administrative',
    'deleted' => 0,
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
            'absolute' => 0,
            'attach_mode' => 'copy',
            'path' => 'file_attach',
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'preview_image_style' => 'medium',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'profile2-inscription_administrative-field_storage'
  $field_instances['profile2-inscription_administrative-field_storage'] = array(
    'bundle' => 'inscription_administrative',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
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
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_character_name'
  $field_instances['profile2-profil_joueur-field_character_name'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => NULL,
    'deleted' => 0,
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_crimes'
  $field_instances['profile2-profil_joueur-field_crimes'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
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
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_crimes_condition'
  $field_instances['profile2-profil_joueur-field_crimes_condition'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => NULL,
    'deleted' => 0,
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_exposure'
  $field_instances['profile2-profil_joueur-field_exposure'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_freetalk'
  $field_instances['profile2-profil_joueur-field_freetalk'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => NULL,
    'deleted' => 0,
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
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_friends'
  $field_instances['profile2-profil_joueur-field_friends'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => NULL,
    'deleted' => 0,
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
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_great_costume'
  $field_instances['profile2-profil_joueur-field_great_costume'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_help_costume'
  $field_instances['profile2-profil_joueur-field_help_costume'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_intro'
  $field_instances['profile2-profil_joueur-field_intro'] = array(
    'bundle' => 'profil_joueur',
    'deleted' => 0,
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
  );

  // Exported field_instance: 'profile2-profil_joueur-field_job0'
  $field_instances['profile2-profil_joueur-field_job0'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_job1'
  $field_instances['profile2-profil_joueur-field_job1'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_job2'
  $field_instances['profile2-profil_joueur-field_job2'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_love'
  $field_instances['profile2-profil_joueur-field_love'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_love_condition'
  $field_instances['profile2-profil_joueur-field_love_condition'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => NULL,
    'deleted' => 0,
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_opus'
  $field_instances['profile2-profil_joueur-field_opus'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => NULL,
    'deleted' => 0,
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
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_temperament1'
  $field_instances['profile2-profil_joueur-field_temperament1'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_temperament2'
  $field_instances['profile2-profil_joueur-field_temperament2'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_temperament3'
  $field_instances['profile2-profil_joueur-field_temperament3'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_temperament4'
  $field_instances['profile2-profil_joueur-field_temperament4'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_temperament5'
  $field_instances['profile2-profil_joueur-field_temperament5'] = array(
    'bundle' => 'profil_joueur',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'profile2-profil_joueur-field_temperament_intro'
  $field_instances['profile2-profil_joueur-field_temperament_intro'] = array(
    'bundle' => 'profil_joueur',
    'deleted' => 0,
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
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<a href="http://www.terraludis.org">Télécharger le texte</a>');
  t('Accepteriez vous de jouer des intrigues sentimentales avec un tiers ?');
  t('Accessible uniquement par les Zorgas.');
  t('Adresse de votre domicile');
  t('Allergies et problèmes de santé');
  t('Assurance');
  t('Autre chose à nous dire ?');
  t('Ce que vous ne voulez surtout pas faire...');
  t('Champ a destination des participants ne résidant pas en France.');
  t('Commentaire');
  t('Compétences médicales');
  t('Date de naissance');
  t('Dernier Tempérament');
  t('Désirez-vous avoir des interactions spécifiques avec certains joueurs ?');
  t('Formule choisie');
  t('Intro');
  t('Intro Tempéraments');
  t('J\'ai lu et j\'accepte la Charte de Déontologie de l\'association Terra Ludis');
  t('Je m\'engage à m\'inscrire à l\'association Terra Ludis en 2013');
  t('Je participerai au rangement et au nettoyage du site');
  t('Je suis prêt(e) à faire un effort pour que mon costume et mon rôle-play soient appropriés à mon personnage.');
  t('J’autorise Terra Ludis à utiliser les photographies me représentant prises sur ce GN');
  t('La feuille d\'adhésion sera envoyée début 2013 aux personnes inscrites au GN');
  t('Les personnes mineures de plus de 16 ans sont admises sous conditions. Merci de nous contacter avant de vous inscrire.');
  t('Mais j\'ai besoin d\'aide!');
  t('Merci de nous fournir une photo en civil au format photo d\'identité sur laquelle on peut vous reconnaître distinctement. Une fois les rôles attribués, nous vous demanderons éventuellement de nous envoyer une photo en costume.');
  t('Nom');
  t('Nom du personnage');
  t('Numéro de téléphone international');
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
  t('Si vous ne résidez pas en France, merci de saisir votre numéro de téléphone dans le champ "Numéro de téléphone international" ci-après.');
  t('Troisième Tempérament');
  t('Vous sentez-vous l\'âme d\'un vrai méchant de roman ?');

  return $field_instances;
}
