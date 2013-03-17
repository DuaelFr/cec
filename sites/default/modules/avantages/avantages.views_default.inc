<?php
/**
 * @file
 * avantages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function avantages_views_default_views() {
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
  $handler->display->display_options['style_options']['row_class'] = 'state-[sid_1]';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_alternate_title' => 'field_alternate_title',
    'field_avantage_type' => 'field_avantage_type',
    'field_value' => 'field_value',
    'title' => 'title',
    'field_alternate_body' => 'field_alternate_body',
    'item_id' => 'item_id',
    'sid' => 'sid',
    'edit_node' => 'edit_node',
    'sid_1' => 'sid_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_alternate_title';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'sid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relation: Entity Reference : Entité référante */
  $handler->display->display_options['relationships']['reverse_field_avantage_field_collection_item']['id'] = 'reverse_field_avantage_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_avantage_field_collection_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_avantage_field_collection_item']['field'] = 'reverse_field_avantage_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_avantage_field_collection_item']['label'] = 'Personnage';
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Champ : Intitulé orga */
  $handler->display->display_options['fields']['field_alternate_title']['id'] = 'field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['table'] = 'field_data_field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['field'] = 'field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_alternate_title']['alter']['path'] = 'node/[nid]';
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
  /* Champ: Processus : État actuel */
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
  /* Champ: Etat CSS */
  $handler->display->display_options['fields']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['fields']['sid_1']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid_1']['field'] = 'sid';
  $handler->display->display_options['fields']['sid_1']['ui_name'] = 'Etat CSS';
  $handler->display->display_options['fields']['sid_1']['label'] = '';
  $handler->display->display_options['fields']['sid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sid_1']['transliterate'] = TRUE;
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
  /* Critère de filtrage: Processus : État actuel */
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
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Liste des Avantages';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;

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

  return $export;
}
