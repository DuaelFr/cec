<?php
/**
 * @file
 * intrigues.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function intrigues_views_default_views() {
  $export = array();

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
  /* Champ: Contenu : Thématique d'intrigue */
  $handler->display->display_options['fields']['field_intrigue_theme']['id'] = 'field_intrigue_theme';
  $handler->display->display_options['fields']['field_intrigue_theme']['table'] = 'field_data_field_intrigue_theme';
  $handler->display->display_options['fields']['field_intrigue_theme']['field'] = 'field_intrigue_theme';
  $handler->display->display_options['fields']['field_intrigue_theme']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Contenu : Description */
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
  /* Critère de filtrage: Contenu : Thématique d&#039;intrigue (field_intrigue_theme) */
  $handler->display->display_options['filters']['field_intrigue_theme_tid']['id'] = 'field_intrigue_theme_tid';
  $handler->display->display_options['filters']['field_intrigue_theme_tid']['table'] = 'field_data_field_intrigue_theme';
  $handler->display->display_options['filters']['field_intrigue_theme_tid']['field'] = 'field_intrigue_theme_tid';
  $handler->display->display_options['filters']['field_intrigue_theme_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_intrigue_theme_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_intrigue_theme_tid']['expose']['operator_id'] = 'field_intrigue_theme_tid_op';
  $handler->display->display_options['filters']['field_intrigue_theme_tid']['expose']['label'] = 'Thématique d\'intrigue';
  $handler->display->display_options['filters']['field_intrigue_theme_tid']['expose']['operator'] = 'field_intrigue_theme_tid_op';
  $handler->display->display_options['filters']['field_intrigue_theme_tid']['expose']['identifier'] = 'field_intrigue_theme_tid';
  $handler->display->display_options['filters']['field_intrigue_theme_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_intrigue_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_intrigue_theme_tid']['vocabulary'] = 'intrigue_theme';
  $handler->display->display_options['filters']['field_intrigue_theme_tid']['hierarchy'] = 1;
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
    t('Thématique d\'intrigue'),
    t('Résumé'),
    t('Etat actuel'),
    t('Actions'),
    t('modifier'),
    t('Titre'),
    t('Toutes les Intrigues (Page)'),
  );
  $export['admin_intrigues'] = $view;

  return $export;
}
