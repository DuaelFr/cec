<?php
/**
 * @file
 * sequences.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sequences_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_sequences';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin Séquences';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Timeline (Séquences)';
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
    'field_sequence_type' => 'field_sequence_type',
    'field_dates' => 'field_dates',
    'field_dates_1' => 'field_dates_1',
    'field_intrigue' => 'field_intrigue',
    'sid' => 'sid',
    'field_opus' => 'field_opus',
    'edit_node' => 'edit_node',
    'sid_1' => 'sid_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_dates';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sequence_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intrigue' => array(
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Vide';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Aucune séquence pour le moment.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Nœud: Type de séquence */
  $handler->display->display_options['fields']['field_sequence_type']['id'] = 'field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['table'] = 'field_data_field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['field'] = 'field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Nœud: Horaires */
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
  /* Field: Nœud: Horaires */
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
  /* Field: Nœud: Intrigue */
  $handler->display->display_options['fields']['field_intrigue']['id'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['field'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_intrigue']['group_column'] = 'entity_id';
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Field: Nœud: Opus */
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
  /* Sort criterion: Nœud: Horaires -  start date (field_dates) */
  $handler->display->display_options['sorts']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['sorts']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value']['field'] = 'field_dates_value';
  $handler->display->display_options['sorts']['field_dates_value']['order'] = 'DESC';
  /* Sort criterion: Nœud: Horaires - end date (field_dates:value2) */
  $handler->display->display_options['sorts']['field_dates_value2']['id'] = 'field_dates_value2';
  $handler->display->display_options['sorts']['field_dates_value2']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value2']['field'] = 'field_dates_value2';
  $handler->display->display_options['sorts']['field_dates_value2']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sequence' => 'sequence',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
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
  /* Filter criterion: Nœud: Type de séquence (field_sequence_type) */
  $handler->display->display_options['filters']['field_sequence_type_tid']['id'] = 'field_sequence_type_tid';
  $handler->display->display_options['filters']['field_sequence_type_tid']['table'] = 'field_data_field_sequence_type';
  $handler->display->display_options['filters']['field_sequence_type_tid']['field'] = 'field_sequence_type_tid';
  $handler->display->display_options['filters']['field_sequence_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_sequence_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sequence_type_tid']['expose']['operator_id'] = 'field_sequence_type_tid_op';
  $handler->display->display_options['filters']['field_sequence_type_tid']['expose']['label'] = 'Type de séquence';
  $handler->display->display_options['filters']['field_sequence_type_tid']['expose']['operator'] = 'field_sequence_type_tid_op';
  $handler->display->display_options['filters']['field_sequence_type_tid']['expose']['identifier'] = 'field_sequence_type_tid';
  $handler->display->display_options['filters']['field_sequence_type_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_sequence_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sequence_type_tid']['vocabulary'] = 'sequence_type';
  $handler->display->display_options['filters']['field_sequence_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Nœud: Horaires -  start date (field_dates) */
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
  /* Filter criterion: Nœud: Horaires - end date (field_dates:value2) */
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
  /* Filter criterion: Nœud: Intrigue (field_intrigue) */
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
  /* Filter criterion: Workflow: Current state */
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
  /* Filter criterion: Nœud: Opus (field_opus) */
  $handler->display->display_options['filters']['field_opus_value']['id'] = 'field_opus_value';
  $handler->display->display_options['filters']['field_opus_value']['table'] = 'field_data_field_opus';
  $handler->display->display_options['filters']['field_opus_value']['field'] = 'field_opus_value';
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

  /* Display: Toutes les séquences (Page) */
  $handler = $view->new_display('page', 'Toutes les séquences (Page)', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/cec/sequences';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Liste des Séquences';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Print séquences list (Page) */
  $handler = $view->new_display('page', 'Print séquences list (Page)', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_sequence_type' => 'field_sequence_type',
    'field_dates' => 'field_dates',
    'field_dates_1' => 'field_dates_1',
    'field_intrigue' => 'field_intrigue',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sequence_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_intrigue' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titre';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Nœud: Type de séquence */
  $handler->display->display_options['fields']['field_sequence_type']['id'] = 'field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['table'] = 'field_data_field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['field'] = 'field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Nœud: Horaires */
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
  /* Field: Nœud: Horaires */
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
  /* Field: Nœud: Intrigue */
  $handler->display->display_options['fields']['field_intrigue']['id'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['field'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_intrigue']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_intrigue']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_intrigue']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nœud: Horaires -  start date (field_dates) */
  $handler->display->display_options['sorts']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['sorts']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value']['field'] = 'field_dates_value';
  /* Sort criterion: Nœud: Horaires - end date (field_dates:value2) */
  $handler->display->display_options['sorts']['field_dates_value2']['id'] = 'field_dates_value2';
  $handler->display->display_options['sorts']['field_dates_value2']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value2']['field'] = 'field_dates_value2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sequence' => 'sequence',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Nœud: Opus (field_opus) */
  $handler->display->display_options['filters']['field_opus_value']['id'] = 'field_opus_value';
  $handler->display->display_options['filters']['field_opus_value']['table'] = 'field_data_field_opus';
  $handler->display->display_options['filters']['field_opus_value']['field'] = 'field_opus_value';
  $handler->display->display_options['filters']['field_opus_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_opus_value']['expose']['operator_id'] = 'field_opus_value_op';
  $handler->display->display_options['filters']['field_opus_value']['expose']['label'] = 'Opus';
  $handler->display->display_options['filters']['field_opus_value']['expose']['operator'] = 'field_opus_value_op';
  $handler->display->display_options['filters']['field_opus_value']['expose']['identifier'] = 'field_opus_value';
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
  $handler->display->display_options['path'] = 'admin/cec/sequences-print-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Impression Liste Séquences';
  $handler->display->display_options['menu']['weight'] = '16';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Print séquences (Page) */
  $handler = $view->new_display('page', 'Print séquences (Page)', 'page_print');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'page-break-me';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'print';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_dates|field_dates_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'print';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Nœud: Type de séquence */
  $handler->display->display_options['fields']['field_sequence_type']['id'] = 'field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['table'] = 'field_data_field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['field'] = 'field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Nœud: Horaires */
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
  /* Field: Nœud: Horaires */
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
  /* Field: Nœud: Intrigue */
  $handler->display->display_options['fields']['field_intrigue']['id'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['field'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_intrigue']['group_column'] = 'entity_id';
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nœud: Horaires -  start date (field_dates) */
  $handler->display->display_options['sorts']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['sorts']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value']['field'] = 'field_dates_value';
  /* Sort criterion: Nœud: Horaires - end date (field_dates:value2) */
  $handler->display->display_options['sorts']['field_dates_value2']['id'] = 'field_dates_value2';
  $handler->display->display_options['sorts']['field_dates_value2']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value2']['field'] = 'field_dates_value2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sequence' => 'sequence',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Nœud: Opus (field_opus) */
  $handler->display->display_options['filters']['field_opus_value']['id'] = 'field_opus_value';
  $handler->display->display_options['filters']['field_opus_value']['table'] = 'field_data_field_opus';
  $handler->display->display_options['filters']['field_opus_value']['field'] = 'field_opus_value';
  $handler->display->display_options['filters']['field_opus_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_opus_value']['expose']['operator_id'] = 'field_opus_value_op';
  $handler->display->display_options['filters']['field_opus_value']['expose']['label'] = 'Opus';
  $handler->display->display_options['filters']['field_opus_value']['expose']['operator'] = 'field_opus_value_op';
  $handler->display->display_options['filters']['field_opus_value']['expose']['identifier'] = 'field_opus_value';
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
  $handler->display->display_options['path'] = 'admin/cec/sequences-print';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Impression Séquences';
  $handler->display->display_options['menu']['weight'] = '15';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Par intrigue (Bloc) */
  $handler = $view->new_display('block', 'Par intrigue (Bloc)', 'block_by_intrigue');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Nœud: Type de séquence */
  $handler->display->display_options['fields']['field_sequence_type']['id'] = 'field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['table'] = 'field_data_field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['field'] = 'field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Nœud: Horaires */
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
  /* Field: Nœud: Horaires */
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
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Nœud: Intrigue (field_intrigue) */
  $handler->display->display_options['arguments']['field_intrigue_target_id']['id'] = 'field_intrigue_target_id';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['field'] = 'field_intrigue_target_id';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_intrigue_target_id']['title'] = 'Séquences %1';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sequence' => 'sequence',
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Nœud: Type de séquence */
  $handler->display->display_options['fields']['field_sequence_type']['id'] = 'field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['table'] = 'field_data_field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['field'] = 'field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sequence_type']['empty'] = '- Aucun -';
  $handler->display->display_options['fields']['field_sequence_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Nœud: Horaires */
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
  /* Field: Nœud: Horaires */
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
  /* Field: Nœud: Intrigue */
  $handler->display->display_options['fields']['field_intrigue']['id'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['field'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intrigue']['settings'] = array(
    'link' => 0,
  );
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  /* Field: Champs organisés */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Champs organisés';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="cec-columns">
  <div class="cec-column">
Type : [field_sequence_type]<br />
Intrigue : [field_intrigue]<br />
Etat : [sid]
  </div>
  <div class="cec-column">
Date de début : [field_dates]<br />
Date de fin : [field_dates_1]
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Nœud: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Nœud: Intrigue (field_intrigue) */
  $handler->display->display_options['arguments']['field_intrigue_target_id']['id'] = 'field_intrigue_target_id';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['field'] = 'field_intrigue_target_id';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_intrigue_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_intrigue_target_id']['title'] = 'Séquences %1';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sequence' => 'sequence',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/cec/sequences/intrigue/%';
  $handler->display->display_options['menu']['title'] = 'Liste des Séquences';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Par personnage (Bloc) */
  $handler = $view->new_display('block', 'Par personnage (Bloc)', 'block_by_character');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Nœud: Type de séquence */
  $handler->display->display_options['fields']['field_sequence_type']['id'] = 'field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['table'] = 'field_data_field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['field'] = 'field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Nœud: Horaires */
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
  /* Field: Nœud: Horaires */
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
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Nœud: Joueurs (field_players) */
  $handler->display->display_options['arguments']['field_players_target_id']['id'] = 'field_players_target_id';
  $handler->display->display_options['arguments']['field_players_target_id']['table'] = 'field_data_field_players';
  $handler->display->display_options['arguments']['field_players_target_id']['field'] = 'field_players_target_id';
  $handler->display->display_options['arguments']['field_players_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_players_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_players_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_players_target_id']['title'] = 'Séquences %1';
  $handler->display->display_options['arguments']['field_players_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_players_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_players_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_players_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_players_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_players_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_players_target_id']['validate_options']['types'] = array(
    'character' => 'character',
  );
  $handler->display->display_options['arguments']['field_players_target_id']['validate']['fail'] = 'empty';
  /* Contextual filter: Nœud: Opus (field_opus) */
  $handler->display->display_options['arguments']['field_opus_value']['id'] = 'field_opus_value';
  $handler->display->display_options['arguments']['field_opus_value']['table'] = 'field_data_field_opus';
  $handler->display->display_options['arguments']['field_opus_value']['field'] = 'field_opus_value';
  $handler->display->display_options['arguments']['field_opus_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_opus_value']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_opus_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_opus_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_opus_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_opus_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_opus_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sequence' => 'sequence',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Nœud: Type de séquence */
  $handler->display->display_options['fields']['field_sequence_type']['id'] = 'field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['table'] = 'field_data_field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['field'] = 'field_sequence_type';
  $handler->display->display_options['fields']['field_sequence_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sequence_type']['empty'] = '- Aucun -';
  $handler->display->display_options['fields']['field_sequence_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Nœud: Horaires */
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
  /* Field: Nœud: Horaires */
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
  /* Field: Nœud: Intrigue */
  $handler->display->display_options['fields']['field_intrigue']['id'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['field'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intrigue']['settings'] = array(
    'link' => 0,
  );
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  /* Field: Champs organisés */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Champs organisés';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="cec-columns">
  <div class="cec-column">
Type : [field_sequence_type]<br />
Intrigue : [field_intrigue]<br />
Etat : [sid]
  </div>
  <div class="cec-column">
Date de début : [field_dates]<br />
Date de fin : [field_dates_1]
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Nœud: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Nœud: Joueurs (field_players) */
  $handler->display->display_options['arguments']['field_players_target_id']['id'] = 'field_players_target_id';
  $handler->display->display_options['arguments']['field_players_target_id']['table'] = 'field_data_field_players';
  $handler->display->display_options['arguments']['field_players_target_id']['field'] = 'field_players_target_id';
  $handler->display->display_options['arguments']['field_players_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_players_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_players_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_players_target_id']['title'] = 'Séquences %1';
  $handler->display->display_options['arguments']['field_players_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_players_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_players_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_players_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_players_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_players_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_players_target_id']['validate_options']['types'] = array(
    'character' => 'character',
  );
  $handler->display->display_options['arguments']['field_players_target_id']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sequence' => 'sequence',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/cec/sequences/personnage/%';
  $handler->display->display_options['menu']['title'] = 'Liste des Séquences';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['admin_sequences'] = array(
    t('Master'),
    t('Timeline (Séquences)'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Vide'),
    t('Aucune séquence pour le moment.'),
    t('Title'),
    t('Type de séquence'),
    t('Date de début'),
    t('Date de fin'),
    t('Intrigue'),
    t('Current state'),
    t('Opus'),
    t('Actions'),
    t('modifier'),
    t('Titre'),
    t('A partir du'),
    t('Jusqu\'au'),
    t('État actuel'),
    t('Toutes les séquences (Page)'),
    t('more'),
    t('Print séquences list (Page)'),
    t('Print séquences (Page)'),
    t('Par intrigue (Bloc)'),
    t('Tout'),
    t('Séquences %1'),
    t('Par intrigue (Page)'),
    t('- Aucun -'),
    t('<div class="cec-columns">
  <div class="cec-column">
Type : [field_sequence_type]<br />
Intrigue : [field_intrigue]<br />
Etat : [sid]
  </div>
  <div class="cec-column">
Date de début : [field_dates]<br />
Date de fin : [field_dates_1]
  </div>
</div>'),
    t('Par personnage (Bloc)'),
    t('Par personnage (Page)'),
  );
  $export['admin_sequences'] = $view;

  $view = new view();
  $view->name = 'export_sequences';
  $view->description = 'Export des séquences';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export Sequences';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Export Séquence étape 2 PNJs';
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
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nœud: Type de séquence (field_sequence_type) */
  $handler->display->display_options['relationships']['field_sequence_type_tid']['id'] = 'field_sequence_type_tid';
  $handler->display->display_options['relationships']['field_sequence_type_tid']['table'] = 'field_data_field_sequence_type';
  $handler->display->display_options['relationships']['field_sequence_type_tid']['field'] = 'field_sequence_type_tid';
  $handler->display->display_options['relationships']['field_sequence_type_tid']['label'] = 'Type';
  /* Relationship: Nœud: PNJ (field_nonplayers) */
  $handler->display->display_options['relationships']['field_nonplayers_value']['id'] = 'field_nonplayers_value';
  $handler->display->display_options['relationships']['field_nonplayers_value']['table'] = 'field_data_field_nonplayers';
  $handler->display->display_options['relationships']['field_nonplayers_value']['field'] = 'field_nonplayers_value';
  $handler->display->display_options['relationships']['field_nonplayers_value']['label'] = 'PNJ';
  $handler->display->display_options['relationships']['field_nonplayers_value']['delta'] = '-1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID Séquence';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_sequence_type_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Type';
  /* Field: Nœud: Horaires */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = 'Début';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Nœud: Horaires */
  $handler->display->display_options['fields']['field_dates_1']['id'] = 'field_dates_1';
  $handler->display->display_options['fields']['field_dates_1']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates_1']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates_1']['label'] = 'Fin';
  $handler->display->display_options['fields']['field_dates_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Nœud: Intrigue */
  $handler->display->display_options['fields']['field_intrigue']['id'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['field'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['label'] = 'Intrigue 1';
  $handler->display->display_options['fields']['field_intrigue']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_intrigue']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_intrigue']['delta_offset'] = '0';
  /* Field: Nœud: Intrigue */
  $handler->display->display_options['fields']['field_intrigue_1']['id'] = 'field_intrigue_1';
  $handler->display->display_options['fields']['field_intrigue_1']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['fields']['field_intrigue_1']['field'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue_1']['label'] = 'Intrigue 2';
  $handler->display->display_options['fields']['field_intrigue_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_intrigue_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_intrigue_1']['delta_offset'] = '1';
  /* Field: Nœud: Intrigue */
  $handler->display->display_options['fields']['field_intrigue_2']['id'] = 'field_intrigue_2';
  $handler->display->display_options['fields']['field_intrigue_2']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['fields']['field_intrigue_2']['field'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue_2']['label'] = 'Intrigue 3';
  $handler->display->display_options['fields']['field_intrigue_2']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_intrigue_2']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_intrigue_2']['delta_offset'] = '2';
  /* Field: Nœud: Lieu */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Rôle */
  $handler->display->display_options['fields']['field_nonplayer_role']['id'] = 'field_nonplayer_role';
  $handler->display->display_options['fields']['field_nonplayer_role']['table'] = 'field_data_field_nonplayer_role';
  $handler->display->display_options['fields']['field_nonplayer_role']['field'] = 'field_nonplayer_role';
  $handler->display->display_options['fields']['field_nonplayer_role']['relationship'] = 'field_nonplayers_value';
  $handler->display->display_options['fields']['field_nonplayer_role']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Incarné par */
  $handler->display->display_options['fields']['field_incarnate_npc']['id'] = 'field_incarnate_npc';
  $handler->display->display_options['fields']['field_incarnate_npc']['table'] = 'field_data_field_incarnate_npc';
  $handler->display->display_options['fields']['field_incarnate_npc']['field'] = 'field_incarnate_npc';
  $handler->display->display_options['fields']['field_incarnate_npc']['relationship'] = 'field_nonplayers_value';
  $handler->display->display_options['fields']['field_incarnate_npc']['settings'] = array(
    'link' => 0,
  );
  /* Field: Nœud: Matériel */
  $handler->display->display_options['fields']['field_matos']['id'] = 'field_matos';
  $handler->display->display_options['fields']['field_matos']['table'] = 'field_data_field_matos';
  $handler->display->display_options['fields']['field_matos']['field'] = 'field_matos';
  $handler->display->display_options['fields']['field_matos']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_matos']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_matos']['delta_offset'] = '0';
  /* Contextual filter: Nœud: Opus (field_opus) */
  $handler->display->display_options['arguments']['field_opus_value']['id'] = 'field_opus_value';
  $handler->display->display_options['arguments']['field_opus_value']['table'] = 'field_data_field_opus';
  $handler->display->display_options['arguments']['field_opus_value']['field'] = 'field_opus_value';
  $handler->display->display_options['arguments']['field_opus_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_opus_value']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_opus_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_opus_value']['default_argument_options']['argument'] = 'acte3';
  $handler->display->display_options['arguments']['field_opus_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_opus_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_opus_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_opus_value']['limit'] = '0';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sequence' => 'sequence',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_nonplayer_role_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';

  /* Display: Export Sequences root */
  $handler = $view->new_display('views_data_export', 'Export Sequences root', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Export Séquence étape 1';
  $handler->display->display_options['display_description'] = 'Etape 1';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'export-seq-root.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nœud: Type de séquence (field_sequence_type) */
  $handler->display->display_options['relationships']['field_sequence_type_tid']['id'] = 'field_sequence_type_tid';
  $handler->display->display_options['relationships']['field_sequence_type_tid']['table'] = 'field_data_field_sequence_type';
  $handler->display->display_options['relationships']['field_sequence_type_tid']['field'] = 'field_sequence_type_tid';
  $handler->display->display_options['relationships']['field_sequence_type_tid']['label'] = 'Type';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_sequence_type_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Type';
  /* Field: Nœud: Horaires */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = 'Debut';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Nœud: Horaires */
  $handler->display->display_options['fields']['field_dates_1']['id'] = 'field_dates_1';
  $handler->display->display_options['fields']['field_dates_1']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates_1']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates_1']['label'] = 'Fin';
  $handler->display->display_options['fields']['field_dates_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Nœud: Intrigue */
  $handler->display->display_options['fields']['field_intrigue']['id'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['field'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue']['label'] = 'Intrigue1';
  $handler->display->display_options['fields']['field_intrigue']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_intrigue']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_intrigue']['delta_offset'] = '0';
  /* Field: Nœud: Intrigue */
  $handler->display->display_options['fields']['field_intrigue_1']['id'] = 'field_intrigue_1';
  $handler->display->display_options['fields']['field_intrigue_1']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['fields']['field_intrigue_1']['field'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue_1']['label'] = 'Intrigue2';
  $handler->display->display_options['fields']['field_intrigue_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_intrigue_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_intrigue_1']['delta_offset'] = '1';
  /* Field: Nœud: Intrigue */
  $handler->display->display_options['fields']['field_intrigue_2']['id'] = 'field_intrigue_2';
  $handler->display->display_options['fields']['field_intrigue_2']['table'] = 'field_data_field_intrigue';
  $handler->display->display_options['fields']['field_intrigue_2']['field'] = 'field_intrigue';
  $handler->display->display_options['fields']['field_intrigue_2']['label'] = 'Intrigue3';
  $handler->display->display_options['fields']['field_intrigue_2']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_intrigue_2']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_intrigue_2']['delta_offset'] = '2';
  /* Field: Nœud: Lieu */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sequence' => 'sequence',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_nonplayer_role_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/cec/export/sequences_root/%';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Export Sequences PNJ */
  $handler = $view->new_display('views_data_export', 'Export Sequences PNJ', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Export Séquence étape 2 PNJs';
  $handler->display->display_options['display_description'] = 'Etape 1';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'export-seq-pnj.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nœud: Type de séquence (field_sequence_type) */
  $handler->display->display_options['relationships']['field_sequence_type_tid']['id'] = 'field_sequence_type_tid';
  $handler->display->display_options['relationships']['field_sequence_type_tid']['table'] = 'field_data_field_sequence_type';
  $handler->display->display_options['relationships']['field_sequence_type_tid']['field'] = 'field_sequence_type_tid';
  $handler->display->display_options['relationships']['field_sequence_type_tid']['label'] = 'Type';
  /* Relationship: Nœud: PNJ (field_nonplayers) */
  $handler->display->display_options['relationships']['field_nonplayers_value']['id'] = 'field_nonplayers_value';
  $handler->display->display_options['relationships']['field_nonplayers_value']['table'] = 'field_data_field_nonplayers';
  $handler->display->display_options['relationships']['field_nonplayers_value']['field'] = 'field_nonplayers_value';
  $handler->display->display_options['relationships']['field_nonplayers_value']['label'] = 'PNJ';
  $handler->display->display_options['relationships']['field_nonplayers_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field collection item: Rôle */
  $handler->display->display_options['fields']['field_nonplayer_role']['id'] = 'field_nonplayer_role';
  $handler->display->display_options['fields']['field_nonplayer_role']['table'] = 'field_data_field_nonplayer_role';
  $handler->display->display_options['fields']['field_nonplayer_role']['field'] = 'field_nonplayer_role';
  $handler->display->display_options['fields']['field_nonplayer_role']['relationship'] = 'field_nonplayers_value';
  $handler->display->display_options['fields']['field_nonplayer_role']['label'] = 'Role';
  $handler->display->display_options['fields']['field_nonplayer_role']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Incarné par */
  $handler->display->display_options['fields']['field_incarnate_npc']['id'] = 'field_incarnate_npc';
  $handler->display->display_options['fields']['field_incarnate_npc']['table'] = 'field_data_field_incarnate_npc';
  $handler->display->display_options['fields']['field_incarnate_npc']['field'] = 'field_incarnate_npc';
  $handler->display->display_options['fields']['field_incarnate_npc']['relationship'] = 'field_nonplayers_value';
  $handler->display->display_options['fields']['field_incarnate_npc']['label'] = 'IncarnePar';
  $handler->display->display_options['fields']['field_incarnate_npc']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['path'] = 'admin/cec/export/sequences_pnj/%';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Export Sequences Matos */
  $handler = $view->new_display('views_data_export', 'Export Sequences Matos', 'views_data_export_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Export Séquence étape 3 Matos';
  $handler->display->display_options['display_description'] = 'Matos';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'export-seq-matos.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nœud: Type de séquence (field_sequence_type) */
  $handler->display->display_options['relationships']['field_sequence_type_tid']['id'] = 'field_sequence_type_tid';
  $handler->display->display_options['relationships']['field_sequence_type_tid']['table'] = 'field_data_field_sequence_type';
  $handler->display->display_options['relationships']['field_sequence_type_tid']['field'] = 'field_sequence_type_tid';
  $handler->display->display_options['relationships']['field_sequence_type_tid']['label'] = 'Type';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Nœud: Matériel */
  $handler->display->display_options['fields']['field_matos']['id'] = 'field_matos';
  $handler->display->display_options['fields']['field_matos']['table'] = 'field_data_field_matos';
  $handler->display->display_options['fields']['field_matos']['field'] = 'field_matos';
  $handler->display->display_options['fields']['field_matos']['label'] = 'Materiel';
  $handler->display->display_options['fields']['field_matos']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_matos']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_matos']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'admin/cec/export/sequences_matos/%';
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['export_sequences'] = array(
    t('Master'),
    t('Export Séquence étape 2 PNJs'),
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
    t('Type'),
    t('PNJ'),
    t('ID Séquence'),
    t('Title'),
    t('Début'),
    t('Fin'),
    t('Intrigue 1'),
    t('Intrigue 2'),
    t('Intrigue 3'),
    t('Lieu'),
    t('Rôle'),
    t('Incarné par'),
    t('Matériel'),
    t('Tout'),
    t('Export Sequences root'),
    t('Export Séquence étape 1'),
    t('Etape 1'),
    t('more'),
    t('ID'),
    t('Debut'),
    t('Intrigue1'),
    t('Intrigue2'),
    t('Intrigue3'),
    t('Export Sequences PNJ'),
    t('Role'),
    t('IncarnePar'),
    t('Export Sequences Matos'),
    t('Export Séquence étape 3 Matos'),
    t('Matos'),
    t('Materiel'),
  );
  $export['export_sequences'] = $view;

  return $export;
}
