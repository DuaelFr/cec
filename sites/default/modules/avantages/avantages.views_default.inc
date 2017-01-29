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
    'field_opus' => 'field_opus',
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
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_opus' => array(
      'align' => 'views-align-center',
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
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_avantage_field_collection_item']['id'] = 'reverse_field_avantage_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_avantage_field_collection_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_avantage_field_collection_item']['field'] = 'reverse_field_avantage_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_avantage_field_collection_item']['label'] = 'Personnage';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Intitulé orga */
  $handler->display->display_options['fields']['field_alternate_title']['id'] = 'field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['table'] = 'field_data_field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['field'] = 'field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_alternate_title']['alter']['path'] = 'node/[nid]';
  /* Field: Content: Type d'avantage */
  $handler->display->display_options['fields']['field_avantage_type']['id'] = 'field_avantage_type';
  $handler->display->display_options['fields']['field_avantage_type']['table'] = 'field_data_field_avantage_type';
  $handler->display->display_options['fields']['field_avantage_type']['field'] = 'field_avantage_type';
  $handler->display->display_options['fields']['field_avantage_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_avantage_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Valeur */
  $handler->display->display_options['fields']['field_value']['id'] = 'field_value';
  $handler->display->display_options['fields']['field_value']['table'] = 'field_data_field_value';
  $handler->display->display_options['fields']['field_value']['field'] = 'field_value';
  $handler->display->display_options['fields']['field_value']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nom joueurs';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Descriptif orga */
  $handler->display->display_options['fields']['field_alternate_body']['id'] = 'field_alternate_body';
  $handler->display->display_options['fields']['field_alternate_body']['table'] = 'field_data_field_alternate_body';
  $handler->display->display_options['fields']['field_alternate_body']['field'] = 'field_alternate_body';
  /* Field: COUNT(DISTINCT Field collection item: Field collection item ID) */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['relationship'] = 'reverse_field_avantage_field_collection_item';
  $handler->display->display_options['fields']['item_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['item_id']['label'] = 'Personnages';
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Etat actuel';
  /* Field: Content: Opus */
  $handler->display->display_options['fields']['field_opus']['id'] = 'field_opus';
  $handler->display->display_options['fields']['field_opus']['table'] = 'field_data_field_opus';
  $handler->display->display_options['fields']['field_opus']['field'] = 'field_opus';
  $handler->display->display_options['fields']['field_opus']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_opus']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['text'] = 'modifier';
  /* Field: Etat CSS */
  $handler->display->display_options['fields']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['fields']['sid_1']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid_1']['field'] = 'sid';
  $handler->display->display_options['fields']['sid_1']['ui_name'] = 'Etat CSS';
  $handler->display->display_options['fields']['sid_1']['label'] = '';
  $handler->display->display_options['fields']['sid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sid_1']['transliterate'] = TRUE;
  /* Sort criterion: Field: Intitulé orga (field_alternate_title) */
  $handler->display->display_options['sorts']['field_alternate_title_value']['id'] = 'field_alternate_title_value';
  $handler->display->display_options['sorts']['field_alternate_title_value']['table'] = 'field_data_field_alternate_title';
  $handler->display->display_options['sorts']['field_alternate_title_value']['field'] = 'field_alternate_title_value';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'avantage' => 'avantage',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Intitulé orga (field_alternate_title) */
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
  /* Filter criterion: Content: Type d&#039;avantage (field_avantage_type) */
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
  /* Filter criterion: Content: Valeur (field_value) */
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
  /* Filter criterion: Content: Title */
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
  /* Filter criterion: Workflow: Current state */
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
  /* Filter criterion: Content: Opus (field_opus) */
  $handler->display->display_options['filters']['field_opus_value']['id'] = 'field_opus_value';
  $handler->display->display_options['filters']['field_opus_value']['table'] = 'field_data_field_opus';
  $handler->display->display_options['filters']['field_opus_value']['field'] = 'field_opus_value';
  $handler->display->display_options['filters']['field_opus_value']['value'] = array(
    'acte3' => 'acte3',
  );
  $handler->display->display_options['filters']['field_opus_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_opus_value']['expose']['operator_id'] = 'field_opus_value_op';
  $handler->display->display_options['filters']['field_opus_value']['expose']['label'] = 'Opus';
  $handler->display->display_options['filters']['field_opus_value']['expose']['operator'] = 'field_opus_value_op';
  $handler->display->display_options['filters']['field_opus_value']['expose']['identifier'] = 'opus';
  $handler->display->display_options['filters']['field_opus_value']['expose']['remember_roles'] = array(
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
  /* Field: Field: Intitulé orga */
  $handler->display->display_options['fields']['field_alternate_title']['id'] = 'field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['table'] = 'field_data_field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['field'] = 'field_alternate_title';
  $handler->display->display_options['fields']['field_alternate_title']['label'] = '';
  $handler->display->display_options['fields']['field_alternate_title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_alternate_title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
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
  /* Filter criterion: Content: Type */
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
    t('Opus'),
    t('Actions'),
    t('modifier'),
    t('Tous les avantages (Page)'),
    t('more'),
    t('Sélecteur (Référence)'),
    t('([title])'),
  );
  $export['admin_avantages'] = $view;

  $view = new view();
  $view->name = 'avantages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Avantages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Avantages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    32775451 => '32775451',
    66570830 => '66570830',
    199742668 => '199742668',
    168020977 => '168020977',
    149933350 => '149933350',
  );
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '300';
  $handler->display->display_options['cache']['results_max_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_min_lifespan'] = '300';
  $handler->display->display_options['cache']['output_max_lifespan'] = '518400';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'avantage' => 'avantage',
      'character' => 'character',
      'news' => 0,
      'event' => 0,
      'group' => 0,
      'information' => 0,
      'intrigue' => 0,
      'location' => 0,
      'stuff' => 0,
      'page' => 0,
      'sequence' => 0,
    ),
    'node_only' => array(
      'node_changed' => 0,
    ),
  );
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Vide';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Aucun avantage validé pour le moment.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Avantages (field_avantages) */
  $handler->display->display_options['relationships']['field_avantages_value']['id'] = 'field_avantages_value';
  $handler->display->display_options['relationships']['field_avantages_value']['table'] = 'field_data_field_avantages';
  $handler->display->display_options['relationships']['field_avantages_value']['field'] = 'field_avantages_value';
  $handler->display->display_options['relationships']['field_avantages_value']['label'] = 'Avatanges';
  $handler->display->display_options['relationships']['field_avantages_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_avantage_target_id']['id'] = 'field_avantage_target_id';
  $handler->display->display_options['relationships']['field_avantage_target_id']['table'] = 'field_data_field_avantage';
  $handler->display->display_options['relationships']['field_avantage_target_id']['field'] = 'field_avantage_target_id';
  $handler->display->display_options['relationships']['field_avantage_target_id']['relationship'] = 'field_avantages_value';
  $handler->display->display_options['relationships']['field_avantage_target_id']['label'] = 'Avantage';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Pièce jointe */
  $handler->display->display_options['fields']['field_attachment']['id'] = 'field_attachment';
  $handler->display->display_options['fields']['field_attachment']['table'] = 'field_data_field_attachment';
  $handler->display->display_options['fields']['field_attachment']['field'] = 'field_attachment';
  $handler->display->display_options['fields']['field_attachment']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['fields']['field_attachment']['label'] = 'Pièces jointes';
  $handler->display->display_options['fields']['field_attachment']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_attachment']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attachment']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_attachment']['multi_type'] = 'ul';
  /* Sort criterion: Content: Type d&#039;avantage (field_avantage_type) */
  $handler->display->display_options['sorts']['field_avantage_type_tid']['id'] = 'field_avantage_type_tid';
  $handler->display->display_options['sorts']['field_avantage_type_tid']['table'] = 'field_data_field_avantage_type';
  $handler->display->display_options['sorts']['field_avantage_type_tid']['field'] = 'field_avantage_type_tid';
  $handler->display->display_options['sorts']['field_avantage_type_tid']['relationship'] = 'field_avantage_target_id';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_avantage_target_id';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_avantages_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = 'Avantages de %1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'character' => 'character',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'avantage' => 'avantage',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  /* Filter criterion: Field collection item: Validé (field_avantage_valide) */
  $handler->display->display_options['filters']['field_avantage_valide_value']['id'] = 'field_avantage_valide_value';
  $handler->display->display_options['filters']['field_avantage_valide_value']['table'] = 'field_data_field_avantage_valide';
  $handler->display->display_options['filters']['field_avantage_valide_value']['field'] = 'field_avantage_valide_value';
  $handler->display->display_options['filters']['field_avantage_valide_value']['relationship'] = 'field_avantages_value';
  $handler->display->display_options['filters']['field_avantage_valide_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_avantage_valide_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_avantages_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'character' => 'character',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;

  /* Display: Avantages Personnage (Bloc) */
  $handler = $view->new_display('block', 'Avantages Personnage (Bloc)', 'avantages_perso');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Mes bottes (Page) */
  $handler = $view->new_display('page', 'Mes bottes (Page)', 'bottes_perso');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mes bottes';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Vide';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Vous ne disposez d\'aucune botte.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Avantages (field_avantages) */
  $handler->display->display_options['relationships']['field_avantages_value']['id'] = 'field_avantages_value';
  $handler->display->display_options['relationships']['field_avantages_value']['table'] = 'field_data_field_avantages';
  $handler->display->display_options['relationships']['field_avantages_value']['field'] = 'field_avantages_value';
  $handler->display->display_options['relationships']['field_avantages_value']['label'] = 'Avatanges';
  $handler->display->display_options['relationships']['field_avantages_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_avantage_target_id']['id'] = 'field_avantage_target_id';
  $handler->display->display_options['relationships']['field_avantage_target_id']['table'] = 'field_data_field_avantage';
  $handler->display->display_options['relationships']['field_avantage_target_id']['field'] = 'field_avantage_target_id';
  $handler->display->display_options['relationships']['field_avantage_target_id']['relationship'] = 'field_avantages_value';
  $handler->display->display_options['relationships']['field_avantage_target_id']['label'] = 'Avantage';
  /* Relationship: Content: Type d&#039;avantage (field_avantage_type) */
  $handler->display->display_options['relationships']['field_avantage_type_tid']['id'] = 'field_avantage_type_tid';
  $handler->display->display_options['relationships']['field_avantage_type_tid']['table'] = 'field_data_field_avantage_type';
  $handler->display->display_options['relationships']['field_avantage_type_tid']['field'] = 'field_avantage_type_tid';
  $handler->display->display_options['relationships']['field_avantage_type_tid']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['relationships']['field_avantage_type_tid']['label'] = 'TypeAvantage';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Pièce jointe */
  $handler->display->display_options['fields']['field_attachment']['id'] = 'field_attachment';
  $handler->display->display_options['fields']['field_attachment']['table'] = 'field_data_field_attachment';
  $handler->display->display_options['fields']['field_attachment']['field'] = 'field_attachment';
  $handler->display->display_options['fields']['field_attachment']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['fields']['field_attachment']['label'] = 'Pièces jointes';
  $handler->display->display_options['fields']['field_attachment']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_attachment']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_attachment']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attachment']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_attachment']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Incarné par (field_incarnate) */
  $handler->display->display_options['arguments']['field_incarnate_target_id']['id'] = 'field_incarnate_target_id';
  $handler->display->display_options['arguments']['field_incarnate_target_id']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['arguments']['field_incarnate_target_id']['field'] = 'field_incarnate_target_id';
  $handler->display->display_options['arguments']['field_incarnate_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_incarnate_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_incarnate_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_incarnate_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_incarnate_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_incarnate_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_incarnate_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_incarnate_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_incarnate_target_id']['validate_options']['restrict_roles'] = TRUE;
  $handler->display->display_options['arguments']['field_incarnate_target_id']['validate_options']['roles'] = array(
    66570830 => '66570830',
    32775451 => '32775451',
    199742668 => '199742668',
    168020977 => '168020977',
    149933350 => '149933350',
  );
  $handler->display->display_options['arguments']['field_incarnate_target_id']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'character' => 'character',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Validé (field_avantage_valide) */
  $handler->display->display_options['filters']['field_avantage_valide_value']['id'] = 'field_avantage_valide_value';
  $handler->display->display_options['filters']['field_avantage_valide_value']['table'] = 'field_data_field_avantage_valide';
  $handler->display->display_options['filters']['field_avantage_valide_value']['field'] = 'field_avantage_valide_value';
  $handler->display->display_options['filters']['field_avantage_valide_value']['relationship'] = 'field_avantages_value';
  $handler->display->display_options['filters']['field_avantage_valide_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_avantage_valide_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'avantage' => 'avantage',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_avantage_type_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Botte';
  $handler->display->display_options['path'] = 'mes-bottes';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Mes bottes';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Avantages perso Zorgas */
  $handler = $view->new_display('block', 'Avantages perso Zorgas', 'avantages_perso_zorgas');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'avantage' => 'avantage',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Validé (field_avantage_valide) */
  $handler->display->display_options['filters']['field_avantage_valide_value']['id'] = 'field_avantage_valide_value';
  $handler->display->display_options['filters']['field_avantage_valide_value']['table'] = 'field_data_field_avantage_valide';
  $handler->display->display_options['filters']['field_avantage_valide_value']['field'] = 'field_avantage_valide_value';
  $handler->display->display_options['filters']['field_avantage_valide_value']['relationship'] = 'field_avantages_value';
  $handler->display->display_options['filters']['field_avantage_valide_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_avantage_valide_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_avantages_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'character' => 'character',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  $translatables['avantages'] = array(
    t('Master'),
    t('Avantages'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Vide'),
    t('Aucun avantage validé pour le moment.'),
    t('Avatanges'),
    t('Avantage'),
    t('Pièces jointes'),
    t('Tout'),
    t('Avantages de %1'),
    t('Avantages Personnage (Bloc)'),
    t('more'),
    t('Mes bottes (Page)'),
    t('Mes bottes'),
    t('Vous ne disposez d\'aucune botte.'),
    t('TypeAvantage'),
    t('Avantages perso Zorgas'),
  );
  $export['avantages'] = $view;

  return $export;
}
