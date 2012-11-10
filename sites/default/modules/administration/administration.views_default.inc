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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    66570830 => '66570830',
  );
  $handler->display->display_options['cache']['type'] = 'none';
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
  $handler->display->display_options['empty']['area']['content'] = 'Vous n\'appartenez à aucun groupe pour le moment.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relation: Contenu : Membres (field_group_members) */
  $handler->display->display_options['relationships']['field_group_members_value']['id'] = 'field_group_members_value';
  $handler->display->display_options['relationships']['field_group_members_value']['table'] = 'field_data_field_group_members';
  $handler->display->display_options['relationships']['field_group_members_value']['field'] = 'field_group_members_value';
  $handler->display->display_options['relationships']['field_group_members_value']['label'] = 'Membres';
  $handler->display->display_options['relationships']['field_group_members_value']['delta'] = '-1';
  /* Relation: Entity Reference : Entité référencée */
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
  /* Champ: Processus : État actuel */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Avancement';
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
  /* Critère de filtrage: Processus : État actuel */
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
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tous les Groupes';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    168020977 => '168020977',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_group_is_technical' => 'field_group_is_technical',
    'field_alternate_title' => 'field_alternate_title',
    'field_alternate_body' => 'field_alternate_body',
    'field_character' => 'field_character',
    'sid' => 'sid',
  );
  $handler->display->display_options['style_options']['default'] = 'field_alternate_title';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
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
    'field_alternate_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_alternate_body' => array(
      'sortable' => 0,
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
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'admin/cec/groupes';
  $translatables['admin_groupes'] = array(
    t('Master'),
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
    t('Descriptif orga'),
    t('Personnages'),
    t('Groupe technique'),
    t('Avancement'),
    t('Titre'),
    t('État actuel'),
    t('Tous les groupes (Page)'),
    t('Tous les Groupes'),
  );
  $export['admin_groupes'] = $view;

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
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'character' => 'character',
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
  $translatables['admin_personnages'] = array(
    t('Master'),
    t('Tous les Personnages'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Titre'),
    t('Tous les Personnages (Page)'),
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
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
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
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
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
