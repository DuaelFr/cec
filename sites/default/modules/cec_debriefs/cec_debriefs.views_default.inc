<?php
/**
 * @file
 * cec_debriefs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cec_debriefs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_debrief';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin Debrief';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Debriefs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    168020977 => '168020977',
  );
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '60';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 'state-en-discussion';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_incarnate' => 'field_incarnate',
    'title' => 'title',
    'field_incarnate_1' => 'field_incarnate_1',
    'label' => 'label',
    'label_1' => 'label_1',
    'field_note_globale' => 'field_note_globale',
    'field_note_perso' => 'field_note_perso',
    'field_note_objectifs' => 'field_note_objectifs',
    'field_note_scenario' => 'field_note_scenario',
    'field_note_intrigues' => 'field_note_intrigues',
    'field_note_cadre' => 'field_note_cadre',
    'field_note_logistique' => 'field_note_logistique',
    'field_note_repas' => 'field_note_repas',
    'field_note_ambiance' => 'field_note_ambiance',
    'field_note_immersion' => 'field_note_immersion',
    'field_note_facilite' => 'field_note_facilite',
    'field_note_univers' => 'field_note_univers',
    'field_note_realisme' => 'field_note_realisme',
    'field_note_regles_sante' => 'field_note_regles_sante',
    'field_note_regles_brette' => 'field_note_regles_brette',
    'field_note_regles_reputation' => 'field_note_regles_reputation',
    'field_note_regles_pugilat' => 'field_note_regles_pugilat',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_incarnate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_incarnate_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_globale' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_perso' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_objectifs' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_scenario' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_intrigues' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_cadre' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_logistique' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_repas' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_ambiance' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_immersion' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_facilite' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_univers' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_realisme' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_regles_sante' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_regles_brette' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_regles_reputation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_note_regles_pugilat' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_incarnate_target_id']['id'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['field'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['label'] = 'Joueur';
  /* Relationship: User: Profil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['profile']['label'] = 'Sondage';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'debrief_sondage' => 'debrief_sondage',
  );
  /* Relationship: User: Profil */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Debrief';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'debrief_texte' => 'debrief_texte',
  );
  /* Field: Nœud: Incarné par */
  $handler->display->display_options['fields']['field_incarnate']['id'] = 'field_incarnate';
  $handler->display->display_options['fields']['field_incarnate']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['fields']['field_incarnate']['field'] = 'field_incarnate';
  $handler->display->display_options['fields']['field_incarnate']['label'] = '';
  $handler->display->display_options['fields']['field_incarnate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_incarnate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_incarnate']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_incarnate']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Personnage';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Nœud: Incarné par */
  $handler->display->display_options['fields']['field_incarnate_1']['id'] = 'field_incarnate_1';
  $handler->display->display_options['fields']['field_incarnate_1']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['fields']['field_incarnate_1']['field'] = 'field_incarnate';
  $handler->display->display_options['fields']['field_incarnate_1']['label'] = 'Joueur';
  $handler->display->display_options['fields']['field_incarnate_1']['settings'] = array(
    'link' => 1,
  );
  /* Field: Profil: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'profile';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['label']['label'] = 'Debrief';
  $handler->display->display_options['fields']['label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['text'] = '<a href="/profile-debrief_texte/[field_incarnate]">Lire</a>';
  $handler->display->display_options['fields']['label']['empty'] = '-Vide-';
  /* Field: Profil: Label */
  $handler->display->display_options['fields']['label_1']['id'] = 'label_1';
  $handler->display->display_options['fields']['label_1']['table'] = 'profile';
  $handler->display->display_options['fields']['label_1']['field'] = 'label';
  $handler->display->display_options['fields']['label_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['label_1']['label'] = 'Vide';
  $handler->display->display_options['fields']['label_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['label_1']['alter']['text'] = '<em>NSPP</em>';
  $handler->display->display_options['fields']['label_1']['empty'] = '-Vide-';
  /* Field: Profil: Votre sentiment général sur le GN */
  $handler->display->display_options['fields']['field_note_globale']['id'] = 'field_note_globale';
  $handler->display->display_options['fields']['field_note_globale']['table'] = 'field_data_field_note_globale';
  $handler->display->display_options['fields']['field_note_globale']['field'] = 'field_note_globale';
  $handler->display->display_options['fields']['field_note_globale']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_globale']['empty'] = '[label_1]';
  /* Field: Profil: Votre personnage et son histoire */
  $handler->display->display_options['fields']['field_note_perso']['id'] = 'field_note_perso';
  $handler->display->display_options['fields']['field_note_perso']['table'] = 'field_data_field_note_perso';
  $handler->display->display_options['fields']['field_note_perso']['field'] = 'field_note_perso';
  $handler->display->display_options['fields']['field_note_perso']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_perso']['empty'] = '[label_1]';
  /* Field: Profil: Vos objectifs */
  $handler->display->display_options['fields']['field_note_objectifs']['id'] = 'field_note_objectifs';
  $handler->display->display_options['fields']['field_note_objectifs']['table'] = 'field_data_field_note_objectifs';
  $handler->display->display_options['fields']['field_note_objectifs']['field'] = 'field_note_objectifs';
  $handler->display->display_options['fields']['field_note_objectifs']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_objectifs']['empty'] = '[label_1]';
  /* Field: Profil: Le scénario global */
  $handler->display->display_options['fields']['field_note_scenario']['id'] = 'field_note_scenario';
  $handler->display->display_options['fields']['field_note_scenario']['table'] = 'field_data_field_note_scenario';
  $handler->display->display_options['fields']['field_note_scenario']['field'] = 'field_note_scenario';
  $handler->display->display_options['fields']['field_note_scenario']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_scenario']['empty'] = '[label_1]';
  /* Field: Profil: Les intrigues liées à votre personnage */
  $handler->display->display_options['fields']['field_note_intrigues']['id'] = 'field_note_intrigues';
  $handler->display->display_options['fields']['field_note_intrigues']['table'] = 'field_data_field_note_intrigues';
  $handler->display->display_options['fields']['field_note_intrigues']['field'] = 'field_note_intrigues';
  $handler->display->display_options['fields']['field_note_intrigues']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_intrigues']['empty'] = '[label_1]';
  /* Field: Profil: Le cadre */
  $handler->display->display_options['fields']['field_note_cadre']['id'] = 'field_note_cadre';
  $handler->display->display_options['fields']['field_note_cadre']['table'] = 'field_data_field_note_cadre';
  $handler->display->display_options['fields']['field_note_cadre']['field'] = 'field_note_cadre';
  $handler->display->display_options['fields']['field_note_cadre']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_cadre']['empty'] = '[label_1]';
  /* Field: Profil: La logistique */
  $handler->display->display_options['fields']['field_note_logistique']['id'] = 'field_note_logistique';
  $handler->display->display_options['fields']['field_note_logistique']['table'] = 'field_data_field_note_logistique';
  $handler->display->display_options['fields']['field_note_logistique']['field'] = 'field_note_logistique';
  $handler->display->display_options['fields']['field_note_logistique']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_logistique']['empty'] = '[label_1]';
  /* Field: Profil: Les repas */
  $handler->display->display_options['fields']['field_note_repas']['id'] = 'field_note_repas';
  $handler->display->display_options['fields']['field_note_repas']['table'] = 'field_data_field_note_repas';
  $handler->display->display_options['fields']['field_note_repas']['field'] = 'field_note_repas';
  $handler->display->display_options['fields']['field_note_repas']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_repas']['empty'] = '[label_1]';
  /* Field: Profil: L'ambiance  */
  $handler->display->display_options['fields']['field_note_ambiance']['id'] = 'field_note_ambiance';
  $handler->display->display_options['fields']['field_note_ambiance']['table'] = 'field_data_field_note_ambiance';
  $handler->display->display_options['fields']['field_note_ambiance']['field'] = 'field_note_ambiance';
  $handler->display->display_options['fields']['field_note_ambiance']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_ambiance']['empty'] = '[label_1]';
  /* Field: Profil: L'immersion */
  $handler->display->display_options['fields']['field_note_immersion']['id'] = 'field_note_immersion';
  $handler->display->display_options['fields']['field_note_immersion']['table'] = 'field_data_field_note_immersion';
  $handler->display->display_options['fields']['field_note_immersion']['field'] = 'field_note_immersion';
  $handler->display->display_options['fields']['field_note_immersion']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_immersion']['empty'] = '[label_1]';
  /* Field: Profil: La facilité à entrer dans le jeu */
  $handler->display->display_options['fields']['field_note_facilite']['id'] = 'field_note_facilite';
  $handler->display->display_options['fields']['field_note_facilite']['table'] = 'field_data_field_note_facilite';
  $handler->display->display_options['fields']['field_note_facilite']['field'] = 'field_note_facilite';
  $handler->display->display_options['fields']['field_note_facilite']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_facilite']['empty'] = '[label_1]';
  /* Field: Profil: L'univers, le monde */
  $handler->display->display_options['fields']['field_note_univers']['id'] = 'field_note_univers';
  $handler->display->display_options['fields']['field_note_univers']['table'] = 'field_data_field_note_univers';
  $handler->display->display_options['fields']['field_note_univers']['field'] = 'field_note_univers';
  $handler->display->display_options['fields']['field_note_univers']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_univers']['empty'] = '[label_1]';
  /* Field: Profil: Le réalisme, la cohérence */
  $handler->display->display_options['fields']['field_note_realisme']['id'] = 'field_note_realisme';
  $handler->display->display_options['fields']['field_note_realisme']['table'] = 'field_data_field_note_realisme';
  $handler->display->display_options['fields']['field_note_realisme']['field'] = 'field_note_realisme';
  $handler->display->display_options['fields']['field_note_realisme']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_realisme']['empty'] = '[label_1]';
  /* Field: Profil: Les règles de santé */
  $handler->display->display_options['fields']['field_note_regles_sante']['id'] = 'field_note_regles_sante';
  $handler->display->display_options['fields']['field_note_regles_sante']['table'] = 'field_data_field_note_regles_sante';
  $handler->display->display_options['fields']['field_note_regles_sante']['field'] = 'field_note_regles_sante';
  $handler->display->display_options['fields']['field_note_regles_sante']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_regles_sante']['empty'] = '[label_1]';
  /* Field: Profil: Les règles de brette */
  $handler->display->display_options['fields']['field_note_regles_brette']['id'] = 'field_note_regles_brette';
  $handler->display->display_options['fields']['field_note_regles_brette']['table'] = 'field_data_field_note_regles_brette';
  $handler->display->display_options['fields']['field_note_regles_brette']['field'] = 'field_note_regles_brette';
  $handler->display->display_options['fields']['field_note_regles_brette']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_regles_brette']['empty'] = '[label_1]';
  /* Field: Profil: Les règles de réputation */
  $handler->display->display_options['fields']['field_note_regles_reputation']['id'] = 'field_note_regles_reputation';
  $handler->display->display_options['fields']['field_note_regles_reputation']['table'] = 'field_data_field_note_regles_reputation';
  $handler->display->display_options['fields']['field_note_regles_reputation']['field'] = 'field_note_regles_reputation';
  $handler->display->display_options['fields']['field_note_regles_reputation']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_regles_reputation']['empty'] = '[label_1]';
  /* Field: Profil: Les règles de pugilat */
  $handler->display->display_options['fields']['field_note_regles_pugilat']['id'] = 'field_note_regles_pugilat';
  $handler->display->display_options['fields']['field_note_regles_pugilat']['table'] = 'field_data_field_note_regles_pugilat';
  $handler->display->display_options['fields']['field_note_regles_pugilat']['field'] = 'field_note_regles_pugilat';
  $handler->display->display_options['fields']['field_note_regles_pugilat']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_regles_pugilat']['empty'] = '[label_1]';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'character' => 'character',
  );
  /* Filter criterion: Nœud: Type (field_character_type) */
  $handler->display->display_options['filters']['field_character_type_value']['id'] = 'field_character_type_value';
  $handler->display->display_options['filters']['field_character_type_value']['table'] = 'field_data_field_character_type';
  $handler->display->display_options['filters']['field_character_type_value']['field'] = 'field_character_type_value';
  $handler->display->display_options['filters']['field_character_type_value']['value'] = array(
    'Joueur' => 'Joueur',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/cec/debrief';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Debriefs';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';

  /* Display: Fichier attaché */
  $handler = $view->new_display('attachment', 'Fichier attaché', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Moyennes';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profil: Votre sentiment général sur le GN */
  $handler->display->display_options['fields']['field_note_globale']['id'] = 'field_note_globale';
  $handler->display->display_options['fields']['field_note_globale']['table'] = 'field_data_field_note_globale';
  $handler->display->display_options['fields']['field_note_globale']['field'] = 'field_note_globale';
  $handler->display->display_options['fields']['field_note_globale']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_globale']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_globale']['element_label_type'] = 'strong';
  /* Field: Profil: Votre personnage et son histoire */
  $handler->display->display_options['fields']['field_note_perso']['id'] = 'field_note_perso';
  $handler->display->display_options['fields']['field_note_perso']['table'] = 'field_data_field_note_perso';
  $handler->display->display_options['fields']['field_note_perso']['field'] = 'field_note_perso';
  $handler->display->display_options['fields']['field_note_perso']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_perso']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_perso']['element_label_type'] = 'strong';
  /* Field: Profil: Vos objectifs */
  $handler->display->display_options['fields']['field_note_objectifs']['id'] = 'field_note_objectifs';
  $handler->display->display_options['fields']['field_note_objectifs']['table'] = 'field_data_field_note_objectifs';
  $handler->display->display_options['fields']['field_note_objectifs']['field'] = 'field_note_objectifs';
  $handler->display->display_options['fields']['field_note_objectifs']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_objectifs']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_objectifs']['element_label_type'] = 'strong';
  /* Field: Profil: Le scénario global */
  $handler->display->display_options['fields']['field_note_scenario']['id'] = 'field_note_scenario';
  $handler->display->display_options['fields']['field_note_scenario']['table'] = 'field_data_field_note_scenario';
  $handler->display->display_options['fields']['field_note_scenario']['field'] = 'field_note_scenario';
  $handler->display->display_options['fields']['field_note_scenario']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_scenario']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_scenario']['element_label_type'] = 'strong';
  /* Field: Profil: Les intrigues liées à votre personnage */
  $handler->display->display_options['fields']['field_note_intrigues']['id'] = 'field_note_intrigues';
  $handler->display->display_options['fields']['field_note_intrigues']['table'] = 'field_data_field_note_intrigues';
  $handler->display->display_options['fields']['field_note_intrigues']['field'] = 'field_note_intrigues';
  $handler->display->display_options['fields']['field_note_intrigues']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_intrigues']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_intrigues']['element_label_type'] = 'strong';
  /* Field: Profil: Le cadre */
  $handler->display->display_options['fields']['field_note_cadre']['id'] = 'field_note_cadre';
  $handler->display->display_options['fields']['field_note_cadre']['table'] = 'field_data_field_note_cadre';
  $handler->display->display_options['fields']['field_note_cadre']['field'] = 'field_note_cadre';
  $handler->display->display_options['fields']['field_note_cadre']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_cadre']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_cadre']['element_label_type'] = 'strong';
  /* Field: Profil: La logistique */
  $handler->display->display_options['fields']['field_note_logistique']['id'] = 'field_note_logistique';
  $handler->display->display_options['fields']['field_note_logistique']['table'] = 'field_data_field_note_logistique';
  $handler->display->display_options['fields']['field_note_logistique']['field'] = 'field_note_logistique';
  $handler->display->display_options['fields']['field_note_logistique']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_logistique']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_logistique']['element_label_type'] = 'strong';
  /* Field: Profil: Les repas */
  $handler->display->display_options['fields']['field_note_repas']['id'] = 'field_note_repas';
  $handler->display->display_options['fields']['field_note_repas']['table'] = 'field_data_field_note_repas';
  $handler->display->display_options['fields']['field_note_repas']['field'] = 'field_note_repas';
  $handler->display->display_options['fields']['field_note_repas']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_repas']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_repas']['element_label_type'] = 'strong';
  /* Field: Profil: L'ambiance  */
  $handler->display->display_options['fields']['field_note_ambiance']['id'] = 'field_note_ambiance';
  $handler->display->display_options['fields']['field_note_ambiance']['table'] = 'field_data_field_note_ambiance';
  $handler->display->display_options['fields']['field_note_ambiance']['field'] = 'field_note_ambiance';
  $handler->display->display_options['fields']['field_note_ambiance']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_ambiance']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_ambiance']['element_label_type'] = 'strong';
  /* Field: Profil: L'immersion */
  $handler->display->display_options['fields']['field_note_immersion']['id'] = 'field_note_immersion';
  $handler->display->display_options['fields']['field_note_immersion']['table'] = 'field_data_field_note_immersion';
  $handler->display->display_options['fields']['field_note_immersion']['field'] = 'field_note_immersion';
  $handler->display->display_options['fields']['field_note_immersion']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_immersion']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_immersion']['element_label_type'] = 'strong';
  /* Field: Profil: La facilité à entrer dans le jeu */
  $handler->display->display_options['fields']['field_note_facilite']['id'] = 'field_note_facilite';
  $handler->display->display_options['fields']['field_note_facilite']['table'] = 'field_data_field_note_facilite';
  $handler->display->display_options['fields']['field_note_facilite']['field'] = 'field_note_facilite';
  $handler->display->display_options['fields']['field_note_facilite']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_facilite']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_facilite']['element_label_type'] = 'strong';
  /* Field: Profil: L'univers, le monde */
  $handler->display->display_options['fields']['field_note_univers']['id'] = 'field_note_univers';
  $handler->display->display_options['fields']['field_note_univers']['table'] = 'field_data_field_note_univers';
  $handler->display->display_options['fields']['field_note_univers']['field'] = 'field_note_univers';
  $handler->display->display_options['fields']['field_note_univers']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_univers']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_univers']['element_label_type'] = 'strong';
  /* Field: Profil: Le réalisme, la cohérence */
  $handler->display->display_options['fields']['field_note_realisme']['id'] = 'field_note_realisme';
  $handler->display->display_options['fields']['field_note_realisme']['table'] = 'field_data_field_note_realisme';
  $handler->display->display_options['fields']['field_note_realisme']['field'] = 'field_note_realisme';
  $handler->display->display_options['fields']['field_note_realisme']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_realisme']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_realisme']['element_label_type'] = 'strong';
  /* Field: Profil: Les règles de santé */
  $handler->display->display_options['fields']['field_note_regles_sante']['id'] = 'field_note_regles_sante';
  $handler->display->display_options['fields']['field_note_regles_sante']['table'] = 'field_data_field_note_regles_sante';
  $handler->display->display_options['fields']['field_note_regles_sante']['field'] = 'field_note_regles_sante';
  $handler->display->display_options['fields']['field_note_regles_sante']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_regles_sante']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_regles_sante']['element_label_type'] = 'strong';
  /* Field: Profil: Les règles de brette */
  $handler->display->display_options['fields']['field_note_regles_brette']['id'] = 'field_note_regles_brette';
  $handler->display->display_options['fields']['field_note_regles_brette']['table'] = 'field_data_field_note_regles_brette';
  $handler->display->display_options['fields']['field_note_regles_brette']['field'] = 'field_note_regles_brette';
  $handler->display->display_options['fields']['field_note_regles_brette']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_regles_brette']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_regles_brette']['element_label_type'] = 'strong';
  /* Field: Profil: Les règles de réputation */
  $handler->display->display_options['fields']['field_note_regles_reputation']['id'] = 'field_note_regles_reputation';
  $handler->display->display_options['fields']['field_note_regles_reputation']['table'] = 'field_data_field_note_regles_reputation';
  $handler->display->display_options['fields']['field_note_regles_reputation']['field'] = 'field_note_regles_reputation';
  $handler->display->display_options['fields']['field_note_regles_reputation']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_regles_reputation']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_regles_reputation']['element_label_type'] = 'strong';
  /* Field: Profil: Les règles de pugilat */
  $handler->display->display_options['fields']['field_note_regles_pugilat']['id'] = 'field_note_regles_pugilat';
  $handler->display->display_options['fields']['field_note_regles_pugilat']['table'] = 'field_data_field_note_regles_pugilat';
  $handler->display->display_options['fields']['field_note_regles_pugilat']['field'] = 'field_note_regles_pugilat';
  $handler->display->display_options['fields']['field_note_regles_pugilat']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_note_regles_pugilat']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_note_regles_pugilat']['element_label_type'] = 'strong';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Sondages (export) */
  $handler = $view->new_display('views_data_export', 'Sondages (export)', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'debriefs_sondage.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_incarnate_target_id']['id'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['field'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['label'] = 'Joueur';
  /* Relationship: User: Profil */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Sondage';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'debrief_sondage' => 'debrief_sondage',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Nœud: Incarné par */
  $handler->display->display_options['fields']['field_incarnate']['id'] = 'field_incarnate';
  $handler->display->display_options['fields']['field_incarnate']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['fields']['field_incarnate']['field'] = 'field_incarnate';
  $handler->display->display_options['fields']['field_incarnate']['label'] = '';
  $handler->display->display_options['fields']['field_incarnate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_incarnate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_incarnate']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_incarnate']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Personnage';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Nœud: Incarné par */
  $handler->display->display_options['fields']['field_incarnate_1']['id'] = 'field_incarnate_1';
  $handler->display->display_options['fields']['field_incarnate_1']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['fields']['field_incarnate_1']['field'] = 'field_incarnate';
  $handler->display->display_options['fields']['field_incarnate_1']['label'] = 'Joueur';
  $handler->display->display_options['fields']['field_incarnate_1']['settings'] = array(
    'link' => 1,
  );
  /* Field: Profil: Label */
  $handler->display->display_options['fields']['label_1']['id'] = 'label_1';
  $handler->display->display_options['fields']['label_1']['table'] = 'profile';
  $handler->display->display_options['fields']['label_1']['field'] = 'label';
  $handler->display->display_options['fields']['label_1']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['label_1']['label'] = 'Vide';
  $handler->display->display_options['fields']['label_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['label_1']['alter']['text'] = '<em>NSPP</em>';
  $handler->display->display_options['fields']['label_1']['empty'] = '-Vide-';
  /* Field: Profil: Votre sentiment général sur le GN */
  $handler->display->display_options['fields']['field_note_globale']['id'] = 'field_note_globale';
  $handler->display->display_options['fields']['field_note_globale']['table'] = 'field_data_field_note_globale';
  $handler->display->display_options['fields']['field_note_globale']['field'] = 'field_note_globale';
  $handler->display->display_options['fields']['field_note_globale']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_globale']['empty'] = '[label_1]';
  /* Field: Profil: Votre personnage et son histoire */
  $handler->display->display_options['fields']['field_note_perso']['id'] = 'field_note_perso';
  $handler->display->display_options['fields']['field_note_perso']['table'] = 'field_data_field_note_perso';
  $handler->display->display_options['fields']['field_note_perso']['field'] = 'field_note_perso';
  $handler->display->display_options['fields']['field_note_perso']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_perso']['empty'] = '[label_1]';
  /* Field: Profil: Vos objectifs */
  $handler->display->display_options['fields']['field_note_objectifs']['id'] = 'field_note_objectifs';
  $handler->display->display_options['fields']['field_note_objectifs']['table'] = 'field_data_field_note_objectifs';
  $handler->display->display_options['fields']['field_note_objectifs']['field'] = 'field_note_objectifs';
  $handler->display->display_options['fields']['field_note_objectifs']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_objectifs']['empty'] = '[label_1]';
  /* Field: Profil: Le scénario global */
  $handler->display->display_options['fields']['field_note_scenario']['id'] = 'field_note_scenario';
  $handler->display->display_options['fields']['field_note_scenario']['table'] = 'field_data_field_note_scenario';
  $handler->display->display_options['fields']['field_note_scenario']['field'] = 'field_note_scenario';
  $handler->display->display_options['fields']['field_note_scenario']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_scenario']['empty'] = '[label_1]';
  /* Field: Profil: Les intrigues liées à votre personnage */
  $handler->display->display_options['fields']['field_note_intrigues']['id'] = 'field_note_intrigues';
  $handler->display->display_options['fields']['field_note_intrigues']['table'] = 'field_data_field_note_intrigues';
  $handler->display->display_options['fields']['field_note_intrigues']['field'] = 'field_note_intrigues';
  $handler->display->display_options['fields']['field_note_intrigues']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_intrigues']['empty'] = '[label_1]';
  /* Field: Profil: Le cadre */
  $handler->display->display_options['fields']['field_note_cadre']['id'] = 'field_note_cadre';
  $handler->display->display_options['fields']['field_note_cadre']['table'] = 'field_data_field_note_cadre';
  $handler->display->display_options['fields']['field_note_cadre']['field'] = 'field_note_cadre';
  $handler->display->display_options['fields']['field_note_cadre']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_cadre']['empty'] = '[label_1]';
  /* Field: Profil: La logistique */
  $handler->display->display_options['fields']['field_note_logistique']['id'] = 'field_note_logistique';
  $handler->display->display_options['fields']['field_note_logistique']['table'] = 'field_data_field_note_logistique';
  $handler->display->display_options['fields']['field_note_logistique']['field'] = 'field_note_logistique';
  $handler->display->display_options['fields']['field_note_logistique']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_logistique']['empty'] = '[label_1]';
  /* Field: Profil: Les repas */
  $handler->display->display_options['fields']['field_note_repas']['id'] = 'field_note_repas';
  $handler->display->display_options['fields']['field_note_repas']['table'] = 'field_data_field_note_repas';
  $handler->display->display_options['fields']['field_note_repas']['field'] = 'field_note_repas';
  $handler->display->display_options['fields']['field_note_repas']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_repas']['empty'] = '[label_1]';
  /* Field: Profil: L'ambiance  */
  $handler->display->display_options['fields']['field_note_ambiance']['id'] = 'field_note_ambiance';
  $handler->display->display_options['fields']['field_note_ambiance']['table'] = 'field_data_field_note_ambiance';
  $handler->display->display_options['fields']['field_note_ambiance']['field'] = 'field_note_ambiance';
  $handler->display->display_options['fields']['field_note_ambiance']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_ambiance']['empty'] = '[label_1]';
  /* Field: Profil: L'immersion */
  $handler->display->display_options['fields']['field_note_immersion']['id'] = 'field_note_immersion';
  $handler->display->display_options['fields']['field_note_immersion']['table'] = 'field_data_field_note_immersion';
  $handler->display->display_options['fields']['field_note_immersion']['field'] = 'field_note_immersion';
  $handler->display->display_options['fields']['field_note_immersion']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_immersion']['empty'] = '[label_1]';
  /* Field: Profil: La facilité à entrer dans le jeu */
  $handler->display->display_options['fields']['field_note_facilite']['id'] = 'field_note_facilite';
  $handler->display->display_options['fields']['field_note_facilite']['table'] = 'field_data_field_note_facilite';
  $handler->display->display_options['fields']['field_note_facilite']['field'] = 'field_note_facilite';
  $handler->display->display_options['fields']['field_note_facilite']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_facilite']['empty'] = '[label_1]';
  /* Field: Profil: L'univers, le monde */
  $handler->display->display_options['fields']['field_note_univers']['id'] = 'field_note_univers';
  $handler->display->display_options['fields']['field_note_univers']['table'] = 'field_data_field_note_univers';
  $handler->display->display_options['fields']['field_note_univers']['field'] = 'field_note_univers';
  $handler->display->display_options['fields']['field_note_univers']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_univers']['empty'] = '[label_1]';
  /* Field: Profil: Le réalisme, la cohérence */
  $handler->display->display_options['fields']['field_note_realisme']['id'] = 'field_note_realisme';
  $handler->display->display_options['fields']['field_note_realisme']['table'] = 'field_data_field_note_realisme';
  $handler->display->display_options['fields']['field_note_realisme']['field'] = 'field_note_realisme';
  $handler->display->display_options['fields']['field_note_realisme']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_realisme']['empty'] = '[label_1]';
  /* Field: Profil: Les règles de santé */
  $handler->display->display_options['fields']['field_note_regles_sante']['id'] = 'field_note_regles_sante';
  $handler->display->display_options['fields']['field_note_regles_sante']['table'] = 'field_data_field_note_regles_sante';
  $handler->display->display_options['fields']['field_note_regles_sante']['field'] = 'field_note_regles_sante';
  $handler->display->display_options['fields']['field_note_regles_sante']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_regles_sante']['empty'] = '[label_1]';
  /* Field: Profil: Les règles de brette */
  $handler->display->display_options['fields']['field_note_regles_brette']['id'] = 'field_note_regles_brette';
  $handler->display->display_options['fields']['field_note_regles_brette']['table'] = 'field_data_field_note_regles_brette';
  $handler->display->display_options['fields']['field_note_regles_brette']['field'] = 'field_note_regles_brette';
  $handler->display->display_options['fields']['field_note_regles_brette']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_regles_brette']['empty'] = '[label_1]';
  /* Field: Profil: Les règles de réputation */
  $handler->display->display_options['fields']['field_note_regles_reputation']['id'] = 'field_note_regles_reputation';
  $handler->display->display_options['fields']['field_note_regles_reputation']['table'] = 'field_data_field_note_regles_reputation';
  $handler->display->display_options['fields']['field_note_regles_reputation']['field'] = 'field_note_regles_reputation';
  $handler->display->display_options['fields']['field_note_regles_reputation']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_regles_reputation']['empty'] = '[label_1]';
  /* Field: Profil: Les règles de pugilat */
  $handler->display->display_options['fields']['field_note_regles_pugilat']['id'] = 'field_note_regles_pugilat';
  $handler->display->display_options['fields']['field_note_regles_pugilat']['table'] = 'field_data_field_note_regles_pugilat';
  $handler->display->display_options['fields']['field_note_regles_pugilat']['field'] = 'field_note_regles_pugilat';
  $handler->display->display_options['fields']['field_note_regles_pugilat']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_note_regles_pugilat']['empty'] = '[label_1]';
  $handler->display->display_options['path'] = 'admin/cec/debrief/export/sondage';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['return_path'] = 'admin/cec/debrief';
  $handler->display->display_options['segment_size'] = '10';

  /* Display: Debriefs (export) */
  $handler = $view->new_display('views_data_export', 'Debriefs (export)', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'debriefs_texte.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_incarnate_target_id']['id'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['field'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['label'] = 'Joueur';
  /* Relationship: User: Profil */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Debrief';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'debrief_texte' => 'debrief_texte',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Nœud: Incarné par */
  $handler->display->display_options['fields']['field_incarnate']['id'] = 'field_incarnate';
  $handler->display->display_options['fields']['field_incarnate']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['fields']['field_incarnate']['field'] = 'field_incarnate';
  $handler->display->display_options['fields']['field_incarnate']['label'] = '';
  $handler->display->display_options['fields']['field_incarnate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_incarnate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_incarnate']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_incarnate']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Personnage';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Nœud: Incarné par */
  $handler->display->display_options['fields']['field_incarnate_1']['id'] = 'field_incarnate_1';
  $handler->display->display_options['fields']['field_incarnate_1']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['fields']['field_incarnate_1']['field'] = 'field_incarnate';
  $handler->display->display_options['fields']['field_incarnate_1']['label'] = 'Joueur';
  $handler->display->display_options['fields']['field_incarnate_1']['settings'] = array(
    'link' => 1,
  );
  /* Field: Profil: Ce que vous avez préféré */
  $handler->display->display_options['fields']['field_debrief_meilleur']['id'] = 'field_debrief_meilleur';
  $handler->display->display_options['fields']['field_debrief_meilleur']['table'] = 'field_data_field_debrief_meilleur';
  $handler->display->display_options['fields']['field_debrief_meilleur']['field'] = 'field_debrief_meilleur';
  $handler->display->display_options['fields']['field_debrief_meilleur']['relationship'] = 'profile_1';
  /* Field: Profil: Ce que vous n'avez pas aimé */
  $handler->display->display_options['fields']['field_debrief_pire']['id'] = 'field_debrief_pire';
  $handler->display->display_options['fields']['field_debrief_pire']['table'] = 'field_data_field_debrief_pire';
  $handler->display->display_options['fields']['field_debrief_pire']['field'] = 'field_debrief_pire';
  $handler->display->display_options['fields']['field_debrief_pire']['relationship'] = 'profile_1';
  /* Field: Profil: Ce que vous avez pensé de votre personnage, son histoire, ses objectifs */
  $handler->display->display_options['fields']['field_debrief_perso']['id'] = 'field_debrief_perso';
  $handler->display->display_options['fields']['field_debrief_perso']['table'] = 'field_data_field_debrief_perso';
  $handler->display->display_options['fields']['field_debrief_perso']['field'] = 'field_debrief_perso';
  $handler->display->display_options['fields']['field_debrief_perso']['relationship'] = 'profile_1';
  /* Field: Profil: Ce que vous avez pensé du scénario, des intrigues */
  $handler->display->display_options['fields']['field_debrief_scenario']['id'] = 'field_debrief_scenario';
  $handler->display->display_options['fields']['field_debrief_scenario']['table'] = 'field_data_field_debrief_scenario';
  $handler->display->display_options['fields']['field_debrief_scenario']['field'] = 'field_debrief_scenario';
  $handler->display->display_options['fields']['field_debrief_scenario']['relationship'] = 'profile_1';
  /* Field: Profil: Ce que vous avez pensé du cadre, des hors jeu, de la logistique, des repas */
  $handler->display->display_options['fields']['field_debrief_dacre']['id'] = 'field_debrief_dacre';
  $handler->display->display_options['fields']['field_debrief_dacre']['table'] = 'field_data_field_debrief_dacre';
  $handler->display->display_options['fields']['field_debrief_dacre']['field'] = 'field_debrief_dacre';
  $handler->display->display_options['fields']['field_debrief_dacre']['relationship'] = 'profile_1';
  /* Field: Profil: Ce que vous avez pensé de l'ambiance, l'immersion, la facilité à entrer dans le jeu */
  $handler->display->display_options['fields']['field_debrief_ambiance']['id'] = 'field_debrief_ambiance';
  $handler->display->display_options['fields']['field_debrief_ambiance']['table'] = 'field_data_field_debrief_ambiance';
  $handler->display->display_options['fields']['field_debrief_ambiance']['field'] = 'field_debrief_ambiance';
  $handler->display->display_options['fields']['field_debrief_ambiance']['relationship'] = 'profile_1';
  /* Field: Profil: Ce que vous avez pensé de l'univers, du monde, du réalisme */
  $handler->display->display_options['fields']['field_debrief_univers']['id'] = 'field_debrief_univers';
  $handler->display->display_options['fields']['field_debrief_univers']['table'] = 'field_data_field_debrief_univers';
  $handler->display->display_options['fields']['field_debrief_univers']['field'] = 'field_debrief_univers';
  $handler->display->display_options['fields']['field_debrief_univers']['relationship'] = 'profile_1';
  /* Field: Profil: Avez-vous appris des bottes ? */
  $handler->display->display_options['fields']['field_debrief_bottes']['id'] = 'field_debrief_bottes';
  $handler->display->display_options['fields']['field_debrief_bottes']['table'] = 'field_data_field_debrief_bottes';
  $handler->display->display_options['fields']['field_debrief_bottes']['field'] = 'field_debrief_bottes';
  $handler->display->display_options['fields']['field_debrief_bottes']['relationship'] = 'profile_1';
  /* Field: Profil: Lesquelles et comment ? */
  $handler->display->display_options['fields']['field_debrief_bottes_detail']['id'] = 'field_debrief_bottes_detail';
  $handler->display->display_options['fields']['field_debrief_bottes_detail']['table'] = 'field_data_field_debrief_bottes_detail';
  $handler->display->display_options['fields']['field_debrief_bottes_detail']['field'] = 'field_debrief_bottes_detail';
  $handler->display->display_options['fields']['field_debrief_bottes_detail']['relationship'] = 'profile_1';
  /* Field: Profil: Avez-vous été entre la vie et la mort ? */
  $handler->display->display_options['fields']['field_debrief_sante']['id'] = 'field_debrief_sante';
  $handler->display->display_options['fields']['field_debrief_sante']['table'] = 'field_data_field_debrief_sante';
  $handler->display->display_options['fields']['field_debrief_sante']['field'] = 'field_debrief_sante';
  $handler->display->display_options['fields']['field_debrief_sante']['relationship'] = 'profile_1';
  /* Field: Profil: Avez-vous eu peur de mourir ? */
  $handler->display->display_options['fields']['field_debrief_mort']['id'] = 'field_debrief_mort';
  $handler->display->display_options['fields']['field_debrief_mort']['table'] = 'field_data_field_debrief_mort';
  $handler->display->display_options['fields']['field_debrief_mort']['field'] = 'field_debrief_mort';
  $handler->display->display_options['fields']['field_debrief_mort']['relationship'] = 'profile_1';
  /* Field: Profil: Avez-vous été "impressionnés" ? "Déçus" ? A quelle occasion ? */
  $handler->display->display_options['fields']['field_debrief_reputation']['id'] = 'field_debrief_reputation';
  $handler->display->display_options['fields']['field_debrief_reputation']['table'] = 'field_data_field_debrief_reputation';
  $handler->display->display_options['fields']['field_debrief_reputation']['field'] = 'field_debrief_reputation';
  $handler->display->display_options['fields']['field_debrief_reputation']['relationship'] = 'profile_1';
  /* Field: Profil: Combien de points de réputation aviez-vous environ en fin de GN ? */
  $handler->display->display_options['fields']['field_debrief_reputation_finale']['id'] = 'field_debrief_reputation_finale';
  $handler->display->display_options['fields']['field_debrief_reputation_finale']['table'] = 'field_data_field_debrief_reputation_finale';
  $handler->display->display_options['fields']['field_debrief_reputation_finale']['field'] = 'field_debrief_reputation_finale';
  $handler->display->display_options['fields']['field_debrief_reputation_finale']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_debrief_reputation_finale']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Profil: Anecdote, meilleurs moments, fou rires, racontez ce que nous n'avons pas pu voir/vivre ! */
  $handler->display->display_options['fields']['field_debrief_anecdotes']['id'] = 'field_debrief_anecdotes';
  $handler->display->display_options['fields']['field_debrief_anecdotes']['table'] = 'field_data_field_debrief_anecdotes';
  $handler->display->display_options['fields']['field_debrief_anecdotes']['field'] = 'field_debrief_anecdotes';
  $handler->display->display_options['fields']['field_debrief_anecdotes']['relationship'] = 'profile_1';
  /* Field: Profil: Souhaiteriez-vous participer à un nouvel opus ? */
  $handler->display->display_options['fields']['field_debrief_suite']['id'] = 'field_debrief_suite';
  $handler->display->display_options['fields']['field_debrief_suite']['table'] = 'field_data_field_debrief_suite';
  $handler->display->display_options['fields']['field_debrief_suite']['field'] = 'field_debrief_suite';
  $handler->display->display_options['fields']['field_debrief_suite']['relationship'] = 'profile_1';
  /* Field: Profil: Souhaiteriez-vous conserver votre personnage ? */
  $handler->display->display_options['fields']['field_debrief_suite_perso']['id'] = 'field_debrief_suite_perso';
  $handler->display->display_options['fields']['field_debrief_suite_perso']['table'] = 'field_data_field_debrief_suite_perso';
  $handler->display->display_options['fields']['field_debrief_suite_perso']['field'] = 'field_debrief_suite_perso';
  $handler->display->display_options['fields']['field_debrief_suite_perso']['relationship'] = 'profile_1';
  /* Field: Profil: Que voudrait faire votre personnage à présent ? */
  $handler->display->display_options['fields']['field_debrief_evolution']['id'] = 'field_debrief_evolution';
  $handler->display->display_options['fields']['field_debrief_evolution']['table'] = 'field_data_field_debrief_evolution';
  $handler->display->display_options['fields']['field_debrief_evolution']['field'] = 'field_debrief_evolution';
  $handler->display->display_options['fields']['field_debrief_evolution']['relationship'] = 'profile_1';
  /* Field: Profil: Accord / contrat principal */
  $handler->display->display_options['fields']['field_debrief_contrat_principal']['id'] = 'field_debrief_contrat_principal';
  $handler->display->display_options['fields']['field_debrief_contrat_principal']['table'] = 'field_data_field_debrief_contrat_principal';
  $handler->display->display_options['fields']['field_debrief_contrat_principal']['field'] = 'field_debrief_contrat_principal';
  $handler->display->display_options['fields']['field_debrief_contrat_principal']['relationship'] = 'profile_1';
  /* Field: Profil: Accord / contrat secondaire */
  $handler->display->display_options['fields']['field_debrie_contrat_secondaire']['id'] = 'field_debrie_contrat_secondaire';
  $handler->display->display_options['fields']['field_debrie_contrat_secondaire']['table'] = 'field_data_field_debrie_contrat_secondaire';
  $handler->display->display_options['fields']['field_debrie_contrat_secondaire']['field'] = 'field_debrie_contrat_secondaire';
  $handler->display->display_options['fields']['field_debrie_contrat_secondaire']['relationship'] = 'profile_1';
  /* Field: Profil: Autres accords / contrats */
  $handler->display->display_options['fields']['field_debrief_contrat_autre']['id'] = 'field_debrief_contrat_autre';
  $handler->display->display_options['fields']['field_debrief_contrat_autre']['table'] = 'field_data_field_debrief_contrat_autre';
  $handler->display->display_options['fields']['field_debrief_contrat_autre']['field'] = 'field_debrief_contrat_autre';
  $handler->display->display_options['fields']['field_debrief_contrat_autre']['relationship'] = 'profile_1';
  /* Field: Profil: A quels événements avez-vous participé ? */
  $handler->display->display_options['fields']['field_debrief_evenements']['id'] = 'field_debrief_evenements';
  $handler->display->display_options['fields']['field_debrief_evenements']['table'] = 'field_data_field_debrief_evenements';
  $handler->display->display_options['fields']['field_debrief_evenements']['field'] = 'field_debrief_evenements';
  $handler->display->display_options['fields']['field_debrief_evenements']['relationship'] = 'profile_1';
  /* Field: Profil: Qu'avez-vous acquis ? */
  $handler->display->display_options['fields']['field_debrief_acquisition_1']['id'] = 'field_debrief_acquisition_1';
  $handler->display->display_options['fields']['field_debrief_acquisition_1']['table'] = 'field_data_field_debrief_acquisition';
  $handler->display->display_options['fields']['field_debrief_acquisition_1']['field'] = 'field_debrief_acquisition';
  $handler->display->display_options['fields']['field_debrief_acquisition_1']['relationship'] = 'profile_1';
  $handler->display->display_options['path'] = 'admin/cec/debrief/export/texte';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['return_path'] = 'admin/cec/debrief/export';
  $handler->display->display_options['segment_size'] = '10';
  $translatables['admin_debrief'] = array(
    t('Master'),
    t('Debriefs'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Joueur'),
    t('Sondage'),
    t('Debrief'),
    t('Personnage'),
    t('<a href="/profile-debrief_texte/[field_incarnate]">Lire</a>'),
    t('-Vide-'),
    t('Vide'),
    t('<em>NSPP</em>'),
    t('Votre sentiment général sur le GN'),
    t('[label_1]'),
    t('Votre personnage et son histoire'),
    t('Vos objectifs'),
    t('Le scénario global'),
    t('Les intrigues liées à votre personnage'),
    t('Le cadre'),
    t('La logistique'),
    t('Les repas'),
    t('L\'ambiance '),
    t('L\'immersion'),
    t('La facilité à entrer dans le jeu'),
    t('L\'univers, le monde'),
    t('Le réalisme, la cohérence'),
    t('Les règles de santé'),
    t('Les règles de brette'),
    t('Les règles de réputation'),
    t('Les règles de pugilat'),
    t('Page'),
    t('more'),
    t('Fichier attaché'),
    t('Moyennes'),
    t('Sondages (export)'),
    t('Debriefs (export)'),
    t('Ce que vous avez préféré'),
    t('Ce que vous n\'avez pas aimé'),
    t('Ce que vous avez pensé de votre personnage, son histoire, ses objectifs'),
    t('Ce que vous avez pensé du scénario, des intrigues'),
    t('Ce que vous avez pensé du cadre, des hors jeu, de la logistique, des repas'),
    t('Ce que vous avez pensé de l\'ambiance, l\'immersion, la facilité à entrer dans le jeu'),
    t('Ce que vous avez pensé de l\'univers, du monde, du réalisme'),
    t('Avez-vous appris des bottes ?'),
    t('Lesquelles et comment ?'),
    t('Avez-vous été entre la vie et la mort ?'),
    t('Avez-vous eu peur de mourir ?'),
    t('Avez-vous été "impressionnés" ? "Déçus" ? A quelle occasion ?'),
    t('Combien de points de réputation aviez-vous environ en fin de GN ?'),
    t('Anecdote, meilleurs moments, fou rires, racontez ce que nous n\'avons pas pu voir/vivre !'),
    t('Souhaiteriez-vous participer à un nouvel opus ?'),
    t('Souhaiteriez-vous conserver votre personnage ?'),
    t('Que voudrait faire votre personnage à présent ?'),
    t('Accord / contrat principal'),
    t('Accord / contrat secondaire'),
    t('Autres accords / contrats'),
    t('A quels événements avez-vous participé ?'),
    t('Qu\'avez-vous acquis ?'),
  );
  $export['admin_debrief'] = $view;

  return $export;
}
