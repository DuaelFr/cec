<?php
/**
 * @file
 * cec_debriefs.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cec_debriefs_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'profile2-debrief_sondage-field_debrief_sondage_intro'.
  $field_instances['profile2-debrief_sondage-field_debrief_sondage_intro'] = array(
    'bundle' => 'debrief_sondage',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_debrief_sondage_intro',
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

  // Exported field_instance: 'profile2-debrief_sondage-field_note_ambiance'.
  $field_instances['profile2-debrief_sondage-field_note_ambiance'] = array(
    'bundle' => 'debrief_sondage',
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
    'field_name' => 'field_note_ambiance',
    'label' => 'L\'ambiance ',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'profile2-debrief_sondage-field_note_cadre'.
  $field_instances['profile2-debrief_sondage-field_note_cadre'] = array(
    'bundle' => 'debrief_sondage',
    'default_value' => NULL,
    'deleted' => 0,
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
    'field_name' => 'field_note_cadre',
    'label' => 'Le cadre',
    'required' => 0,
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

  // Exported field_instance: 'profile2-debrief_sondage-field_note_facilite'.
  $field_instances['profile2-debrief_sondage-field_note_facilite'] = array(
    'bundle' => 'debrief_sondage',
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
    'field_name' => 'field_note_facilite',
    'label' => 'La facilité à entrer dans le jeu',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'profile2-debrief_sondage-field_note_globale'.
  $field_instances['profile2-debrief_sondage-field_note_globale'] = array(
    'bundle' => 'debrief_sondage',
    'default_value' => NULL,
    'deleted' => 0,
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
    'field_name' => 'field_note_globale',
    'label' => 'Votre sentiment général sur le GN',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-debrief_sondage-field_note_immersion'.
  $field_instances['profile2-debrief_sondage-field_note_immersion'] = array(
    'bundle' => 'debrief_sondage',
    'default_value' => NULL,
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
    'field_name' => 'field_note_immersion',
    'label' => 'L\'immersion',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'profile2-debrief_sondage-field_note_intrigues'.
  $field_instances['profile2-debrief_sondage-field_note_intrigues'] = array(
    'bundle' => 'debrief_sondage',
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
    'field_name' => 'field_note_intrigues',
    'label' => 'Les intrigues liées à votre personnage',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'profile2-debrief_sondage-field_note_logistique'.
  $field_instances['profile2-debrief_sondage-field_note_logistique'] = array(
    'bundle' => 'debrief_sondage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
    'field_name' => 'field_note_logistique',
    'label' => 'La logistique',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-debrief_sondage-field_note_objectifs'.
  $field_instances['profile2-debrief_sondage-field_note_objectifs'] = array(
    'bundle' => 'debrief_sondage',
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
    'field_name' => 'field_note_objectifs',
    'label' => 'Vos objectifs',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-debrief_sondage-field_note_perso'.
  $field_instances['profile2-debrief_sondage-field_note_perso'] = array(
    'bundle' => 'debrief_sondage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_note_perso',
    'label' => 'Votre personnage et son histoire',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-debrief_sondage-field_note_realisme'.
  $field_instances['profile2-debrief_sondage-field_note_realisme'] = array(
    'bundle' => 'debrief_sondage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_note_realisme',
    'label' => 'Le réalisme, la cohérence',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'profile2-debrief_sondage-field_note_regles_brette'.
  $field_instances['profile2-debrief_sondage-field_note_regles_brette'] = array(
    'bundle' => 'debrief_sondage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_note_regles_brette',
    'label' => 'Les règles de brette',
    'required' => 0,
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

  // Exported field_instance:
  // 'profile2-debrief_sondage-field_note_regles_pugilat'.
  $field_instances['profile2-debrief_sondage-field_note_regles_pugilat'] = array(
    'bundle' => 'debrief_sondage',
    'default_value' => NULL,
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
    'field_name' => 'field_note_regles_pugilat',
    'label' => 'Les règles de pugilat',
    'required' => 0,
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

  // Exported field_instance:
  // 'profile2-debrief_sondage-field_note_regles_reputation'.
  $field_instances['profile2-debrief_sondage-field_note_regles_reputation'] = array(
    'bundle' => 'debrief_sondage',
    'default_value' => NULL,
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
    'field_name' => 'field_note_regles_reputation',
    'label' => 'Les règles de réputation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'profile2-debrief_sondage-field_note_regles_sante'.
  $field_instances['profile2-debrief_sondage-field_note_regles_sante'] = array(
    'bundle' => 'debrief_sondage',
    'default_value' => NULL,
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
    'field_name' => 'field_note_regles_sante',
    'label' => 'Les règles de santé',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'profile2-debrief_sondage-field_note_repas'.
  $field_instances['profile2-debrief_sondage-field_note_repas'] = array(
    'bundle' => 'debrief_sondage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_note_repas',
    'label' => 'Les repas',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-debrief_sondage-field_note_scenario'.
  $field_instances['profile2-debrief_sondage-field_note_scenario'] = array(
    'bundle' => 'debrief_sondage',
    'default_value' => NULL,
    'deleted' => 0,
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
    'field_name' => 'field_note_scenario',
    'label' => 'Le scénario global',
    'required' => 0,
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

  // Exported field_instance: 'profile2-debrief_sondage-field_note_univers'.
  $field_instances['profile2-debrief_sondage-field_note_univers'] = array(
    'bundle' => 'debrief_sondage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
    'field_name' => 'field_note_univers',
    'label' => 'L\'univers, le monde',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'profile2-debrief_texte-field_debrie_contrat_secondaire'.
  $field_instances['profile2-debrief_texte-field_debrie_contrat_secondaire'] = array(
    'bundle' => 'debrief_texte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Décrivez les termes d\'un autre accord ou contrat que votre presonnage a conclu pendant le GN et qui peut avoir une incidence sur la suite. Précisez le nom des personnages ou des joueurs impliqués dans cet accord / ce contrat.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_debrie_contrat_secondaire',
    'label' => 'Accord / contrat secondaire',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'profile2-debrief_texte-field_debrief_acquisition'.
  $field_instances['profile2-debrief_texte-field_debrief_acquisition'] = array(
    'bundle' => 'debrief_texte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Avantage de réputation ? Epée qui coupe les cailloux ? Listez ici toutes les choses importantes que vous avez acquis pendant le GN (et que vous aviez toujours à la fin).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_debrief_acquisition',
    'label' => 'Qu\'avez-vous acquis ?',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_ambiance'.
  $field_instances['profile2-debrief_texte-field_debrief_ambiance'] = array(
    'bundle' => 'debrief_texte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_debrief_ambiance',
    'label' => 'Ce que vous avez pensé de l\'ambiance, l\'immersion, la facilité à entrer dans le jeu',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_anecdotes'.
  $field_instances['profile2-debrief_texte-field_debrief_anecdotes'] = array(
    'bundle' => 'debrief_texte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_debrief_anecdotes',
    'label' => 'Anecdote, meilleurs moments, fou rires, racontez ce que nous n\'avons pas pu voir/vivre !',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_bottes'.
  $field_instances['profile2-debrief_texte-field_debrief_bottes'] = array(
    'bundle' => 'debrief_texte',
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
        'weight' => 7,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_debrief_bottes',
    'label' => 'Avez-vous appris des bottes ?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'profile2-debrief_texte-field_debrief_bottes_detail'.
  $field_instances['profile2-debrief_texte-field_debrief_bottes_detail'] = array(
    'bundle' => 'debrief_texte',
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
    'field_name' => 'field_debrief_bottes_detail',
    'label' => 'Lesquelles et comment ?',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'profile2-debrief_texte-field_debrief_contrat_autre'.
  $field_instances['profile2-debrief_texte-field_debrief_contrat_autre'] = array(
    'bundle' => 'debrief_texte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'S\'il y a d\'autres accords ou contrats que vous jugez bon de nous communiquer, vous pouvez le faire ici. Pour chacun merci de préciser les personnages ou joueurs impliqués.',
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
    'field_name' => 'field_debrief_contrat_autre',
    'label' => 'Autres accords / contrats',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'profile2-debrief_texte-field_debrief_contrat_principal'.
  $field_instances['profile2-debrief_texte-field_debrief_contrat_principal'] = array(
    'bundle' => 'debrief_texte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Décrivez les termes de l\'accord ou d\'un contrat que votre personnage a conclu pendant le GN. Celui que vous estimez le plus important et qui peut avoir un impact sur la suite. Précisez le nom des personnages ou des joueurs impliqués dans cet accord / ce contrat.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_debrief_contrat_principal',
    'label' => 'Accord / contrat principal',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_dacre'.
  $field_instances['profile2-debrief_texte-field_debrief_dacre'] = array(
    'bundle' => 'debrief_texte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_debrief_dacre',
    'label' => 'Ce que vous avez pensé du cadre, des hors jeu, de la logistique, des repas',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_evenements'.
  $field_instances['profile2-debrief_texte-field_debrief_evenements'] = array(
    'bundle' => 'debrief_texte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_debrief_evenements',
    'label' => 'A quels événements avez-vous participé ?',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_evolution'.
  $field_instances['profile2-debrief_texte-field_debrief_evolution'] = array(
    'bundle' => 'debrief_texte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Merci de le préciser même si vous ne souhaitez pas le conserver.',
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
    'field_name' => 'field_debrief_evolution',
    'label' => 'Que voudrait faire votre personnage à présent ?',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_intro'.
  $field_instances['profile2-debrief_texte-field_debrief_intro'] = array(
    'bundle' => 'debrief_texte',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_debrief_intro',
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

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_meilleur'.
  $field_instances['profile2-debrief_texte-field_debrief_meilleur'] = array(
    'bundle' => 'debrief_texte',
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
    'field_name' => 'field_debrief_meilleur',
    'label' => 'Ce que vous avez préféré',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_mort'.
  $field_instances['profile2-debrief_texte-field_debrief_mort'] = array(
    'bundle' => 'debrief_texte',
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
    'field_name' => 'field_debrief_mort',
    'label' => 'Avez-vous eu peur de mourir ?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_perso'.
  $field_instances['profile2-debrief_texte-field_debrief_perso'] = array(
    'bundle' => 'debrief_texte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_debrief_perso',
    'label' => 'Ce que vous avez pensé de votre personnage, son histoire, ses objectifs',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_pire'.
  $field_instances['profile2-debrief_texte-field_debrief_pire'] = array(
    'bundle' => 'debrief_texte',
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
    'field_name' => 'field_debrief_pire',
    'label' => 'Ce que vous n\'avez pas aimé',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_reputation'.
  $field_instances['profile2-debrief_texte-field_debrief_reputation'] = array(
    'bundle' => 'debrief_texte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
    'field_name' => 'field_debrief_reputation',
    'label' => 'Avez-vous été "impressionnés" ? "Déçus" ? A quelle occasion ?',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'profile2-debrief_texte-field_debrief_reputation_finale'.
  $field_instances['profile2-debrief_texte-field_debrief_reputation_finale'] = array(
    'bundle' => 'debrief_texte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_debrief_reputation_finale',
    'label' => 'Combien de points de réputation aviez-vous environ en fin de GN ?',
    'required' => 0,
    'settings' => array(
      'max' => 50,
      'min' => -50,
      'prefix' => 'environ ',
      'suffix' => ' points',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_sante'.
  $field_instances['profile2-debrief_texte-field_debrief_sante'] = array(
    'bundle' => 'debrief_texte',
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
        'weight' => 9,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_debrief_sante',
    'label' => 'Avez-vous été entre la vie et la mort ?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_scenario'.
  $field_instances['profile2-debrief_texte-field_debrief_scenario'] = array(
    'bundle' => 'debrief_texte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_debrief_scenario',
    'label' => 'Ce que vous avez pensé du scénario, des intrigues',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_suite'.
  $field_instances['profile2-debrief_texte-field_debrief_suite'] = array(
    'bundle' => 'debrief_texte',
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
        'weight' => 14,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_debrief_suite',
    'label' => 'Souhaiteriez-vous participer à un nouvel opus ?',
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

  // Exported field_instance:
  // 'profile2-debrief_texte-field_debrief_suite_perso'.
  $field_instances['profile2-debrief_texte-field_debrief_suite_perso'] = array(
    'bundle' => 'debrief_texte',
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
    'field_name' => 'field_debrief_suite_perso',
    'label' => 'Souhaiteriez-vous conserver votre personnage ?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'profile2-debrief_texte-field_debrief_univers'.
  $field_instances['profile2-debrief_texte-field_debrief_univers'] = array(
    'bundle' => 'debrief_texte',
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
    'field_name' => 'field_debrief_univers',
    'label' => 'Ce que vous avez pensé de l\'univers, du monde, du réalisme',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A quels événements avez-vous participé ?');
  t('Accord / contrat principal');
  t('Accord / contrat secondaire');
  t('Anecdote, meilleurs moments, fou rires, racontez ce que nous n\'avons pas pu voir/vivre !');
  t('Autres accords / contrats');
  t('Avantage de réputation ? Epée qui coupe les cailloux ? Listez ici toutes les choses importantes que vous avez acquis pendant le GN (et que vous aviez toujours à la fin).');
  t('Avez-vous appris des bottes ?');
  t('Avez-vous eu peur de mourir ?');
  t('Avez-vous été "impressionnés" ? "Déçus" ? A quelle occasion ?');
  t('Avez-vous été entre la vie et la mort ?');
  t('Ce que vous avez pensé de l\'ambiance, l\'immersion, la facilité à entrer dans le jeu');
  t('Ce que vous avez pensé de l\'univers, du monde, du réalisme');
  t('Ce que vous avez pensé de votre personnage, son histoire, ses objectifs');
  t('Ce que vous avez pensé du cadre, des hors jeu, de la logistique, des repas');
  t('Ce que vous avez pensé du scénario, des intrigues');
  t('Ce que vous avez préféré');
  t('Ce que vous n\'avez pas aimé');
  t('Combien de points de réputation aviez-vous environ en fin de GN ?');
  t('Décrivez les termes d\'un autre accord ou contrat que votre presonnage a conclu pendant le GN et qui peut avoir une incidence sur la suite. Précisez le nom des personnages ou des joueurs impliqués dans cet accord / ce contrat.');
  t('Décrivez les termes de l\'accord ou d\'un contrat que votre personnage a conclu pendant le GN. Celui que vous estimez le plus important et qui peut avoir un impact sur la suite. Précisez le nom des personnages ou des joueurs impliqués dans cet accord / ce contrat.');
  t('Intro');
  t('L\'ambiance ');
  t('L\'immersion');
  t('L\'univers, le monde');
  t('La facilité à entrer dans le jeu');
  t('La logistique');
  t('Le cadre');
  t('Le réalisme, la cohérence');
  t('Le scénario global');
  t('Les intrigues liées à votre personnage');
  t('Les repas');
  t('Les règles de brette');
  t('Les règles de pugilat');
  t('Les règles de réputation');
  t('Les règles de santé');
  t('Lesquelles et comment ?');
  t('Merci de le préciser même si vous ne souhaitez pas le conserver.');
  t('Qu\'avez-vous acquis ?');
  t('Que voudrait faire votre personnage à présent ?');
  t('S\'il y a d\'autres accords ou contrats que vous jugez bon de nous communiquer, vous pouvez le faire ici. Pour chacun merci de préciser les personnages ou joueurs impliqués.');
  t('Souhaiteriez-vous conserver votre personnage ?');
  t('Souhaiteriez-vous participer à un nouvel opus ?');
  t('Vos objectifs');
  t('Votre personnage et son histoire');
  t('Votre sentiment général sur le GN');

  return $field_instances;
}
