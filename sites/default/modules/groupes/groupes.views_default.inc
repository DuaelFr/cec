<?php
/**
 * @file
 * groupes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function groupes_views_default_views() {
  $export = array();

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
    66570830 => '66570830',
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
    'path' => 'path',
    'field_alternate_title' => 'field_alternate_title',
    'field_group_type' => 'field_group_type',
    'field_alternate_body' => 'field_alternate_body',
    'field_character' => 'field_character',
    'field_group_is_technical' => 'field_group_is_technical',
    'sid' => 'sid',
    'edit_node' => 'edit_node',
    'nothing' => 'edit_node',
    'sid_1' => 'sid_1',
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
    'field_group_type' => array(
      'sortable' => 0,
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
    'edit_node' => array(
      'align' => '',
      'separator' => ' / ',
      'empty_column' => 0,
    ),
    'nothing' => array(
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
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  /* Champ: Liens custom */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Liens custom';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/admin/cec/evenements/groupe/[nid]">Evenements</a> / <a href="/admin/cec/informations/groupe/[nid]">Informations</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Champ: Etat CSS */
  $handler->display->display_options['fields']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['fields']['sid_1']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid_1']['field'] = 'sid';
  $handler->display->display_options['fields']['sid_1']['ui_name'] = 'Etat CSS';
  $handler->display->display_options['fields']['sid_1']['label'] = '';
  $handler->display->display_options['fields']['sid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sid_1']['transliterate'] = TRUE;
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
    149933350 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['reduce'] = TRUE;

  /* Display: Tous les groupes (Page) */
  $handler = $view->new_display('page', 'Tous les groupes (Page)', 'tous_groupes');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/cec/groupes';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Liste des Groupes';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Par personnage Zorga (Block) */
  $handler = $view->new_display('block', 'Par personnage Zorga (Block)', 'block_by_character');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportement en l'absence de résultats: Global : Zone de texte */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Vide';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Ce personnage n\'appartient à aucun groupe pour le moment.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Contenu : Membres (field_group_members) */
  $handler->display->display_options['relationships']['field_group_members_value']['id'] = 'field_group_members_value';
  $handler->display->display_options['relationships']['field_group_members_value']['table'] = 'field_data_field_group_members';
  $handler->display->display_options['relationships']['field_group_members_value']['field'] = 'field_group_members_value';
  $handler->display->display_options['relationships']['field_group_members_value']['label'] = 'Membres';
  $handler->display->display_options['relationships']['field_group_members_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Champ: Contenu : Groupe technique */
  $handler->display->display_options['fields']['field_group_is_technical']['id'] = 'field_group_is_technical';
  $handler->display->display_options['fields']['field_group_is_technical']['table'] = 'field_data_field_group_is_technical';
  $handler->display->display_options['fields']['field_group_is_technical']['field'] = 'field_group_is_technical';
  /* Champ: Field collection item : Membre secret */
  $handler->display->display_options['fields']['field_member_is_secret']['id'] = 'field_member_is_secret';
  $handler->display->display_options['fields']['field_member_is_secret']['table'] = 'field_data_field_member_is_secret';
  $handler->display->display_options['fields']['field_member_is_secret']['field'] = 'field_member_is_secret';
  $handler->display->display_options['fields']['field_member_is_secret']['relationship'] = 'field_group_members_value';
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
  /* Filtre contextuel: Field collection item : Personnage (field_character) */
  $handler->display->display_options['arguments']['field_character_target_id']['id'] = 'field_character_target_id';
  $handler->display->display_options['arguments']['field_character_target_id']['table'] = 'field_data_field_character';
  $handler->display->display_options['arguments']['field_character_target_id']['field'] = 'field_character_target_id';
  $handler->display->display_options['arguments']['field_character_target_id']['relationship'] = 'field_group_members_value';
  $handler->display->display_options['arguments']['field_character_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_character_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_character_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_character_target_id']['title'] = 'Groupes de %1';
  $handler->display->display_options['arguments']['field_character_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_character_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_character_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_character_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_character_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_character_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_character_target_id']['validate_options']['types'] = array(
    'character' => 'character',
  );
  $handler->display->display_options['arguments']['field_character_target_id']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'group' => 'group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Par personnage PJ (Block) */
  $handler = $view->new_display('block', 'Par personnage PJ (Block)', 'block_by_character_player');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Contenu : Membres (field_group_members) */
  $handler->display->display_options['relationships']['field_group_members_value']['id'] = 'field_group_members_value';
  $handler->display->display_options['relationships']['field_group_members_value']['table'] = 'field_data_field_group_members';
  $handler->display->display_options['relationships']['field_group_members_value']['field'] = 'field_group_members_value';
  $handler->display->display_options['relationships']['field_group_members_value']['label'] = 'Membres';
  $handler->display->display_options['relationships']['field_group_members_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Field collection item : Personnage (field_character) */
  $handler->display->display_options['arguments']['field_character_target_id']['id'] = 'field_character_target_id';
  $handler->display->display_options['arguments']['field_character_target_id']['table'] = 'field_data_field_character';
  $handler->display->display_options['arguments']['field_character_target_id']['field'] = 'field_character_target_id';
  $handler->display->display_options['arguments']['field_character_target_id']['relationship'] = 'field_group_members_value';
  $handler->display->display_options['arguments']['field_character_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_character_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_character_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_character_target_id']['title'] = 'Groupes de %1';
  $handler->display->display_options['arguments']['field_character_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_character_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_character_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_character_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_character_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_character_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_character_target_id']['validate_options']['types'] = array(
    'character' => 'character',
  );
  $handler->display->display_options['arguments']['field_character_target_id']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'group' => 'group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Groupe technique (field_group_is_technical) */
  $handler->display->display_options['filters']['field_group_is_technical_value']['id'] = 'field_group_is_technical_value';
  $handler->display->display_options['filters']['field_group_is_technical_value']['table'] = 'field_data_field_group_is_technical';
  $handler->display->display_options['filters']['field_group_is_technical_value']['field'] = 'field_group_is_technical_value';
  $handler->display->display_options['filters']['field_group_is_technical_value']['value'] = array(
    0 => '0',
  );
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Critère de filtrage: Processus : Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    10 => '10',
  );
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
    t('<a href="/admin/cec/evenements/groupe/[nid]">Evenements</a> / <a href="/admin/cec/informations/groupe/[nid]">Informations</a>'),
    t('Titre'),
    t('État actuel'),
    t('Tous les groupes (Page)'),
    t('Par personnage Zorga (Block)'),
    t('Ce personnage n\'appartient à aucun groupe pour le moment.'),
    t('Membre secret'),
    t('Tout'),
    t('Groupes de %1'),
    t('Par personnage PJ (Block)'),
  );
  $export['admin_groupes'] = $view;

  $view = new view();
  $view->name = 'groups';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Groupes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    32775451 => '32775451',
    66570830 => '66570830',
    199742668 => '199742668',
    168020977 => '168020977',
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
      'group' => 'group',
      'character' => 'character',
      'news' => 0,
      'avantage' => 0,
      'event' => 0,
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
  /* Comportement en l'absence de résultats: Global : Zone de texte */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Vide';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Ce personnage n\'appartient à aucun groupe pour le moment.';
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
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Lien */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Critère de tri: Contenu : Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filtre contextuel: Contenu : Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_character_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'character' => 'character',
  );
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'group' => 'group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Processus : Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  /* Critère de filtrage: Contenu : Groupe technique (field_group_is_technical) */
  $handler->display->display_options['filters']['field_group_is_technical_value']['id'] = 'field_group_is_technical_value';
  $handler->display->display_options['filters']['field_group_is_technical_value']['table'] = 'field_data_field_group_is_technical';
  $handler->display->display_options['filters']['field_group_is_technical_value']['field'] = 'field_group_is_technical_value';
  $handler->display->display_options['filters']['field_group_is_technical_value']['value'] = array(
    0 => '0',
  );

  /* Display: Groupes Personnage (Bloc) */
  $handler = $view->new_display('block', 'Groupes Personnage (Bloc)', 'groupes_perso');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Membres Groupe (Bloc) */
  $handler = $view->new_display('block', 'Membres Groupe (Bloc)', 'membres_groupe');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Membres connus du Groupe';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportement en l'absence de résultats: Global : Zone de texte */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Vide';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Aucun des membres de ce groupe n\'est connu.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Relation: Entity Reference : Referenced Entity */
  $handler->display->display_options['relationships']['field_incarnate_target_id']['id'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['field'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['relationship'] = 'field_character_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['label'] = 'Joueur';
  /* Relation: Utilisateur : Profil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['profile']['label'] = 'ProfilAdmin';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'inscription_administrative' => 'inscription_administrative',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_character_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Champ : Photo */
  $handler->display->display_options['fields']['field_photo_1']['id'] = 'field_photo_1';
  $handler->display->display_options['fields']['field_photo_1']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo_1']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_photo_1']['label'] = '';
  $handler->display->display_options['fields']['field_photo_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_photo_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_1']['settings'] = array(
    'image_style' => 'trombinoscope',
    'image_link' => '',
  );
  /* Champ: Champ : Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['relationship'] = 'field_character_target_id';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['empty'] = '[field_photo_1]';
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'trombinoscope',
    'image_link' => '',
  );
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_character_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_character_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'group' => 'group',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'group' => 'group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Processus : Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_character_target_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'character' => 'character',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Critère de filtrage: Processus : Current state */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['relationship'] = 'field_character_target_id';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['sid_1']['group'] = 1;
  /* Critère de filtrage: Field collection item : Membre secret (field_member_is_secret) */
  $handler->display->display_options['filters']['field_member_is_secret_value']['id'] = 'field_member_is_secret_value';
  $handler->display->display_options['filters']['field_member_is_secret_value']['table'] = 'field_data_field_member_is_secret';
  $handler->display->display_options['filters']['field_member_is_secret_value']['field'] = 'field_member_is_secret_value';
  $handler->display->display_options['filters']['field_member_is_secret_value']['relationship'] = 'field_group_members_value';
  $handler->display->display_options['filters']['field_member_is_secret_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_member_is_secret_value']['group'] = 1;
  $translatables['groups'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Vide'),
    t('Ce personnage n\'appartient à aucun groupe pour le moment.'),
    t('Membres'),
    t('Personnage'),
    t('Tout'),
    t('Groupes Personnage (Bloc)'),
    t('Membres Groupe (Bloc)'),
    t('Membres connus du Groupe'),
    t('Aucun des membres de ce groupe n\'est connu.'),
    t('Joueur'),
    t('ProfilAdmin'),
    t('[field_photo_1]'),
  );
  $export['groups'] = $view;

  return $export;
}
