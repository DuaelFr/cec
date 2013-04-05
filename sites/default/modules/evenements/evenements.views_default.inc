<?php
/**
 * @file
 * evenements.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function evenements_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_evenements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin Evenements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Timeline';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    168020977 => '168020977',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 'state-[sid_1]';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_event_type' => 'field_event_type',
    'field_dates' => 'field_dates',
    'field_dates_1' => 'field_dates_1',
    'item_id' => 'item_id',
    'sid' => 'sid',
    'edit_node' => 'edit_node',
    'sid_1' => 'sid_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Comportement en l'absence de résultats: Global : Zone de texte */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Vide';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Aucun évènement pour le moment.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relation: Contenu : Interprétation (field_version) */
  $handler->display->display_options['relationships']['field_version_value']['id'] = 'field_version_value';
  $handler->display->display_options['relationships']['field_version_value']['table'] = 'field_data_field_version';
  $handler->display->display_options['relationships']['field_version_value']['field'] = 'field_version_value';
  $handler->display->display_options['relationships']['field_version_value']['label'] = 'Interprétation';
  $handler->display->display_options['relationships']['field_version_value']['delta'] = '-1';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Type d'évènement */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Contenu : Horaires */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = 'Date de début';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Horaires */
  $handler->display->display_options['fields']['field_dates_1']['id'] = 'field_dates_1';
  $handler->display->display_options['fields']['field_dates_1']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates_1']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates_1']['label'] = 'Date de fin';
  $handler->display->display_options['fields']['field_dates_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_dates_1']['group_column'] = 'value2';
  /* Champ: Contenu : Intrigue */
  $handler->display->display_options['fields']['field_intrigue']['id'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['field'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['label'] = 'Intrigues';
  $handler->display->display_options['fields']['field_intrigue']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_intrigue']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_intrigue']['delta_offset'] = '0';
  /* Champ: COUNT(DISTINCT Field collection item : Identifiant de Field collection item) */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['relationship'] = 'field_version_value';
  $handler->display->display_options['fields']['item_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['item_id']['label'] = 'Interprétations';
  /* Champ: Processus : Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Champ: Contenu : Lien de modification */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['text'] = 'modifier';
  /* Champ: Etat CSS */
  $handler->display->display_options['fields']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['fields']['sid_1']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid_1']['field'] = 'sid';
  $handler->display->display_options['fields']['sid_1']['ui_name'] = 'Etat CSS';
  $handler->display->display_options['fields']['sid_1']['label'] = '';
  $handler->display->display_options['fields']['sid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sid_1']['transliterate'] = TRUE;
  /* Critère de tri: Contenu : Horaires - date de début (field_dates) */
  $handler->display->display_options['sorts']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['sorts']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value']['field'] = 'field_dates_value';
  /* Critère de tri: Contenu : Horaires - date de fin (field_dates:value2) */
  $handler->display->display_options['sorts']['field_dates_value2']['id'] = 'field_dates_value2';
  $handler->display->display_options['sorts']['field_dates_value2']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value2']['field'] = 'field_dates_value2';
  /* Critère de tri: Contenu : Interprétation (field_version:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_version';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Titre */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titre';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    125268670 => 0,
    203293079 => 0,
    247050890 => 0,
    66570830 => 0,
    32775451 => 0,
    199742668 => 0,
    168020977 => 0,
  );
  /* Critère de filtrage: Contenu : Type d&#039;évènement (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator_id'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['label'] = 'Type d\'évènement';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['identifier'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    125268670 => 0,
    203293079 => 0,
    247050890 => 0,
    66570830 => 0,
    32775451 => 0,
    199742668 => 0,
    168020977 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['hierarchy'] = 1;
  /* Critère de filtrage: Contenu : Horaires - date de début (field_dates) */
  $handler->display->display_options['filters']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['filters']['field_dates_value']['field'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dates_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dates_value']['expose']['operator_id'] = 'field_dates_value_op';
  $handler->display->display_options['filters']['field_dates_value']['expose']['label'] = 'A partir du';
  $handler->display->display_options['filters']['field_dates_value']['expose']['operator'] = 'field_dates_value_op';
  $handler->display->display_options['filters']['field_dates_value']['expose']['identifier'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_dates_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    125268670 => 0,
    203293079 => 0,
    247050890 => 0,
    66570830 => 0,
    32775451 => 0,
    199742668 => 0,
    168020977 => 0,
  );
  $handler->display->display_options['filters']['field_dates_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_dates_value']['year_range'] = '1600:1650';
  /* Critère de filtrage: Contenu : Horaires - date de fin (field_dates:value2) */
  $handler->display->display_options['filters']['field_dates_value2']['id'] = 'field_dates_value2';
  $handler->display->display_options['filters']['field_dates_value2']['table'] = 'field_data_field_dates';
  $handler->display->display_options['filters']['field_dates_value2']['field'] = 'field_dates_value2';
  $handler->display->display_options['filters']['field_dates_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_dates_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_dates_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dates_value2']['expose']['operator_id'] = 'field_dates_value2_op';
  $handler->display->display_options['filters']['field_dates_value2']['expose']['label'] = 'Jusqu\'au';
  $handler->display->display_options['filters']['field_dates_value2']['expose']['operator'] = 'field_dates_value2_op';
  $handler->display->display_options['filters']['field_dates_value2']['expose']['identifier'] = 'field_dates_value2';
  $handler->display->display_options['filters']['field_dates_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    125268670 => 0,
    203293079 => 0,
    247050890 => 0,
    66570830 => 0,
    32775451 => 0,
    199742668 => 0,
    168020977 => 0,
  );
  $handler->display->display_options['filters']['field_dates_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_dates_value2']['year_range'] = '1600:1650';
  /* Critère de filtrage: Contenu : Intrigue (field_intrigue) */
  $handler->display->display_options['filters']['field_intrigue_target_id']['id'] = 'field_intrigue_target_id';
  $handler->display->display_options['filters']['field_intrigue_target_id']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['filters']['field_intrigue_target_id']['field'] = 'field_intrigue_target_id';
  $handler->display->display_options['filters']['field_intrigue_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_intrigue_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_intrigue_target_id']['expose']['operator_id'] = 'field_intrigue_target_id_op';
  $handler->display->display_options['filters']['field_intrigue_target_id']['expose']['label'] = 'Intrigue';
  $handler->display->display_options['filters']['field_intrigue_target_id']['expose']['operator'] = 'field_intrigue_target_id_op';
  $handler->display->display_options['filters']['field_intrigue_target_id']['expose']['identifier'] = 'field_intrigue_target_id';
  $handler->display->display_options['filters']['field_intrigue_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    125268670 => 0,
    203293079 => 0,
    247050890 => 0,
    66570830 => 0,
    32775451 => 0,
    199742668 => 0,
    168020977 => 0,
    149933350 => 0,
  );
  /* Critère de filtrage: Processus : Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'État actuel';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    125268670 => 0,
    203293079 => 0,
    247050890 => 0,
    66570830 => 0,
    32775451 => 0,
    199742668 => 0,
    168020977 => 0,
  );

  /* Display: Tous les évènements (Page) */
  $handler = $view->new_display('page', 'Tous les évènements (Page)', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Horaires - date de début (field_dates) */
  $handler->display->display_options['sorts']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['sorts']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value']['field'] = 'field_dates_value';
  /* Critère de tri: Contenu : Horaires - date de fin (field_dates:value2) */
  $handler->display->display_options['sorts']['field_dates_value2']['id'] = 'field_dates_value2';
  $handler->display->display_options['sorts']['field_dates_value2']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value2']['field'] = 'field_dates_value2';
  $handler->display->display_options['path'] = 'admin/cec/evenements';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Liste des Evènements';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Tous les évènements inverse (Page) */
  $handler = $view->new_display('page', 'Tous les évènements inverse (Page)', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Horaires - date de début (field_dates) */
  $handler->display->display_options['sorts']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['sorts']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value']['field'] = 'field_dates_value';
  $handler->display->display_options['sorts']['field_dates_value']['order'] = 'DESC';
  /* Critère de tri: Contenu : Horaires - date de fin (field_dates:value2) */
  $handler->display->display_options['sorts']['field_dates_value2']['id'] = 'field_dates_value2';
  $handler->display->display_options['sorts']['field_dates_value2']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value2']['field'] = 'field_dates_value2';
  $handler->display->display_options['sorts']['field_dates_value2']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'admin/cec/evenements-reverse';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Liste des Evènements inversée';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Par intrigue (Bloc) */
  $handler = $view->new_display('block', 'Par intrigue (Bloc)', 'block_by_intrigue');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Type d'évènement */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Contenu : Horaires */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = 'Date de début';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Horaires */
  $handler->display->display_options['fields']['field_dates_1']['id'] = 'field_dates_1';
  $handler->display->display_options['fields']['field_dates_1']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates_1']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates_1']['label'] = 'Date de fin';
  $handler->display->display_options['fields']['field_dates_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_dates_1']['group_column'] = 'value2';
  /* Champ: COUNT(DISTINCT Field collection item : Identifiant de Field collection item) */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['relationship'] = 'field_version_value';
  $handler->display->display_options['fields']['item_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['item_id']['label'] = 'Interprétations';
  /* Champ: Processus : Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Champ: Contenu : Lien de modification */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['text'] = 'modifier';
  /* Champ: Etat CSS */
  $handler->display->display_options['fields']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['fields']['sid_1']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid_1']['field'] = 'sid';
  $handler->display->display_options['fields']['sid_1']['ui_name'] = 'Etat CSS';
  $handler->display->display_options['fields']['sid_1']['label'] = '';
  $handler->display->display_options['fields']['sid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sid_1']['transliterate'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Intrigue (field_intrigue) */
  $handler->display->display_options['arguments']['field_intrigue_target_id']['id'] = 'field_intrigue_target_id';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['field'] = 'field_intrigue_target_id';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_intrigue_target_id']['title'] = 'Timeline %1';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_intrigue_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['validate_options']['types'] = array(
    'intrigue' => 'intrigue',
  );
  $handler->display->display_options['arguments']['field_intrigue_target_id']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['field_intrigue_target_id']['validate_options']['access_op'] = 'update';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Par intrigue (Page) */
  $handler = $view->new_display('page', 'Par intrigue (Page)', 'page_by_intrigue');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Type d'évènement */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['empty'] = '- Aucun -';
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Contenu : Horaires */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = 'Date de début';
  $handler->display->display_options['fields']['field_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Horaires */
  $handler->display->display_options['fields']['field_dates_1']['id'] = 'field_dates_1';
  $handler->display->display_options['fields']['field_dates_1']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates_1']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates_1']['label'] = 'Date de fin';
  $handler->display->display_options['fields']['field_dates_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dates_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_dates_1']['group_column'] = 'value2';
  /* Champ: Contenu : Intrigue */
  $handler->display->display_options['fields']['field_intrigue']['id'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['field'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intrigue']['settings'] = array(
    'link' => 0,
  );
  /* Champ: Processus : Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  /* Champ: Champs organisés */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Champs organisés';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="cec-columns">
  <div class="cec-column">
Type : [field_event_type]<br />
Intrigue : [field_intrigue]<br />
Etat : [sid]
  </div>
  <div class="cec-column">
Date de début : [field_dates]<br />
Date de fin : [field_dates_1]
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Intrigue (field_intrigue) */
  $handler->display->display_options['arguments']['field_intrigue_target_id']['id'] = 'field_intrigue_target_id';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['field'] = 'field_intrigue_target_id';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_intrigue_target_id']['title'] = 'Timeline %1';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_intrigue_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['validate_options']['types'] = array(
    'intrigue' => 'intrigue',
  );
  $handler->display->display_options['arguments']['field_intrigue_target_id']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['field_intrigue_target_id']['validate_options']['access_op'] = 'update';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/cec/evenements/intrigue/%';
  $handler->display->display_options['menu']['title'] = 'Liste des Evènements';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Par personnage (Page) */
  $handler = $view->new_display('page', 'Par personnage (Page)', 'page_by_character');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Contenu : Interprétation (field_version) */
  $handler->display->display_options['relationships']['field_version_value']['id'] = 'field_version_value';
  $handler->display->display_options['relationships']['field_version_value']['table'] = 'field_data_field_version';
  $handler->display->display_options['relationships']['field_version_value']['field'] = 'field_version_value';
  $handler->display->display_options['relationships']['field_version_value']['label'] = 'Interprétation';
  $handler->display->display_options['relationships']['field_version_value']['delta'] = '-1';
  /* Relation: Entity Reference : Referenced Entity */
  $handler->display->display_options['relationships']['field_target_target_id']['id'] = 'field_target_target_id';
  $handler->display->display_options['relationships']['field_target_target_id']['table'] = 'field_data_field_target';
  $handler->display->display_options['relationships']['field_target_target_id']['field'] = 'field_target_target_id';
  $handler->display->display_options['relationships']['field_target_target_id']['relationship'] = 'field_version_value';
  $handler->display->display_options['relationships']['field_target_target_id']['label'] = 'Cible';
  /* Relation: Contenu : Membres (field_group_members) */
  $handler->display->display_options['relationships']['field_group_members_value']['id'] = 'field_group_members_value';
  $handler->display->display_options['relationships']['field_group_members_value']['table'] = 'field_data_field_group_members';
  $handler->display->display_options['relationships']['field_group_members_value']['field'] = 'field_group_members_value';
  $handler->display->display_options['relationships']['field_group_members_value']['relationship'] = 'field_target_target_id';
  $handler->display->display_options['relationships']['field_group_members_value']['label'] = 'Membres';
  $handler->display->display_options['relationships']['field_group_members_value']['delta'] = '-1';
  /* Relation: Entity Reference : Referenced Entity */
  $handler->display->display_options['relationships']['field_character_target_id']['id'] = 'field_character_target_id';
  $handler->display->display_options['relationships']['field_character_target_id']['table'] = 'field_data_field_character';
  $handler->display->display_options['relationships']['field_character_target_id']['field'] = 'field_character_target_id';
  $handler->display->display_options['relationships']['field_character_target_id']['relationship'] = 'field_group_members_value';
  $handler->display->display_options['relationships']['field_character_target_id']['label'] = 'Personnage';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Champ : Intitulé orga */
  $handler->display->display_options['fields']['field_alternate_title']['id'] = 'field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['table'] = 'field_data_field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['field'] = 'field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['relationship'] = 'field_version_value';
  $handler->display->display_options['fields']['field_alternate_title']['label'] = 'Intitulé interprétation';
  $handler->display->display_options['fields']['field_alternate_title']['element_type'] = 'h2';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Type d'évènement */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['empty'] = '- Aucun -';
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Contenu : Horaires */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = 'Date de début';
  $handler->display->display_options['fields']['field_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Horaires */
  $handler->display->display_options['fields']['field_dates_1']['id'] = 'field_dates_1';
  $handler->display->display_options['fields']['field_dates_1']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates_1']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates_1']['label'] = 'Date de fin';
  $handler->display->display_options['fields']['field_dates_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dates_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_dates_1']['group_column'] = 'value2';
  /* Champ: Contenu : Intrigue */
  $handler->display->display_options['fields']['field_intrigue']['id'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['field'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intrigue']['settings'] = array(
    'link' => 0,
  );
  /* Champ: Processus : Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  /* Champ: Field collection item : Cible Interprétation */
  $handler->display->display_options['fields']['field_target']['id'] = 'field_target';
  $handler->display->display_options['fields']['field_target']['table'] = 'field_data_field_target';
  $handler->display->display_options['fields']['field_target']['field'] = 'field_target';
  $handler->display->display_options['fields']['field_target']['relationship'] = 'field_version_value';
  $handler->display->display_options['fields']['field_target']['label'] = '';
  $handler->display->display_options['fields']['field_target']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target']['settings'] = array(
    'link' => 1,
  );
  /* Champ: Champs organisés */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Champs organisés';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="cec-columns">
  <div class="cec-column">
Type : [field_event_type]<br />
Intrigue : [field_intrigue]<br />
Etat : [sid]
  </div>
  <div class="cec-column">
Date de début : [field_dates]<br />
Date de fin : [field_dates_1]<br />
Intitulé zorga : [title]<br />
Cible : [field_target]
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Champ: Champ : Descriptif orga */
  $handler->display->display_options['fields']['field_alternate_body']['id'] = 'field_alternate_body';
  $handler->display->display_options['fields']['field_alternate_body']['table'] = 'field_data_field_alternate_body';
  $handler->display->display_options['fields']['field_alternate_body']['field'] = 'field_alternate_body';
  $handler->display->display_options['fields']['field_alternate_body']['relationship'] = 'field_version_value';
  $handler->display->display_options['fields']['field_alternate_body']['label'] = '';
  $handler->display->display_options['fields']['field_alternate_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Global : Vide */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['null']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['null']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['null']['title'] = 'Timeline %1';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['null']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['null']['validate_options']['types'] = array(
    'character' => 'character',
  );
  $handler->display->display_options['arguments']['null']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'node';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['relationship'] = 'field_target_target_id';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'character' => 'character',
  );
  $handler->display->display_options['filters']['type_2']['group'] = 1;
  /* Critère de filtrage: Contenu : Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'field_target_target_id';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  $handler->display->display_options['filters']['nid']['pull_value'] = TRUE;
  $handler->display->display_options['filters']['nid']['argument_value'] = array(
    'min' => '',
    'max' => '',
    'value' => 'null',
  );
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type_3']['id'] = 'type_3';
  $handler->display->display_options['filters']['type_3']['table'] = 'node';
  $handler->display->display_options['filters']['type_3']['field'] = 'type';
  $handler->display->display_options['filters']['type_3']['relationship'] = 'field_target_target_id';
  $handler->display->display_options['filters']['type_3']['value'] = array(
    'group' => 'group',
  );
  $handler->display->display_options['filters']['type_3']['group'] = 2;
  /* Critère de filtrage: Contenu : Nid */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['relationship'] = 'field_character_target_id';
  $handler->display->display_options['filters']['nid_1']['group'] = 2;
  $handler->display->display_options['filters']['nid_1']['pull_value'] = TRUE;
  $handler->display->display_options['filters']['nid_1']['argument_value'] = array(
    'min' => '',
    'max' => '',
    'value' => 'null',
  );
  $handler->display->display_options['path'] = 'admin/cec/evenements/personnage/%';
  $handler->display->display_options['menu']['title'] = 'Liste des Evènements';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Par personnage (Bloc) */
  $handler = $view->new_display('block', 'Par personnage (Bloc)', 'block_by_character');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Contenu : Interprétation (field_version) */
  $handler->display->display_options['relationships']['field_version_value']['id'] = 'field_version_value';
  $handler->display->display_options['relationships']['field_version_value']['table'] = 'field_data_field_version';
  $handler->display->display_options['relationships']['field_version_value']['field'] = 'field_version_value';
  $handler->display->display_options['relationships']['field_version_value']['label'] = 'Interprétation';
  $handler->display->display_options['relationships']['field_version_value']['delta'] = '-1';
  /* Relation: Entity Reference : Referenced Entity */
  $handler->display->display_options['relationships']['field_target_target_id']['id'] = 'field_target_target_id';
  $handler->display->display_options['relationships']['field_target_target_id']['table'] = 'field_data_field_target';
  $handler->display->display_options['relationships']['field_target_target_id']['field'] = 'field_target_target_id';
  $handler->display->display_options['relationships']['field_target_target_id']['relationship'] = 'field_version_value';
  $handler->display->display_options['relationships']['field_target_target_id']['label'] = 'Cible';
  /* Relation: Contenu : Membres (field_group_members) */
  $handler->display->display_options['relationships']['field_group_members_value']['id'] = 'field_group_members_value';
  $handler->display->display_options['relationships']['field_group_members_value']['table'] = 'field_data_field_group_members';
  $handler->display->display_options['relationships']['field_group_members_value']['field'] = 'field_group_members_value';
  $handler->display->display_options['relationships']['field_group_members_value']['relationship'] = 'field_target_target_id';
  $handler->display->display_options['relationships']['field_group_members_value']['label'] = 'Membres';
  $handler->display->display_options['relationships']['field_group_members_value']['delta'] = '-1';
  /* Relation: Entity Reference : Referenced Entity */
  $handler->display->display_options['relationships']['field_character_target_id']['id'] = 'field_character_target_id';
  $handler->display->display_options['relationships']['field_character_target_id']['table'] = 'field_data_field_character';
  $handler->display->display_options['relationships']['field_character_target_id']['field'] = 'field_character_target_id';
  $handler->display->display_options['relationships']['field_character_target_id']['relationship'] = 'field_group_members_value';
  $handler->display->display_options['relationships']['field_character_target_id']['label'] = 'Personnage';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_target_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Cible';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Type d'évènement */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Contenu : Horaires */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = 'Date de début';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Horaires */
  $handler->display->display_options['fields']['field_dates_1']['id'] = 'field_dates_1';
  $handler->display->display_options['fields']['field_dates_1']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates_1']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates_1']['label'] = 'Date de fin';
  $handler->display->display_options['fields']['field_dates_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_dates_1']['group_column'] = 'value2';
  /* Champ: Processus : Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Champ: Contenu : Lien de modification */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['text'] = 'modifier';
  /* Champ: Etat CSS */
  $handler->display->display_options['fields']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['fields']['sid_1']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid_1']['field'] = 'sid';
  $handler->display->display_options['fields']['sid_1']['ui_name'] = 'Etat CSS';
  $handler->display->display_options['fields']['sid_1']['label'] = '';
  $handler->display->display_options['fields']['sid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sid_1']['transliterate'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Global : Vide */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['null']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['null']['title'] = 'Timeline %1';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['null']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['null']['validate_options']['types'] = array(
    'character' => 'character',
  );
  $handler->display->display_options['arguments']['null']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_target_target_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'group' => 'group',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Critère de filtrage: Contenu : Nid */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['relationship'] = 'field_character_target_id';
  $handler->display->display_options['filters']['nid_1']['group'] = 1;
  $handler->display->display_options['filters']['nid_1']['pull_value'] = TRUE;
  $handler->display->display_options['filters']['nid_1']['argument_value'] = array(
    'min' => '',
    'max' => '',
    'value' => 'null',
  );
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type_3']['id'] = 'type_3';
  $handler->display->display_options['filters']['type_3']['table'] = 'node';
  $handler->display->display_options['filters']['type_3']['field'] = 'type';
  $handler->display->display_options['filters']['type_3']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type_3']['group'] = 2;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'node';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['relationship'] = 'field_target_target_id';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'character' => 'character',
  );
  $handler->display->display_options['filters']['type_2']['group'] = 2;
  /* Critère de filtrage: Contenu : Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'field_target_target_id';
  $handler->display->display_options['filters']['nid']['group'] = 2;
  $handler->display->display_options['filters']['nid']['pull_value'] = TRUE;
  $handler->display->display_options['filters']['nid']['argument_value'] = array(
    'min' => '',
    'max' => '',
    'value' => 'null',
  );
  $translatables['admin_evenements'] = array(
    t('Master'),
    t('Timeline'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Vide'),
    t('Aucun évènement pour le moment.'),
    t('Interprétation'),
    t('Titre'),
    t('Type d\'évènement'),
    t('Date de début'),
    t('Date de fin'),
    t('Intrigues'),
    t('Interprétations'),
    t('.'),
    t(','),
    t('Current state'),
    t('Actions'),
    t('modifier'),
    t('A partir du'),
    t('Jusqu\'au'),
    t('Intrigue'),
    t('État actuel'),
    t('Tous les évènements (Page)'),
    t('Tous les évènements inverse (Page)'),
    t('Par intrigue (Bloc)'),
    t('Tout'),
    t('Timeline %1'),
    t('Par intrigue (Page)'),
    t('- Aucun -'),
    t('<div class="cec-columns">
  <div class="cec-column">
Type : [field_event_type]<br />
Intrigue : [field_intrigue]<br />
Etat : [sid]
  </div>
  <div class="cec-column">
Date de début : [field_dates]<br />
Date de fin : [field_dates_1]
  </div>
</div>'),
    t('Par personnage (Page)'),
    t('Cible'),
    t('Membres'),
    t('Personnage'),
    t('Intitulé interprétation'),
    t('<div class="cec-columns">
  <div class="cec-column">
Type : [field_event_type]<br />
Intrigue : [field_intrigue]<br />
Etat : [sid]
  </div>
  <div class="cec-column">
Date de début : [field_dates]<br />
Date de fin : [field_dates_1]<br />
Intitulé zorga : [title]<br />
Cible : [field_target]
  </div>
</div>'),
    t('Par personnage (Bloc)'),
  );
  $export['admin_evenements'] = $view;

  return $export;
}
