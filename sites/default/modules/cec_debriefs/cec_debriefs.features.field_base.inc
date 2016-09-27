<?php
/**
 * @file
 * cec_debriefs.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function cec_debriefs_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_debrie_contrat_secondaire'.
  $field_bases['field_debrie_contrat_secondaire'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrie_contrat_secondaire',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_debrief_acquisition'.
  $field_bases['field_debrief_acquisition'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_acquisition',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_debrief_ambiance'.
  $field_bases['field_debrief_ambiance'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_ambiance',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_debrief_anecdotes'.
  $field_bases['field_debrief_anecdotes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_anecdotes',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_debrief_bottes'.
  $field_bases['field_debrief_bottes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_bottes',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Non',
        1 => 'Oui',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_debrief_bottes_detail'.
  $field_bases['field_debrief_bottes_detail'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_bottes_detail',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_debrief_contrat_autre'.
  $field_bases['field_debrief_contrat_autre'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_contrat_autre',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_debrief_contrat_principal'.
  $field_bases['field_debrief_contrat_principal'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_contrat_principal',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_debrief_dacre'.
  $field_bases['field_debrief_dacre'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_dacre',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_debrief_evenements'.
  $field_bases['field_debrief_evenements'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_evenements',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_debrief_evolution'.
  $field_bases['field_debrief_evolution'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_evolution',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_debrief_intro'.
  $field_bases['field_debrief_intro'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_intro',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<p>N\'hésitez pas à entrer dans le détail de vos expériences pour nous aider à améliorer la qualité de nos GN. Vous pouvez enregistrer ce formulaire et y revenir plus tard pour le compléter.</p>',
      ),
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_debrief_meilleur'.
  $field_bases['field_debrief_meilleur'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_meilleur',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_debrief_mort'.
  $field_bases['field_debrief_mort'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_mort',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Non',
        1 => 'Oui',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_debrief_perso'.
  $field_bases['field_debrief_perso'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_perso',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_debrief_pire'.
  $field_bases['field_debrief_pire'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_pire',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_debrief_reputation'.
  $field_bases['field_debrief_reputation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_reputation',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_debrief_reputation_finale'.
  $field_bases['field_debrief_reputation_finale'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_reputation_finale',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_debrief_sante'.
  $field_bases['field_debrief_sante'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_sante',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Non',
        1 => 'Oui',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_debrief_scenario'.
  $field_bases['field_debrief_scenario'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_scenario',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_debrief_sondage_intro'.
  $field_bases['field_debrief_sondage_intro'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_sondage_intro',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<p>Donnez nous votre point de vue sur les divers aspects du GN listés ci-dessous.</p>',
      ),
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_debrief_suite'.
  $field_bases['field_debrief_suite'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_suite',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Non',
        1 => 'Oui',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_debrief_suite_perso'.
  $field_bases['field_debrief_suite_perso'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_suite_perso',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Non',
        1 => 'Oui',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_debrief_univers'.
  $field_bases['field_debrief_univers'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_debrief_univers',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_note_ambiance'.
  $field_bases['field_note_ambiance'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_ambiance',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_cadre'.
  $field_bases['field_note_cadre'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_cadre',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_facilite'.
  $field_bases['field_note_facilite'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_facilite',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_globale'.
  $field_bases['field_note_globale'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_globale',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_immersion'.
  $field_bases['field_note_immersion'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_immersion',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_intrigues'.
  $field_bases['field_note_intrigues'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_intrigues',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_logistique'.
  $field_bases['field_note_logistique'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_logistique',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_objectifs'.
  $field_bases['field_note_objectifs'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_objectifs',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_perso'.
  $field_bases['field_note_perso'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_perso',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_realisme'.
  $field_bases['field_note_realisme'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_realisme',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_regles_brette'.
  $field_bases['field_note_regles_brette'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_regles_brette',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_regles_pugilat'.
  $field_bases['field_note_regles_pugilat'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_regles_pugilat',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_regles_reputation'.
  $field_bases['field_note_regles_reputation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_regles_reputation',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_regles_sante'.
  $field_bases['field_note_regles_sante'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_regles_sante',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_repas'.
  $field_bases['field_note_repas'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_repas',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_scenario'.
  $field_bases['field_note_scenario'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_scenario',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_note_univers'.
  $field_bases['field_note_univers'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_univers',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nul !',
        1 => 'Mauvais',
        2 => 'Pas mal',
        3 => 'Moyen',
        4 => 'Bon',
        5 => 'Excellent',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  return $field_bases;
}
