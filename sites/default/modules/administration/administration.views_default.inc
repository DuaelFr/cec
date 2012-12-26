<?php
/**
 * @file
 * administration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function administration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_avantages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin Avantages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Les Avantages';
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
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_alternate_title' => 'field_alternate_title',
    'field_avantage_type' => 'field_avantage_type',
    'field_value' => 'field_value',
    'title' => 'title',
    'field_alternate_body' => 'field_alternate_body',
    'item_id' => 'item_id',
    'sid' => 'sid',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_alternate_title';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_alternate_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_avantage_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_value' => array(
      'sortable' => 1,
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
    'field_alternate_body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'item_id' => array(
      'sortable' => 1,
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
  );
  /* Relation: Entity Reference : Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_avantage_field_collection_item']['id'] = 'reverse_field_avantage_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_avantage_field_collection_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_avantage_field_collection_item']['field'] = 'reverse_field_avantage_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_avantage_field_collection_item']['label'] = 'Personnage';
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Champ : Intitulé orga */
  $handler->display->display_options['fields']['field_alternate_title']['id'] = 'field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['table'] = 'field_data_field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['field'] = 'field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_alternate_title']['alter']['path'] = '[path]';
  /* Champ: Contenu : Type d'avantage */
  $handler->display->display_options['fields']['field_avantage_type']['id'] = 'field_avantage_type';
  $handler->display->display_options['fields']['field_avantage_type']['table'] = 'field_data_field_avantage_type';
  $handler->display->display_options['fields']['field_avantage_type']['field'] = 'field_avantage_type';
  $handler->display->display_options['fields']['field_avantage_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_avantage_type']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Contenu : Valeur */
  $handler->display->display_options['fields']['field_value']['id'] = 'field_value';
  $handler->display->display_options['fields']['field_value']['table'] = 'field_data_field_value';
  $handler->display->display_options['fields']['field_value']['field'] = 'field_value';
  $handler->display->display_options['fields']['field_value']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nom joueurs';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Champ : Descriptif orga */
  $handler->display->display_options['fields']['field_alternate_body']['id'] = 'field_alternate_body';
  $handler->display->display_options['fields']['field_alternate_body']['table'] = 'field_data_field_alternate_body';
  $handler->display->display_options['fields']['field_alternate_body']['field'] = 'field_alternate_body';
  /* Champ: COUNT(DISTINCT Field collection item : Identifiant de Field collection item) */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['relationship'] = 'reverse_field_avantage_field_collection_item';
  $handler->display->display_options['fields']['item_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['item_id']['label'] = 'Personnages';
  /* Champ: Processus : Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Etat actuel';
  /* Champ: Contenu : Lien de modification */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['text'] = 'modifier';
  /* Critère de tri: Champ : Intitulé orga (field_alternate_title) */
  $handler->display->display_options['sorts']['field_alternate_title_value']['id'] = 'field_alternate_title_value';
  $handler->display->display_options['sorts']['field_alternate_title_value']['table'] = 'field_data_field_alternate_title';
  $handler->display->display_options['sorts']['field_alternate_title_value']['field'] = 'field_alternate_title_value';
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'avantage' => 'avantage',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Champ : Intitulé orga (field_alternate_title) */
  $handler->display->display_options['filters']['field_alternate_title_value']['id'] = 'field_alternate_title_value';
  $handler->display->display_options['filters']['field_alternate_title_value']['table'] = 'field_data_field_alternate_title';
  $handler->display->display_options['filters']['field_alternate_title_value']['field'] = 'field_alternate_title_value';
  $handler->display->display_options['filters']['field_alternate_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_alternate_title_value']['group'] = 1;
  $handler->display->display_options['filters']['field_alternate_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_alternate_title_value']['expose']['operator_id'] = 'field_alternate_title_value_op';
  $handler->display->display_options['filters']['field_alternate_title_value']['expose']['label'] = 'Intitulé orga';
  $handler->display->display_options['filters']['field_alternate_title_value']['expose']['operator'] = 'field_alternate_title_value_op';
  $handler->display->display_options['filters']['field_alternate_title_value']['expose']['identifier'] = 'field_alternate_title_value';
  $handler->display->display_options['filters']['field_alternate_title_value']['expose']['remember_roles'] = array(
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
  /* Critère de filtrage: Contenu : Type d&#039;avantage (field_avantage_type) */
  $handler->display->display_options['filters']['field_avantage_type_tid']['id'] = 'field_avantage_type_tid';
  $handler->display->display_options['filters']['field_avantage_type_tid']['table'] = 'field_data_field_avantage_type';
  $handler->display->display_options['filters']['field_avantage_type_tid']['field'] = 'field_avantage_type_tid';
  $handler->display->display_options['filters']['field_avantage_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_avantage_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_avantage_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_avantage_type_tid']['expose']['operator_id'] = 'field_avantage_type_tid_op';
  $handler->display->display_options['filters']['field_avantage_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_avantage_type_tid']['expose']['operator'] = 'field_avantage_type_tid_op';
  $handler->display->display_options['filters']['field_avantage_type_tid']['expose']['identifier'] = 'field_avantage_type_tid';
  $handler->display->display_options['filters']['field_avantage_type_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_avantage_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_avantage_type_tid']['vocabulary'] = 'avantage_type';
  $handler->display->display_options['filters']['field_avantage_type_tid']['hierarchy'] = 1;
  /* Critère de filtrage: Contenu : Valeur (field_value) */
  $handler->display->display_options['filters']['field_value_value']['id'] = 'field_value_value';
  $handler->display->display_options['filters']['field_value_value']['table'] = 'field_data_field_value';
  $handler->display->display_options['filters']['field_value_value']['field'] = 'field_value_value';
  $handler->display->display_options['filters']['field_value_value']['group'] = 1;
  $handler->display->display_options['filters']['field_value_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_value_value']['expose']['operator_id'] = 'field_value_value_op';
  $handler->display->display_options['filters']['field_value_value']['expose']['label'] = 'Valeur';
  $handler->display->display_options['filters']['field_value_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_value_value']['expose']['operator'] = 'field_value_value_op';
  $handler->display->display_options['filters']['field_value_value']['expose']['identifier'] = 'field_value_value';
  $handler->display->display_options['filters']['field_value_value']['expose']['remember_roles'] = array(
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
  /* Critère de filtrage: Contenu : Titre */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Nom joueurs';
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
  /* Critère de filtrage: Processus : Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Etat actuel';
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

  /* Display: Tous les avantages (Page) */
  $handler = $view->new_display('page', 'Tous les avantages (Page)', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/cec/avantages';

  /* Display: Sélecteur (Référence) */
  $handler = $view->new_display('entityreference', 'Sélecteur (Référence)', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_alternate_title' => 'field_alternate_title',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = '';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Champ : Intitulé orga */
  $handler->display->display_options['fields']['field_alternate_title']['id'] = 'field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['table'] = 'field_data_field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['field'] = 'field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['label'] = '';
  $handler->display->display_options['fields']['field_alternate_title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_alternate_title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '([title])';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'avantage' => 'avantage',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['admin_avantages'] = array(
    t('Master'),
    t('Les Avantages'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Personnage'),
    t('Intitulé orga'),
    t('Type'),
    t('Valeur'),
    t('Nom joueurs'),
    t('Descriptif orga'),
    t('Personnages'),
    t('.'),
    t(','),
    t('Etat actuel'),
    t('Actions'),
    t('modifier'),
    t('Tous les avantages (Page)'),
    t('Sélecteur (Référence)'),
    t('([title])'),
  );
  $export['admin_avantages'] = $view;

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
  $handler->display->display_options['style_options']['columns'] = array(
    'field_dates_2' => 'field_dates_2',
    'title' => 'title',
    'field_dates' => 'field_dates',
    'field_dates_1' => 'field_dates_1',
    'field_intrigue' => 'field_intrigue',
    'sid' => 'sid',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_dates';
  $handler->display->display_options['style_options']['info'] = array(
    'field_dates_2' => array(
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
    'field_intrigue' => array(
      'sortable' => 1,
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
  );
  /* Relation: Entity Reference : Referenced Entity */
  $handler->display->display_options['relationships']['field_intrigue_target_id']['id'] = 'field_intrigue_target_id';
  $handler->display->display_options['relationships']['field_intrigue_target_id']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['relationships']['field_intrigue_target_id']['field'] = 'field_intrigue_target_id';
  $handler->display->display_options['relationships']['field_intrigue_target_id']['label'] = 'Intrigue';
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
  /* Champ: Contenu : Dates */
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
  /* Champ: Contenu : Dates */
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
  $handler->display->display_options['fields']['field_intrigue']['settings'] = array(
    'link' => 1,
  );
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
  $handler->display->display_options['filters']['title']['relationship'] = 'field_intrigue_target_id';
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
  /* Critère de filtrage: Contenu : Dates - date de début (field_dates) */
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
  /* Critère de filtrage: Contenu : Dates - date de fin (field_dates:value2) */
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
  $handler->display->display_options['path'] = 'admin/cec/evenements';
  $translatables['admin_evenements'] = array(
    t('Master'),
    t('Timeline'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Intrigue'),
    t('Interprétation'),
    t('Titre'),
    t('Type d\'évènement'),
    t('Date de début'),
    t('Date de fin'),
    t('Interprétations'),
    t('.'),
    t(','),
    t('Current state'),
    t('Actions'),
    t('modifier'),
    t('A partir du'),
    t('Jusqu\'au'),
    t('État actuel'),
    t('Tous les évènements (Page)'),
  );
  $export['admin_evenements'] = $view;

  $view = new view();
  $view->name = 'admin_global';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin Global';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'status' => 'status',
    'sid' => 'sid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
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
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
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
  );
  /* Relation: Contenu : Auteur */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Champ: Opérations en masse : Contenu */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Selection';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::cec_payment_bulk_declare_paid' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::workflow_select_given_state_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_select_next_state_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Auteur';
  /* Champ: Contenu : Publié */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Champ: Processus : Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Champ: Contenu : Date de publication */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Création';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Champ: Contenu : Date de mise à jour */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Mise à jour';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Champ: Contenu : Lien de modification */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['text'] = 'modifier';
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'avantage' => 'avantage',
    'event' => 'event',
    'group' => 'group',
    'information' => 'information',
    'intrigue' => 'intrigue',
    'character' => 'character',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
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
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'avantage' => 'avantage',
    'event' => 'event',
    'group' => 'group',
    'information' => 'information',
    'intrigue' => 'intrigue',
    'character' => 'character',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Publié';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/cec/global';
  $translatables['admin_global'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('auteur'),
    t('Selection'),
    t('Type'),
    t('Auteur'),
    t('Publié'),
    t('Current state'),
    t('Création'),
    t('Mise à jour'),
    t('Actions'),
    t('modifier'),
    t('Titre'),
    t('État actuel'),
    t('Page'),
  );
  $export['admin_global'] = $view;

  $view = new view();
  $view->name = 'admin_groupes';
  $view->description = '';
  $view->tag = 'admin';
  $view->base_table = 'node';
  $view->human_name = 'Admin Groupes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tous les Groupes';
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
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_alternate_title' => 'field_alternate_title',
    'field_alternate_body' => 'field_alternate_body',
    'field_character' => 'field_character',
    'field_group_is_technical' => 'field_group_is_technical',
    'sid' => 'sid',
  );
  $handler->display->display_options['style_options']['default'] = 'field_alternate_title';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_alternate_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_alternate_body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_character' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_group_is_technical' => array(
      'sortable' => 1,
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
  );
  /* Comportement en l'absence de résultats: Global : Zone de texte */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Vide';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Vous n\'appartenez à aucun groupe pour le moment.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relation: Contenu : Membres (field_group_members) */
  $handler->display->display_options['relationships']['field_group_members_value']['id'] = 'field_group_members_value';
  $handler->display->display_options['relationships']['field_group_members_value']['table'] = 'field_data_field_group_members';
  $handler->display->display_options['relationships']['field_group_members_value']['field'] = 'field_group_members_value';
  $handler->display->display_options['relationships']['field_group_members_value']['label'] = 'Membres';
  $handler->display->display_options['relationships']['field_group_members_value']['delta'] = '-1';
  /* Relation: Entity Reference : Referenced Entity */
  $handler->display->display_options['relationships']['field_character_target_id']['id'] = 'field_character_target_id';
  $handler->display->display_options['relationships']['field_character_target_id']['table'] = 'field_data_field_character';
  $handler->display->display_options['relationships']['field_character_target_id']['field'] = 'field_character_target_id';
  $handler->display->display_options['relationships']['field_character_target_id']['relationship'] = 'field_group_members_value';
  $handler->display->display_options['relationships']['field_character_target_id']['label'] = 'Personnage';
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Champ: Champ : Intitulé orga */
  $handler->display->display_options['fields']['field_alternate_title']['id'] = 'field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['table'] = 'field_data_field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['field'] = 'field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_alternate_title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_alternate_title']['alter']['absolute'] = TRUE;
  /* Champ: Contenu : Type de groupe */
  $handler->display->display_options['fields']['field_group_type']['id'] = 'field_group_type';
  $handler->display->display_options['fields']['field_group_type']['table'] = 'field_data_field_group_type';
  $handler->display->display_options['fields']['field_group_type']['field'] = 'field_group_type';
  $handler->display->display_options['fields']['field_group_type']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Champ : Descriptif orga */
  $handler->display->display_options['fields']['field_alternate_body']['id'] = 'field_alternate_body';
  $handler->display->display_options['fields']['field_alternate_body']['table'] = 'field_data_field_alternate_body';
  $handler->display->display_options['fields']['field_alternate_body']['field'] = 'field_alternate_body';
  $handler->display->display_options['fields']['field_alternate_body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_alternate_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_alternate_body']['type'] = 'text_plain';
  /* Champ: COUNT(DISTINCT Field collection item : Personnage) */
  $handler->display->display_options['fields']['field_character']['id'] = 'field_character';
  $handler->display->display_options['fields']['field_character']['table'] = 'field_data_field_character';
  $handler->display->display_options['fields']['field_character']['field'] = 'field_character';
  $handler->display->display_options['fields']['field_character']['relationship'] = 'field_group_members_value';
  $handler->display->display_options['fields']['field_character']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_character']['label'] = 'Personnages';
  $handler->display->display_options['fields']['field_character']['separator'] = ', ';
  /* Champ: Contenu : Groupe technique */
  $handler->display->display_options['fields']['field_group_is_technical']['id'] = 'field_group_is_technical';
  $handler->display->display_options['fields']['field_group_is_technical']['table'] = 'field_data_field_group_is_technical';
  $handler->display->display_options['fields']['field_group_is_technical']['field'] = 'field_group_is_technical';
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
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'group' => 'group',
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
  /* Critère de filtrage: Contenu : Type de groupe (field_group_type) */
  $handler->display->display_options['filters']['field_group_type_tid']['id'] = 'field_group_type_tid';
  $handler->display->display_options['filters']['field_group_type_tid']['table'] = 'field_data_field_group_type';
  $handler->display->display_options['filters']['field_group_type_tid']['field'] = 'field_group_type_tid';
  $handler->display->display_options['filters']['field_group_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_group_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_group_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_group_type_tid']['expose']['operator_id'] = 'field_group_type_tid_op';
  $handler->display->display_options['filters']['field_group_type_tid']['expose']['label'] = 'Type de groupe';
  $handler->display->display_options['filters']['field_group_type_tid']['expose']['operator'] = 'field_group_type_tid_op';
  $handler->display->display_options['filters']['field_group_type_tid']['expose']['identifier'] = 'field_group_type_tid';
  $handler->display->display_options['filters']['field_group_type_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_group_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_group_type_tid']['vocabulary'] = 'type_de_groupe';
  $handler->display->display_options['filters']['field_group_type_tid']['hierarchy'] = 1;
  /* Critère de filtrage: Contenu : Groupe technique (field_group_is_technical) */
  $handler->display->display_options['filters']['field_group_is_technical_value']['id'] = 'field_group_is_technical_value';
  $handler->display->display_options['filters']['field_group_is_technical_value']['table'] = 'field_data_field_group_is_technical';
  $handler->display->display_options['filters']['field_group_is_technical_value']['field'] = 'field_group_is_technical_value';
  $handler->display->display_options['filters']['field_group_is_technical_value']['group'] = 1;
  $handler->display->display_options['filters']['field_group_is_technical_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_group_is_technical_value']['expose']['operator_id'] = 'field_group_is_technical_value_op';
  $handler->display->display_options['filters']['field_group_is_technical_value']['expose']['label'] = 'Groupe technique';
  $handler->display->display_options['filters']['field_group_is_technical_value']['expose']['operator'] = 'field_group_is_technical_value_op';
  $handler->display->display_options['filters']['field_group_is_technical_value']['expose']['identifier'] = 'field_group_is_technical_value';
  $handler->display->display_options['filters']['field_group_is_technical_value']['expose']['remember_roles'] = array(
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
  /* Critère de filtrage: Processus : Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
  );
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
  $handler->display->display_options['filters']['sid']['expose']['reduce'] = TRUE;

  /* Display: Tous les groupes (Page) */
  $handler = $view->new_display('page', 'Tous les groupes (Page)', 'tous_groupes');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/cec/groupes';
  $translatables['admin_groupes'] = array(
    t('Master'),
    t('Tous les Groupes'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Vide'),
    t('Vous n\'appartenez à aucun groupe pour le moment.'),
    t('Membres'),
    t('Personnage'),
    t('Intitulé orga'),
    t('Type de groupe'),
    t('Descriptif orga'),
    t('Personnages'),
    t('Groupe technique'),
    t('Current state'),
    t('Actions'),
    t('modifier'),
    t('Titre'),
    t('État actuel'),
    t('Tous les groupes (Page)'),
  );
  $export['admin_groupes'] = $view;

  $view = new view();
  $view->name = 'admin_informations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin Informations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Toutes les Informations';
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
  $handler->display->display_options['style_options']['columns'] = array(
    'field_dates_2' => 'field_dates_2',
    'title' => 'title',
    'field_dates' => 'field_dates',
    'field_dates_1' => 'field_dates_1',
    'field_intrigue' => 'field_intrigue',
    'sid' => 'sid',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_dates';
  $handler->display->display_options['style_options']['info'] = array(
    'field_dates_2' => array(
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
    'field_intrigue' => array(
      'sortable' => 1,
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
  );
  /* Relation: Entity Reference : Referenced Entity */
  $handler->display->display_options['relationships']['field_intrigue_target_id']['id'] = 'field_intrigue_target_id';
  $handler->display->display_options['relationships']['field_intrigue_target_id']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['relationships']['field_intrigue_target_id']['field'] = 'field_intrigue_target_id';
  $handler->display->display_options['relationships']['field_intrigue_target_id']['label'] = 'Intrigue';
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
  /* Champ: Contenu : Type d'information */
  $handler->display->display_options['fields']['field_information_type']['id'] = 'field_information_type';
  $handler->display->display_options['fields']['field_information_type']['table'] = 'field_data_field_information_type';
  $handler->display->display_options['fields']['field_information_type']['field'] = 'field_information_type';
  $handler->display->display_options['fields']['field_information_type']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Contenu : Intrigue */
  $handler->display->display_options['fields']['field_intrigue']['id'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['field'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['settings'] = array(
    'link' => 1,
  );
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
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'information' => 'information',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Titre */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_intrigue_target_id';
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
  /* Critère de filtrage: Contenu : Type d&#039;information (field_information_type) */
  $handler->display->display_options['filters']['field_information_type_tid']['id'] = 'field_information_type_tid';
  $handler->display->display_options['filters']['field_information_type_tid']['table'] = 'field_data_field_information_type';
  $handler->display->display_options['filters']['field_information_type_tid']['field'] = 'field_information_type_tid';
  $handler->display->display_options['filters']['field_information_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_information_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_information_type_tid']['expose']['operator_id'] = 'field_information_type_tid_op';
  $handler->display->display_options['filters']['field_information_type_tid']['expose']['label'] = 'Type d\'information';
  $handler->display->display_options['filters']['field_information_type_tid']['expose']['operator'] = 'field_information_type_tid_op';
  $handler->display->display_options['filters']['field_information_type_tid']['expose']['identifier'] = 'field_information_type_tid';
  $handler->display->display_options['filters']['field_information_type_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_information_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_information_type_tid']['vocabulary'] = 'information_type';
  $handler->display->display_options['filters']['field_information_type_tid']['hierarchy'] = 1;
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

  /* Display: Toutes les informations (Page) */
  $handler = $view->new_display('page', 'Toutes les informations (Page)', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/cec/informations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Liste des Informations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['admin_informations'] = array(
    t('Master'),
    t('Toutes les Informations'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Intrigue'),
    t('Interprétation'),
    t('Titre'),
    t('Type d\'information'),
    t('Interprétations'),
    t('.'),
    t(','),
    t('Current state'),
    t('Actions'),
    t('modifier'),
    t('État actuel'),
    t('Toutes les informations (Page)'),
  );
  $export['admin_informations'] = $view;

  $view = new view();
  $view->name = 'admin_intrigues';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin Intrigues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Les Intrigues';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
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
  $handler->display->display_options['style_plugin'] = 'table';
  /* Comportement en l'absence de résultats: Global : Zone de texte */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Aucune intrigue ne correspond à ces critères.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nom';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Type d'intrigue */
  $handler->display->display_options['fields']['field_intrigue_type']['id'] = 'field_intrigue_type';
  $handler->display->display_options['fields']['field_intrigue_type']['table'] = 'field_data_field_intrigue_type';
  $handler->display->display_options['fields']['field_intrigue_type']['field'] = 'field_intrigue_type';
  $handler->display->display_options['fields']['field_intrigue_type']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Résumé';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a> <br> <p>';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Champ: Processus : Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Etat actuel';
  /* Champ: Contenu : Lien de modification */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['text'] = 'modifier';
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intrigue' => 'intrigue',
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
  /* Critère de filtrage: Contenu : Type d&#039;intrigue (field_intrigue_type) */
  $handler->display->display_options['filters']['field_intrigue_type_tid']['id'] = 'field_intrigue_type_tid';
  $handler->display->display_options['filters']['field_intrigue_type_tid']['table'] = 'field_data_field_intrigue_type';
  $handler->display->display_options['filters']['field_intrigue_type_tid']['field'] = 'field_intrigue_type_tid';
  $handler->display->display_options['filters']['field_intrigue_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_intrigue_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_intrigue_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_intrigue_type_tid']['expose']['operator_id'] = 'field_intrigue_type_tid_op';
  $handler->display->display_options['filters']['field_intrigue_type_tid']['expose']['label'] = 'Type d\'intrigue';
  $handler->display->display_options['filters']['field_intrigue_type_tid']['expose']['operator'] = 'field_intrigue_type_tid_op';
  $handler->display->display_options['filters']['field_intrigue_type_tid']['expose']['identifier'] = 'field_intrigue_type_tid';
  $handler->display->display_options['filters']['field_intrigue_type_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_intrigue_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_intrigue_type_tid']['vocabulary'] = 'intrigue_type';
  $handler->display->display_options['filters']['field_intrigue_type_tid']['hierarchy'] = 1;
  /* Critère de filtrage: Processus : Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Etat actuel';
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

  /* Display: Toutes les Intrigues (Page) */
  $handler = $view->new_display('page', 'Toutes les Intrigues (Page)', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/cec/intrigues';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Liste des Intrigues';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['admin_intrigues'] = array(
    t('Master'),
    t('Les Intrigues'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Aucune intrigue ne correspond à ces critères.'),
    t('Nom'),
    t('Type d\'intrigue'),
    t('Résumé'),
    t('Etat actuel'),
    t('Actions'),
    t('modifier'),
    t('Titre'),
    t('Toutes les Intrigues (Page)'),
  );
  $export['admin_intrigues'] = $view;

  $view = new view();
  $view->name = 'admin_personnages';
  $view->description = '';
  $view->tag = 'admin';
  $view->base_table = 'node';
  $view->human_name = 'Admin Personnages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tous les Personnages';
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
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_character_type' => 'field_character_type',
    'url' => 'url',
    'field_lastname' => 'field_lastname',
    'field_firstname' => 'field_firstname',
    'field_species' => 'field_species',
    'field_nationalite' => 'field_nationalite',
    'field_occupation' => 'field_occupation',
    'field_confession' => 'field_confession',
    'field_temperament1' => 'field_temperament1',
    'field_temperament2' => 'field_temperament1',
    'field_temperament3' => 'field_temperament1',
    'field_temperament4' => 'field_temperament1',
    'field_temperament5' => 'field_temperament1',
    'field_credit' => 'field_credit',
    'field_pugilat' => 'field_pugilat',
    'field_value' => 'field_value',
    'nid' => 'nid',
    'item_id' => 'item_id',
    'sid' => 'sid',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_character_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lastname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_firstname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_species' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nationalite' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_occupation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_confession' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_temperament1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => ' > ',
      'empty_column' => 0,
    ),
    'field_temperament2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_temperament3' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_temperament4' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_temperament5' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_credit' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pugilat' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'item_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
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
  );
  /* Relation: Entity Reference : Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_character_field_collection_item']['id'] = 'reverse_field_character_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_character_field_collection_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_character_field_collection_item']['field'] = 'reverse_field_character_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_character_field_collection_item']['label'] = 'Groupe';
  /* Relation: Entity Reference : Referenced Entity */
  $handler->display->display_options['relationships']['field_incarnate_target_id']['id'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['field'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['label'] = 'Joueur';
  /* Relation: Utilisateur : Profil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['profile']['label'] = 'ProfilAdministratif';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'inscription_administrative' => 'inscription_administrative',
  );
  /* Relation: Contenu : Avantages (field_avantages) */
  $handler->display->display_options['relationships']['field_avantages_value']['id'] = 'field_avantages_value';
  $handler->display->display_options['relationships']['field_avantages_value']['table'] = 'field_data_field_avantages';
  $handler->display->display_options['relationships']['field_avantages_value']['field'] = 'field_avantages_value';
  $handler->display->display_options['relationships']['field_avantages_value']['label'] = 'Avantages';
  $handler->display->display_options['relationships']['field_avantages_value']['delta'] = '-1';
  /* Relation: Entity Reference : Referenced Entity */
  $handler->display->display_options['relationships']['field_avantage_target_id']['id'] = 'field_avantage_target_id';
  $handler->display->display_options['relationships']['field_avantage_target_id']['table'] = 'field_data_field_avantage';
  $handler->display->display_options['relationships']['field_avantage_target_id']['field'] = 'field_avantage_target_id';
  $handler->display->display_options['relationships']['field_avantage_target_id']['relationship'] = 'field_avantages_value';
  $handler->display->display_options['relationships']['field_avantage_target_id']['label'] = 'Avantage';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nom du personnage';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Type */
  $handler->display->display_options['fields']['field_character_type']['id'] = 'field_character_type';
  $handler->display->display_options['fields']['field_character_type']['table'] = 'field_data_field_character_type';
  $handler->display->display_options['fields']['field_character_type']['field'] = 'field_character_type';
  /* Champ: Profil : URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 1;
  /* Champ: Profil : Prénom */
  $handler->display->display_options['fields']['field_lastname']['id'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['field_lastname']['field'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lastname']['element_label_colon'] = FALSE;
  /* Champ: Profil : Nom */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_firstname']['label'] = 'Nom Joueur';
  $handler->display->display_options['fields']['field_firstname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_firstname']['alter']['text'] = '[field_lastname] [field_firstname]';
  $handler->display->display_options['fields']['field_firstname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_firstname']['alter']['path'] = '[url]';
  /* Champ: Contenu : Espèce */
  $handler->display->display_options['fields']['field_species']['id'] = 'field_species';
  $handler->display->display_options['fields']['field_species']['table'] = 'field_data_field_species';
  $handler->display->display_options['fields']['field_species']['field'] = 'field_species';
  $handler->display->display_options['fields']['field_species']['type'] = 'text_plain';
  /* Champ: Contenu : Nationalité */
  $handler->display->display_options['fields']['field_nationalite']['id'] = 'field_nationalite';
  $handler->display->display_options['fields']['field_nationalite']['table'] = 'field_data_field_nationalite';
  $handler->display->display_options['fields']['field_nationalite']['field'] = 'field_nationalite';
  $handler->display->display_options['fields']['field_nationalite']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Contenu : Occupation */
  $handler->display->display_options['fields']['field_occupation']['id'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['table'] = 'field_data_field_occupation';
  $handler->display->display_options['fields']['field_occupation']['field'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Contenu : Confession */
  $handler->display->display_options['fields']['field_confession']['id'] = 'field_confession';
  $handler->display->display_options['fields']['field_confession']['table'] = 'field_data_field_confession';
  $handler->display->display_options['fields']['field_confession']['field'] = 'field_confession';
  $handler->display->display_options['fields']['field_confession']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Champ : Premier Tempérament */
  $handler->display->display_options['fields']['field_temperament1']['id'] = 'field_temperament1';
  $handler->display->display_options['fields']['field_temperament1']['table'] = 'field_data_field_temperament1';
  $handler->display->display_options['fields']['field_temperament1']['field'] = 'field_temperament1';
  $handler->display->display_options['fields']['field_temperament1']['label'] = 'Tempéraments';
  $handler->display->display_options['fields']['field_temperament1']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Champ : Second Tempérament */
  $handler->display->display_options['fields']['field_temperament2']['id'] = 'field_temperament2';
  $handler->display->display_options['fields']['field_temperament2']['table'] = 'field_data_field_temperament2';
  $handler->display->display_options['fields']['field_temperament2']['field'] = 'field_temperament2';
  $handler->display->display_options['fields']['field_temperament2']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Champ : Troisième Tempérament */
  $handler->display->display_options['fields']['field_temperament3']['id'] = 'field_temperament3';
  $handler->display->display_options['fields']['field_temperament3']['table'] = 'field_data_field_temperament3';
  $handler->display->display_options['fields']['field_temperament3']['field'] = 'field_temperament3';
  $handler->display->display_options['fields']['field_temperament3']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Champ : Quatrième Tempérament */
  $handler->display->display_options['fields']['field_temperament4']['id'] = 'field_temperament4';
  $handler->display->display_options['fields']['field_temperament4']['table'] = 'field_data_field_temperament4';
  $handler->display->display_options['fields']['field_temperament4']['field'] = 'field_temperament4';
  $handler->display->display_options['fields']['field_temperament4']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Champ : Dernier Tempérament */
  $handler->display->display_options['fields']['field_temperament5']['id'] = 'field_temperament5';
  $handler->display->display_options['fields']['field_temperament5']['table'] = 'field_data_field_temperament5';
  $handler->display->display_options['fields']['field_temperament5']['field'] = 'field_temperament5';
  $handler->display->display_options['fields']['field_temperament5']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Contenu : Crédit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Champ: Contenu : Pugilat */
  $handler->display->display_options['fields']['field_pugilat']['id'] = 'field_pugilat';
  $handler->display->display_options['fields']['field_pugilat']['table'] = 'field_data_field_pugilat';
  $handler->display->display_options['fields']['field_pugilat']['field'] = 'field_pugilat';
  $handler->display->display_options['fields']['field_pugilat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Champ: SUM(Contenu : Valeur) */
  $handler->display->display_options['fields']['field_value']['id'] = 'field_value';
  $handler->display->display_options['fields']['field_value']['table'] = 'field_data_field_value';
  $handler->display->display_options['fields']['field_value']['field'] = 'field_value';
  $handler->display->display_options['fields']['field_value']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['fields']['field_value']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_value']['label'] = '';
  $handler->display->display_options['fields']['field_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_value']['empty'] = '0 P';
  $handler->display->display_options['fields']['field_value']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Champ: COUNT(Contenu : Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = 'Avantages';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[nid] ([field_value])';
  $handler->display->display_options['fields']['nid']['separator'] = ' ';
  /* Champ: COUNT(DISTINCT Field collection item : Identifiant de Field collection item) */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['relationship'] = 'reverse_field_character_field_collection_item';
  $handler->display->display_options['fields']['item_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['item_id']['label'] = 'Groupes';
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
  /* Critère de tri: Contenu : Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'character' => 'character',
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
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Nom du personnage';
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
  /* Critère de filtrage: Profil : Nom (field_firstname) */
  $handler->display->display_options['filters']['field_firstname_value']['id'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['filters']['field_firstname_value']['field'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_firstname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_firstname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_firstname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_firstname_value']['expose']['operator_id'] = 'field_firstname_value_op';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['label'] = 'Nom Joueur';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['operator'] = 'field_firstname_value_op';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['identifier'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['remember_roles'] = array(
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
  /* Critère de filtrage: Profil : Prénom (field_lastname) */
  $handler->display->display_options['filters']['field_lastname_value']['id'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['filters']['field_lastname_value']['field'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_lastname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lastname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lastname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lastname_value']['expose']['operator_id'] = 'field_lastname_value_op';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['label'] = 'Prénom Joueur';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['operator'] = 'field_lastname_value_op';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['identifier'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['remember_roles'] = array(
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
  /* Critère de filtrage: Contenu : Type (field_character_type) */
  $handler->display->display_options['filters']['field_character_type_value']['id'] = 'field_character_type_value';
  $handler->display->display_options['filters']['field_character_type_value']['table'] = 'field_data_field_character_type';
  $handler->display->display_options['filters']['field_character_type_value']['field'] = 'field_character_type_value';
  $handler->display->display_options['filters']['field_character_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_character_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_character_type_value']['expose']['operator_id'] = 'field_character_type_value_op';
  $handler->display->display_options['filters']['field_character_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_character_type_value']['expose']['operator'] = 'field_character_type_value_op';
  $handler->display->display_options['filters']['field_character_type_value']['expose']['identifier'] = 'field_character_type_value';
  $handler->display->display_options['filters']['field_character_type_value']['expose']['remember_roles'] = array(
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
  /* Critère de filtrage: Contenu : Nationalité (field_nationalite) */
  $handler->display->display_options['filters']['field_nationalite_tid']['id'] = 'field_nationalite_tid';
  $handler->display->display_options['filters']['field_nationalite_tid']['table'] = 'field_data_field_nationalite';
  $handler->display->display_options['filters']['field_nationalite_tid']['field'] = 'field_nationalite_tid';
  $handler->display->display_options['filters']['field_nationalite_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_nationalite_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nationalite_tid']['expose']['operator_id'] = 'field_nationalite_tid_op';
  $handler->display->display_options['filters']['field_nationalite_tid']['expose']['label'] = 'Nationalité';
  $handler->display->display_options['filters']['field_nationalite_tid']['expose']['operator'] = 'field_nationalite_tid_op';
  $handler->display->display_options['filters']['field_nationalite_tid']['expose']['identifier'] = 'field_nationalite_tid';
  $handler->display->display_options['filters']['field_nationalite_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_nationalite_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nationalite_tid']['vocabulary'] = 'nationalites';
  /* Critère de filtrage: Contenu : Occupation (field_occupation) */
  $handler->display->display_options['filters']['field_occupation_tid']['id'] = 'field_occupation_tid';
  $handler->display->display_options['filters']['field_occupation_tid']['table'] = 'field_data_field_occupation';
  $handler->display->display_options['filters']['field_occupation_tid']['field'] = 'field_occupation_tid';
  $handler->display->display_options['filters']['field_occupation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_occupation_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_occupation_tid']['expose']['operator_id'] = 'field_occupation_tid_op';
  $handler->display->display_options['filters']['field_occupation_tid']['expose']['label'] = 'Occupation';
  $handler->display->display_options['filters']['field_occupation_tid']['expose']['operator'] = 'field_occupation_tid_op';
  $handler->display->display_options['filters']['field_occupation_tid']['expose']['identifier'] = 'field_occupation_tid';
  $handler->display->display_options['filters']['field_occupation_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_occupation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_occupation_tid']['vocabulary'] = 'occupations';
  /* Critère de filtrage: Contenu : Confession (field_confession) */
  $handler->display->display_options['filters']['field_confession_tid']['id'] = 'field_confession_tid';
  $handler->display->display_options['filters']['field_confession_tid']['table'] = 'field_data_field_confession';
  $handler->display->display_options['filters']['field_confession_tid']['field'] = 'field_confession_tid';
  $handler->display->display_options['filters']['field_confession_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_confession_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_confession_tid']['expose']['operator_id'] = 'field_confession_tid_op';
  $handler->display->display_options['filters']['field_confession_tid']['expose']['label'] = 'Confession';
  $handler->display->display_options['filters']['field_confession_tid']['expose']['operator'] = 'field_confession_tid_op';
  $handler->display->display_options['filters']['field_confession_tid']['expose']['identifier'] = 'field_confession_tid';
  $handler->display->display_options['filters']['field_confession_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_confession_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_confession_tid']['vocabulary'] = 'religions';
  /* Critère de filtrage: Champ : Premier Tempérament (field_temperament1) */
  $handler->display->display_options['filters']['field_temperament1_tid']['id'] = 'field_temperament1_tid';
  $handler->display->display_options['filters']['field_temperament1_tid']['table'] = 'field_data_field_temperament1';
  $handler->display->display_options['filters']['field_temperament1_tid']['field'] = 'field_temperament1_tid';
  $handler->display->display_options['filters']['field_temperament1_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_temperament1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_temperament1_tid']['expose']['operator_id'] = 'field_temperament1_tid_op';
  $handler->display->display_options['filters']['field_temperament1_tid']['expose']['label'] = 'Tempérament 1';
  $handler->display->display_options['filters']['field_temperament1_tid']['expose']['operator'] = 'field_temperament1_tid_op';
  $handler->display->display_options['filters']['field_temperament1_tid']['expose']['identifier'] = 'field_temperament1_tid';
  $handler->display->display_options['filters']['field_temperament1_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_temperament1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_temperament1_tid']['vocabulary'] = 'temperament';
  /* Critère de filtrage: Champ : Second Tempérament (field_temperament2) */
  $handler->display->display_options['filters']['field_temperament2_tid']['id'] = 'field_temperament2_tid';
  $handler->display->display_options['filters']['field_temperament2_tid']['table'] = 'field_data_field_temperament2';
  $handler->display->display_options['filters']['field_temperament2_tid']['field'] = 'field_temperament2_tid';
  $handler->display->display_options['filters']['field_temperament2_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_temperament2_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_temperament2_tid']['expose']['operator_id'] = 'field_temperament2_tid_op';
  $handler->display->display_options['filters']['field_temperament2_tid']['expose']['label'] = 'Tempérament 2';
  $handler->display->display_options['filters']['field_temperament2_tid']['expose']['operator'] = 'field_temperament2_tid_op';
  $handler->display->display_options['filters']['field_temperament2_tid']['expose']['identifier'] = 'field_temperament2_tid';
  $handler->display->display_options['filters']['field_temperament2_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_temperament2_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_temperament2_tid']['vocabulary'] = 'temperament';
  /* Critère de filtrage: Champ : Troisième Tempérament (field_temperament3) */
  $handler->display->display_options['filters']['field_temperament3_tid']['id'] = 'field_temperament3_tid';
  $handler->display->display_options['filters']['field_temperament3_tid']['table'] = 'field_data_field_temperament3';
  $handler->display->display_options['filters']['field_temperament3_tid']['field'] = 'field_temperament3_tid';
  $handler->display->display_options['filters']['field_temperament3_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_temperament3_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_temperament3_tid']['expose']['operator_id'] = 'field_temperament3_tid_op';
  $handler->display->display_options['filters']['field_temperament3_tid']['expose']['label'] = 'Tempérament 3';
  $handler->display->display_options['filters']['field_temperament3_tid']['expose']['operator'] = 'field_temperament3_tid_op';
  $handler->display->display_options['filters']['field_temperament3_tid']['expose']['identifier'] = 'field_temperament3_tid';
  $handler->display->display_options['filters']['field_temperament3_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_temperament3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_temperament3_tid']['vocabulary'] = 'temperament';
  /* Critère de filtrage: Champ : Quatrième Tempérament (field_temperament4) */
  $handler->display->display_options['filters']['field_temperament4_tid']['id'] = 'field_temperament4_tid';
  $handler->display->display_options['filters']['field_temperament4_tid']['table'] = 'field_data_field_temperament4';
  $handler->display->display_options['filters']['field_temperament4_tid']['field'] = 'field_temperament4_tid';
  $handler->display->display_options['filters']['field_temperament4_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_temperament4_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_temperament4_tid']['expose']['operator_id'] = 'field_temperament4_tid_op';
  $handler->display->display_options['filters']['field_temperament4_tid']['expose']['label'] = 'Tempérament 4';
  $handler->display->display_options['filters']['field_temperament4_tid']['expose']['operator'] = 'field_temperament4_tid_op';
  $handler->display->display_options['filters']['field_temperament4_tid']['expose']['identifier'] = 'field_temperament4_tid';
  $handler->display->display_options['filters']['field_temperament4_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_temperament4_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_temperament4_tid']['vocabulary'] = 'temperament';
  /* Critère de filtrage: Champ : Dernier Tempérament (field_temperament5) */
  $handler->display->display_options['filters']['field_temperament5_tid']['id'] = 'field_temperament5_tid';
  $handler->display->display_options['filters']['field_temperament5_tid']['table'] = 'field_data_field_temperament5';
  $handler->display->display_options['filters']['field_temperament5_tid']['field'] = 'field_temperament5_tid';
  $handler->display->display_options['filters']['field_temperament5_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_temperament5_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_temperament5_tid']['expose']['operator_id'] = 'field_temperament5_tid_op';
  $handler->display->display_options['filters']['field_temperament5_tid']['expose']['label'] = 'Tempérament 5';
  $handler->display->display_options['filters']['field_temperament5_tid']['expose']['operator'] = 'field_temperament5_tid_op';
  $handler->display->display_options['filters']['field_temperament5_tid']['expose']['identifier'] = 'field_temperament5_tid';
  $handler->display->display_options['filters']['field_temperament5_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_temperament5_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_temperament5_tid']['vocabulary'] = 'temperament';
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

  /* Display: Tous les Personnages (Page) */
  $handler = $view->new_display('page', 'Tous les Personnages (Page)', 'tous_personnages');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/cec/personnages';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Liste des Personnages';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Sélecteur Membre (Reference) */
  $handler = $view->new_display('entityreference', 'Sélecteur Membre (Reference)', 'entityreference_member');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_character_type' => 0,
    'sid' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = '';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Type */
  $handler->display->display_options['fields']['field_character_type']['id'] = 'field_character_type';
  $handler->display->display_options['fields']['field_character_type']['table'] = 'field_data_field_character_type';
  $handler->display->display_options['fields']['field_character_type']['field'] = 'field_character_type';
  $handler->display->display_options['fields']['field_character_type']['label'] = '';
  $handler->display->display_options['fields']['field_character_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_character_type']['alter']['text'] = '[field_character_type] : ';
  $handler->display->display_options['fields']['field_character_type']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Processus : Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '([sid])';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'character' => 'character',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Sélecteur Cible (Reference) */
  $handler = $view->new_display('entityreference', 'Sélecteur Cible (Reference)', 'entityreference_target');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'type' => 'type',
    'title' => 'title',
    'field_character_type' => 0,
    'field_group_is_technical' => 0,
    'sid' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = '';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = '[type] : ';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Type */
  $handler->display->display_options['fields']['field_character_type']['id'] = 'field_character_type';
  $handler->display->display_options['fields']['field_character_type']['table'] = 'field_data_field_character_type';
  $handler->display->display_options['fields']['field_character_type']['field'] = 'field_character_type';
  $handler->display->display_options['fields']['field_character_type']['label'] = '';
  $handler->display->display_options['fields']['field_character_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_character_type']['alter']['text'] = '[[field_character_type]]';
  $handler->display->display_options['fields']['field_character_type']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Groupe technique */
  $handler->display->display_options['fields']['field_group_is_technical']['id'] = 'field_group_is_technical';
  $handler->display->display_options['fields']['field_group_is_technical']['table'] = 'field_data_field_group_is_technical';
  $handler->display->display_options['fields']['field_group_is_technical']['field'] = 'field_group_is_technical';
  $handler->display->display_options['fields']['field_group_is_technical']['label'] = '';
  $handler->display->display_options['fields']['field_group_is_technical']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_group_is_technical']['alter']['text'] = '[Technique]';
  $handler->display->display_options['fields']['field_group_is_technical']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_is_technical']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_group_is_technical']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_group_is_technical']['type'] = 'list_key';
  /* Champ: Processus : Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '([sid])';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'group' => 'group',
    'character' => 'character',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['admin_personnages'] = array(
    t('Master'),
    t('Tous les Personnages'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Groupe'),
    t('Joueur'),
    t('ProfilAdministratif'),
    t('Avantages'),
    t('Avantage'),
    t('Nom du personnage'),
    t('Type'),
    t('Nom Joueur'),
    t('[field_lastname] [field_firstname]'),
    t('Espèce'),
    t('Nationalité'),
    t('Occupation'),
    t('Confession'),
    t('Tempéraments'),
    t('Second Tempérament'),
    t('Troisième Tempérament'),
    t('Quatrième Tempérament'),
    t('Dernier Tempérament'),
    t('Crédit'),
    t('Pugilat'),
    t('0 P'),
    t('[nid] ([field_value])'),
    t('Groupes'),
    t('.'),
    t(','),
    t('Current state'),
    t('Actions'),
    t('modifier'),
    t('Prénom Joueur'),
    t('Tempérament 1'),
    t('Tempérament 2'),
    t('Tempérament 3'),
    t('Tempérament 4'),
    t('Tempérament 5'),
    t('État actuel'),
    t('Tous les Personnages (Page)'),
    t('Sélecteur Membre (Reference)'),
    t('[field_character_type] : '),
    t('([sid])'),
    t('Sélecteur Cible (Reference)'),
    t('[type] : '),
    t('[[field_character_type]]'),
    t('[Technique]'),
  );
  $export['admin_personnages'] = $view;

  $view = new view();
  $view->name = 'exports';
  $view->description = '';
  $view->tag = 'admin';
  $view->base_table = 'profile';
  $view->human_name = 'Admin Exports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    168020977 => '168020977',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relation: Profil : Utilisateur uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Champ: Utilisateur : Courriel */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Critère de tri: Utilisateur : Nom */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'user';
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'inscription_administrative' => 'inscription_administrative',
  );

  /* Display: Inscriptions Administratives */
  $handler = $view->new_display('views_data_export', 'Inscriptions Administratives', 'inscriptions_administratives');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%display_%timestamp-full.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Champ: Utilisateur : Courriel */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Champ: Profil : Prénom */
  $handler->display->display_options['fields']['field_lastname']['id'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['field_lastname']['field'] = 'field_lastname';
  /* Champ: Profil : Nom */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  /* Champ: Profil : Date de naissance */
  $handler->display->display_options['fields']['field_birthdate']['id'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['table'] = 'field_data_field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['field'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Profil : Adresse de votre domicile */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Champ: Profil : Numéro de téléphone principal */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  /* Champ: Profil : Numéro de téléphone secondaire */
  $handler->display->display_options['fields']['field_phone2']['id'] = 'field_phone2';
  $handler->display->display_options['fields']['field_phone2']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['field_phone2']['field'] = 'field_phone2';
  /* Champ: Champ : Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_photo']['alter']['text'] = 'Oui';
  $handler->display->display_options['fields']['field_photo']['empty'] = 'Non';
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Champ: Profil : Allergies et problèmes de santé */
  $handler->display->display_options['fields']['field_health']['id'] = 'field_health';
  $handler->display->display_options['fields']['field_health']['table'] = 'field_data_field_health';
  $handler->display->display_options['fields']['field_health']['field'] = 'field_health';
  /* Champ: Profil : Régime alimentaire spécial */
  $handler->display->display_options['fields']['field_food']['id'] = 'field_food';
  $handler->display->display_options['fields']['field_food']['table'] = 'field_data_field_food';
  $handler->display->display_options['fields']['field_food']['field'] = 'field_food';
  /* Champ: Profil : Compétences médicales */
  $handler->display->display_options['fields']['field_health_skills']['id'] = 'field_health_skills';
  $handler->display->display_options['fields']['field_health_skills']['table'] = 'field_data_field_health_skills';
  $handler->display->display_options['fields']['field_health_skills']['field'] = 'field_health_skills';
  /* Champ: Profil : J'ai lu et j'accepte la Charte de Déontologie de l'association Terra Ludis */
  $handler->display->display_options['fields']['field_convention']['id'] = 'field_convention';
  $handler->display->display_options['fields']['field_convention']['table'] = 'field_data_field_convention';
  $handler->display->display_options['fields']['field_convention']['field'] = 'field_convention';
  /* Champ: Profil : Je m'engage à m'inscrire à l'association Terra Ludis en 2013 */
  $handler->display->display_options['fields']['field_membership']['id'] = 'field_membership';
  $handler->display->display_options['fields']['field_membership']['table'] = 'field_data_field_membership';
  $handler->display->display_options['fields']['field_membership']['field'] = 'field_membership';
  /* Champ: Profil : Je participerai au rangement et au nettoyage du site */
  $handler->display->display_options['fields']['field_storage']['id'] = 'field_storage';
  $handler->display->display_options['fields']['field_storage']['table'] = 'field_data_field_storage';
  $handler->display->display_options['fields']['field_storage']['field'] = 'field_storage';
  /* Champ: Profil : J’autorise Terra Ludis à utiliser les photographies me représentant prises sur ce GN */
  $handler->display->display_options['fields']['field_image_right']['id'] = 'field_image_right';
  $handler->display->display_options['fields']['field_image_right']['table'] = 'field_data_field_image_right';
  $handler->display->display_options['fields']['field_image_right']['field'] = 'field_image_right';
  $handler->display->display_options['fields']['field_image_right']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'inscription_administrative' => 'inscription_administrative',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/cec/export/inscriptions-administratives';

  /* Display: Profiles Joueurs */
  $handler = $view->new_display('views_data_export', 'Profiles Joueurs', 'profils_joueurs');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%display_%timestamp-full.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Champ: Utilisateur : Courriel */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Champ: Profil : Nom du personnage */
  $handler->display->display_options['fields']['field_character_name']['id'] = 'field_character_name';
  $handler->display->display_options['fields']['field_character_name']['table'] = 'field_data_field_character_name';
  $handler->display->display_options['fields']['field_character_name']['field'] = 'field_character_name';
  /* Champ: Profil : Formule choisie */
  $handler->display->display_options['fields']['field_exposure']['id'] = 'field_exposure';
  $handler->display->display_options['fields']['field_exposure']['table'] = 'field_data_field_exposure';
  $handler->display->display_options['fields']['field_exposure']['field'] = 'field_exposure';
  /* Champ: Profil : Occupation principale */
  $handler->display->display_options['fields']['field_job1']['id'] = 'field_job1';
  $handler->display->display_options['fields']['field_job1']['table'] = 'field_data_field_job1';
  $handler->display->display_options['fields']['field_job1']['field'] = 'field_job1';
  /* Champ: Profil : Occupation secondaire */
  $handler->display->display_options['fields']['field_job2']['id'] = 'field_job2';
  $handler->display->display_options['fields']['field_job2']['table'] = 'field_data_field_job2';
  $handler->display->display_options['fields']['field_job2']['field'] = 'field_job2';
  /* Champ: Profil : Occupation à éviter */
  $handler->display->display_options['fields']['field_job0']['id'] = 'field_job0';
  $handler->display->display_options['fields']['field_job0']['table'] = 'field_data_field_job0';
  $handler->display->display_options['fields']['field_job0']['field'] = 'field_job0';
  /* Champ: Champ : Premier Tempérament */
  $handler->display->display_options['fields']['field_temperament1']['id'] = 'field_temperament1';
  $handler->display->display_options['fields']['field_temperament1']['table'] = 'field_data_field_temperament1';
  $handler->display->display_options['fields']['field_temperament1']['field'] = 'field_temperament1';
  /* Champ: Champ : Second Tempérament */
  $handler->display->display_options['fields']['field_temperament2']['id'] = 'field_temperament2';
  $handler->display->display_options['fields']['field_temperament2']['table'] = 'field_data_field_temperament2';
  $handler->display->display_options['fields']['field_temperament2']['field'] = 'field_temperament2';
  /* Champ: Champ : Troisième Tempérament */
  $handler->display->display_options['fields']['field_temperament3']['id'] = 'field_temperament3';
  $handler->display->display_options['fields']['field_temperament3']['table'] = 'field_data_field_temperament3';
  $handler->display->display_options['fields']['field_temperament3']['field'] = 'field_temperament3';
  /* Champ: Champ : Quatrième Tempérament */
  $handler->display->display_options['fields']['field_temperament4']['id'] = 'field_temperament4';
  $handler->display->display_options['fields']['field_temperament4']['table'] = 'field_data_field_temperament4';
  $handler->display->display_options['fields']['field_temperament4']['field'] = 'field_temperament4';
  /* Champ: Champ : Dernier Tempérament */
  $handler->display->display_options['fields']['field_temperament5']['id'] = 'field_temperament5';
  $handler->display->display_options['fields']['field_temperament5']['table'] = 'field_data_field_temperament5';
  $handler->display->display_options['fields']['field_temperament5']['field'] = 'field_temperament5';
  /* Champ: Profil : Accepteriez vous de jouer des intrigues sentimentales avec un tiers ? */
  $handler->display->display_options['fields']['field_love']['id'] = 'field_love';
  $handler->display->display_options['fields']['field_love']['table'] = 'field_data_field_love';
  $handler->display->display_options['fields']['field_love']['field'] = 'field_love';
  /* Champ: Profil : Commentaire */
  $handler->display->display_options['fields']['field_love_condition']['id'] = 'field_love_condition';
  $handler->display->display_options['fields']['field_love_condition']['table'] = 'field_data_field_love_condition';
  $handler->display->display_options['fields']['field_love_condition']['field'] = 'field_love_condition';
  /* Champ: Profil : Vous sentez-vous l'âme d'un vrai méchant de roman ? */
  $handler->display->display_options['fields']['field_crimes']['id'] = 'field_crimes';
  $handler->display->display_options['fields']['field_crimes']['table'] = 'field_data_field_crimes';
  $handler->display->display_options['fields']['field_crimes']['field'] = 'field_crimes';
  /* Champ: Profil : Commentaire */
  $handler->display->display_options['fields']['field_crimes_condition']['id'] = 'field_crimes_condition';
  $handler->display->display_options['fields']['field_crimes_condition']['table'] = 'field_data_field_crimes_condition';
  $handler->display->display_options['fields']['field_crimes_condition']['field'] = 'field_crimes_condition';
  /* Champ: Profil : Désirez-vous avoir des interactions spécifiques avec certains joueurs ? */
  $handler->display->display_options['fields']['field_friends']['id'] = 'field_friends';
  $handler->display->display_options['fields']['field_friends']['table'] = 'field_data_field_friends';
  $handler->display->display_options['fields']['field_friends']['field'] = 'field_friends';
  $handler->display->display_options['fields']['field_friends']['type'] = 'text_plain';
  /* Champ: Profil : Je suis prêt(e) à faire un effort pour que mon costume et mon rôle-play soient appropriés à mon personnage. */
  $handler->display->display_options['fields']['field_great_costume']['id'] = 'field_great_costume';
  $handler->display->display_options['fields']['field_great_costume']['table'] = 'field_data_field_great_costume';
  $handler->display->display_options['fields']['field_great_costume']['field'] = 'field_great_costume';
  /* Champ: Profil : Mais j'ai besoin d'aide! */
  $handler->display->display_options['fields']['field_help_costume']['id'] = 'field_help_costume';
  $handler->display->display_options['fields']['field_help_costume']['table'] = 'field_data_field_help_costume';
  $handler->display->display_options['fields']['field_help_costume']['field'] = 'field_help_costume';
  /* Champ: Profil : Autre chose à nous dire ? */
  $handler->display->display_options['fields']['field_freetalk']['id'] = 'field_freetalk';
  $handler->display->display_options['fields']['field_freetalk']['table'] = 'field_data_field_freetalk';
  $handler->display->display_options['fields']['field_freetalk']['field'] = 'field_freetalk';
  $handler->display->display_options['fields']['field_freetalk']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profil_joueur' => 'profil_joueur',
  );
  $handler->display->display_options['path'] = 'admin/cec/export/profils-joueurs';
  $translatables['exports'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Utilisateur'),
    t('Nom'),
    t('Courriel'),
    t('Inscriptions Administratives'),
    t('Prénom'),
    t('Date de naissance'),
    t('Adresse de votre domicile'),
    t('Numéro de téléphone principal'),
    t('Numéro de téléphone secondaire'),
    t('Photo'),
    t('Oui'),
    t('Non'),
    t('Allergies et problèmes de santé'),
    t('Régime alimentaire spécial'),
    t('Compétences médicales'),
    t('J\'ai lu et j\'accepte la Charte de Déontologie de l\'association Terra Ludis'),
    t('Je m\'engage à m\'inscrire à l\'association Terra Ludis en 2013'),
    t('Je participerai au rangement et au nettoyage du site'),
    t('J’autorise Terra Ludis à utiliser les photographies me représentant prises sur ce GN'),
    t('Profiles Joueurs'),
    t('Nom du personnage'),
    t('Formule choisie'),
    t('Occupation principale'),
    t('Occupation secondaire'),
    t('Occupation à éviter'),
    t('Premier Tempérament'),
    t('Second Tempérament'),
    t('Troisième Tempérament'),
    t('Quatrième Tempérament'),
    t('Dernier Tempérament'),
    t('Accepteriez vous de jouer des intrigues sentimentales avec un tiers ?'),
    t('Commentaire'),
    t('Vous sentez-vous l\'âme d\'un vrai méchant de roman ?'),
    t('Désirez-vous avoir des interactions spécifiques avec certains joueurs ?'),
    t('Je suis prêt(e) à faire un effort pour que mon costume et mon rôle-play soient appropriés à mon personnage.'),
    t('Mais j\'ai besoin d\'aide!'),
    t('Autre chose à nous dire ?'),
  );
  $export['exports'] = $view;

  $view = new view();
  $view->name = 'inscriptions';
  $view->description = '';
  $view->tag = 'admin';
  $view->base_table = 'users';
  $view->human_name = 'Admin Inscriptions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Inscriptions';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    168020977 => '168020977',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'mail' => 'mail',
    'rid' => 'rid',
    'login' => 'login',
    'uid' => 'uid',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing',
    'nothing_2' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'login';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'login' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => ' / ',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relation: Utilisateur : Profil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['label'] = 'ProfilAdmin';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'inscription_administrative' => 'inscription_administrative',
  );
  /* Relation: Utilisateur : Profil */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'ProfilJoueur';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'profil_joueur' => 'profil_joueur',
  );
  /* Champ: Opérations en masse : Utilisateur */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_block_ip_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::user_block_user_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::cec_payment_bulk_declare_paid' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_user_update_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Nom d\'utilisateur';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Champ: Utilisateur : Courriel */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Champ: Utilisateur : Rôles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Champ: Utilisateur : Dernière connexion */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['login']['empty'] = 'jamais';
  $handler->display->display_options['fields']['login']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['login']['date_format'] = 'raw time ago';
  /* Champ: Utilisateur : Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Champ: Profil : Identifiant de Profil */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['relationship'] = 'profile';
  $handler->display->display_options['fields']['pid']['label'] = 'Profil Admin';
  $handler->display->display_options['fields']['pid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['pid']['alter']['text'] = 'Rempli';
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid']['empty'] = 'Vide';
  $handler->display->display_options['fields']['pid']['empty_zero'] = TRUE;
  /* Champ: Profil : URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['label'] = 'Profils';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'Inscription Administrative';
  $handler->display->display_options['fields']['url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Champ: Profil : Identifiant de Profil */
  $handler->display->display_options['fields']['pid_1']['id'] = 'pid_1';
  $handler->display->display_options['fields']['pid_1']['table'] = 'profile';
  $handler->display->display_options['fields']['pid_1']['field'] = 'pid';
  $handler->display->display_options['fields']['pid_1']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['pid_1']['label'] = 'Profil Joueur';
  $handler->display->display_options['fields']['pid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['pid_1']['alter']['text'] = 'Rempli';
  $handler->display->display_options['fields']['pid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid_1']['empty'] = 'Vide';
  $handler->display->display_options['fields']['pid_1']['empty_zero'] = TRUE;
  /* Champ: Profil : URL */
  $handler->display->display_options['fields']['url_1']['id'] = 'url_1';
  $handler->display->display_options['fields']['url_1']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url_1']['field'] = 'url';
  $handler->display->display_options['fields']['url_1']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['url_1']['label'] = 'Profil Joueur';
  $handler->display->display_options['fields']['url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url_1']['alter']['text'] = 'Profil Joueur';
  $handler->display->display_options['fields']['url_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['url_1']['link_to_entity'] = 0;
  /* Champ: Global : Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Profils';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/profile-profil_joueur/[uid]">Profil joueur</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Champ: Global : Texte personnalisé */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Inscription administrative';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="/profile-inscription_administrative/[uid]">Insciprion administrative</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Critère de tri: Utilisateur : Dernière connexion */
  $handler->display->display_options['sorts']['login']['id'] = 'login';
  $handler->display->display_options['sorts']['login']['table'] = 'users';
  $handler->display->display_options['sorts']['login']['field'] = 'login';
  $handler->display->display_options['sorts']['login']['order'] = 'DESC';
  /* Critère de filtrage: Utilisateur : Actif */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Utilisateur : Rôles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    125268670 => '125268670',
    203293079 => '203293079',
    247050890 => '247050890',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Critère de filtrage: Utilisateur : Nom (brut) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Nom d\'utilisateur';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  /* Critère de filtrage: Utilisateur : Courriel */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'Courriel';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  /* Critère de filtrage: Utilisateur : Rôles */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['value'] = array(
    125268670 => '125268670',
    203293079 => '203293079',
    247050890 => '247050890',
  );
  $handler->display->display_options['filters']['rid_1']['group'] = 1;
  $handler->display->display_options['filters']['rid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid_1']['expose']['operator_id'] = 'rid_1_op';
  $handler->display->display_options['filters']['rid_1']['expose']['label'] = 'Etat de l\'inscription';
  $handler->display->display_options['filters']['rid_1']['expose']['operator'] = 'rid_1_op';
  $handler->display->display_options['filters']['rid_1']['expose']['identifier'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['rid_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['rid_1']['reduce_duplicates'] = TRUE;

  /* Display: Toutes les Inscriptions (Page) */
  $handler = $view->new_display('page', 'Toutes les Inscriptions (Page)', 'toutes_inscriptions');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/cec/inscriptions';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Liste des Inscrits';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['inscriptions'] = array(
    t('Master'),
    t('Inscriptions'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('ProfilAdmin'),
    t('ProfilJoueur'),
    t('Utilisateur'),
    t('Nom d\'utilisateur'),
    t('Courriel'),
    t('Rôles'),
    t('Dernière connexion'),
    t('jamais'),
    t('Profil Admin'),
    t('Rempli'),
    t('Vide'),
    t('.'),
    t(','),
    t('Profils'),
    t('Inscription Administrative'),
    t('Profil Joueur'),
    t('<a href="/profile-profil_joueur/[uid]">Profil joueur</a>'),
    t('Inscription administrative'),
    t('<a href="/profile-inscription_administrative/[uid]">Insciprion administrative</a>'),
    t('Etat de l\'inscription'),
    t('Toutes les Inscriptions (Page)'),
  );
  $export['inscriptions'] = $view;

  return $export;
}
