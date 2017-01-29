<?php
/**
 * @file
 * personnages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function personnages_views_default_views() {
  $export = array();

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
  $handler->display->display_options['style_options']['row_class'] = 'state-[sid_1]';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid_1' => 'nid_1',
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
    'field_opus' => 'field_opus',
    'edit_node' => 'edit_node',
    'nothing' => 'edit_node',
    'sid_1' => 'sid_1',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'nid_1' => array(
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Aucun personnage ne correspond à cette recherche.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_character_field_collection_item']['id'] = 'reverse_field_character_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_character_field_collection_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_character_field_collection_item']['field'] = 'reverse_field_character_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_character_field_collection_item']['label'] = 'Groupe';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_incarnate_target_id']['id'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['field'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['label'] = 'Joueur';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['profile']['label'] = 'ProfilAdministratif';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'inscription_administrative' => 'inscription_administrative',
  );
  /* Relationship: Content: Avantages (field_avantages) */
  $handler->display->display_options['relationships']['field_avantages_value']['id'] = 'field_avantages_value';
  $handler->display->display_options['relationships']['field_avantages_value']['table'] = 'field_data_field_avantages';
  $handler->display->display_options['relationships']['field_avantages_value']['field'] = 'field_avantages_value';
  $handler->display->display_options['relationships']['field_avantages_value']['label'] = 'Avantages';
  $handler->display->display_options['relationships']['field_avantages_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_avantage_target_id']['id'] = 'field_avantage_target_id';
  $handler->display->display_options['relationships']['field_avantage_target_id']['table'] = 'field_data_field_avantage';
  $handler->display->display_options['relationships']['field_avantage_target_id']['field'] = 'field_avantage_target_id';
  $handler->display->display_options['relationships']['field_avantage_target_id']['relationship'] = 'field_avantages_value';
  $handler->display->display_options['relationships']['field_avantage_target_id']['label'] = 'Avantage';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nom du personnage';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_character_type']['id'] = 'field_character_type';
  $handler->display->display_options['fields']['field_character_type']['table'] = 'field_data_field_character_type';
  $handler->display->display_options['fields']['field_character_type']['field'] = 'field_character_type';
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 1;
  /* Field: Profile: Prénom */
  $handler->display->display_options['fields']['field_lastname']['id'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['field_lastname']['field'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lastname']['element_label_colon'] = FALSE;
  /* Field: Profile: Nom */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_firstname']['label'] = 'Nom Joueur';
  $handler->display->display_options['fields']['field_firstname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_firstname']['alter']['text'] = '[field_lastname] [field_firstname]';
  $handler->display->display_options['fields']['field_firstname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_firstname']['alter']['path'] = '[url]';
  /* Field: Content: Espèce */
  $handler->display->display_options['fields']['field_species']['id'] = 'field_species';
  $handler->display->display_options['fields']['field_species']['table'] = 'field_data_field_species';
  $handler->display->display_options['fields']['field_species']['field'] = 'field_species';
  $handler->display->display_options['fields']['field_species']['type'] = 'text_plain';
  /* Field: Content: Nationalité */
  $handler->display->display_options['fields']['field_nationalite']['id'] = 'field_nationalite';
  $handler->display->display_options['fields']['field_nationalite']['table'] = 'field_data_field_nationalite';
  $handler->display->display_options['fields']['field_nationalite']['field'] = 'field_nationalite';
  $handler->display->display_options['fields']['field_nationalite']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Occupation */
  $handler->display->display_options['fields']['field_occupation']['id'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['table'] = 'field_data_field_occupation';
  $handler->display->display_options['fields']['field_occupation']['field'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Confession */
  $handler->display->display_options['fields']['field_confession']['id'] = 'field_confession';
  $handler->display->display_options['fields']['field_confession']['table'] = 'field_data_field_confession';
  $handler->display->display_options['fields']['field_confession']['field'] = 'field_confession';
  $handler->display->display_options['fields']['field_confession']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Premier Tempérament */
  $handler->display->display_options['fields']['field_temperament1']['id'] = 'field_temperament1';
  $handler->display->display_options['fields']['field_temperament1']['table'] = 'field_data_field_temperament1';
  $handler->display->display_options['fields']['field_temperament1']['field'] = 'field_temperament1';
  $handler->display->display_options['fields']['field_temperament1']['label'] = 'Tempéraments';
  $handler->display->display_options['fields']['field_temperament1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Second Tempérament */
  $handler->display->display_options['fields']['field_temperament2']['id'] = 'field_temperament2';
  $handler->display->display_options['fields']['field_temperament2']['table'] = 'field_data_field_temperament2';
  $handler->display->display_options['fields']['field_temperament2']['field'] = 'field_temperament2';
  $handler->display->display_options['fields']['field_temperament2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Troisième Tempérament */
  $handler->display->display_options['fields']['field_temperament3']['id'] = 'field_temperament3';
  $handler->display->display_options['fields']['field_temperament3']['table'] = 'field_data_field_temperament3';
  $handler->display->display_options['fields']['field_temperament3']['field'] = 'field_temperament3';
  $handler->display->display_options['fields']['field_temperament3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Quatrième Tempérament */
  $handler->display->display_options['fields']['field_temperament4']['id'] = 'field_temperament4';
  $handler->display->display_options['fields']['field_temperament4']['table'] = 'field_data_field_temperament4';
  $handler->display->display_options['fields']['field_temperament4']['field'] = 'field_temperament4';
  $handler->display->display_options['fields']['field_temperament4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Dernier Tempérament */
  $handler->display->display_options['fields']['field_temperament5']['id'] = 'field_temperament5';
  $handler->display->display_options['fields']['field_temperament5']['table'] = 'field_data_field_temperament5';
  $handler->display->display_options['fields']['field_temperament5']['field'] = 'field_temperament5';
  $handler->display->display_options['fields']['field_temperament5']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Crédit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Pugilat */
  $handler->display->display_options['fields']['field_pugilat']['id'] = 'field_pugilat';
  $handler->display->display_options['fields']['field_pugilat']['table'] = 'field_data_field_pugilat';
  $handler->display->display_options['fields']['field_pugilat']['field'] = 'field_pugilat';
  $handler->display->display_options['fields']['field_pugilat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Valeur) */
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
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_avantage_target_id';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = 'Avantages';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[nid] ([field_value])';
  $handler->display->display_options['fields']['nid']['separator'] = ' ';
  /* Field: COUNT(DISTINCT Field collection item: Field collection item ID) */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['relationship'] = 'reverse_field_character_field_collection_item';
  $handler->display->display_options['fields']['item_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['item_id']['label'] = 'Groupes';
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
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
  /* Field: Liens custom */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Liens custom';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/admin/cec/evenements/personnage/[nid_1]">Evenements</a> / <a href="/admin/cec/informations/personnage/[nid_1]">Informations</a> / <a href="/admin/cec/sequences/personnage/[nid_1]">Séquences</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Etat CSS */
  $handler->display->display_options['fields']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['fields']['sid_1']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid_1']['field'] = 'sid';
  $handler->display->display_options['fields']['sid_1']['ui_name'] = 'Etat CSS';
  $handler->display->display_options['fields']['sid_1']['label'] = '';
  $handler->display->display_options['fields']['sid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sid_1']['transliterate'] = TRUE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
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
  /* Filter criterion: Profile: Nom (field_firstname) */
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
  /* Filter criterion: Profile: Prénom (field_lastname) */
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
  /* Filter criterion: Content: Type (field_character_type) */
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
  /* Filter criterion: Content: Nationalité (field_nationalite) */
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
  /* Filter criterion: Content: Occupation (field_occupation) */
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
  /* Filter criterion: Content: Confession (field_confession) */
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
  /* Filter criterion: Field: Premier Tempérament (field_temperament1) */
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
  /* Filter criterion: Field: Second Tempérament (field_temperament2) */
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
  /* Filter criterion: Field: Troisième Tempérament (field_temperament3) */
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
  /* Filter criterion: Field: Quatrième Tempérament (field_temperament4) */
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
  /* Filter criterion: Field: Dernier Tempérament (field_temperament5) */
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
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_character_type']['id'] = 'field_character_type';
  $handler->display->display_options['fields']['field_character_type']['table'] = 'field_data_field_character_type';
  $handler->display->display_options['fields']['field_character_type']['field'] = 'field_character_type';
  $handler->display->display_options['fields']['field_character_type']['label'] = '';
  $handler->display->display_options['fields']['field_character_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_character_type']['alter']['text'] = '[field_character_type] : ';
  $handler->display->display_options['fields']['field_character_type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '([sid])';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
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
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = '[type] : ';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_character_type']['id'] = 'field_character_type';
  $handler->display->display_options['fields']['field_character_type']['table'] = 'field_data_field_character_type';
  $handler->display->display_options['fields']['field_character_type']['field'] = 'field_character_type';
  $handler->display->display_options['fields']['field_character_type']['label'] = '';
  $handler->display->display_options['fields']['field_character_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_character_type']['alter']['text'] = '[[field_character_type]]';
  $handler->display->display_options['fields']['field_character_type']['element_label_colon'] = FALSE;
  /* Field: Content: Groupe technique */
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
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '([sid])';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'group' => 'group',
    'character' => 'character',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Sélecteur Joueur (Reference) */
  $handler = $view->new_display('entityreference', 'Sélecteur Joueur (Reference)', 'entityreference_player');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '([sid])';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type (field_character_type) */
  $handler->display->display_options['filters']['field_character_type_value']['id'] = 'field_character_type_value';
  $handler->display->display_options['filters']['field_character_type_value']['table'] = 'field_data_field_character_type';
  $handler->display->display_options['filters']['field_character_type_value']['field'] = 'field_character_type_value';
  $handler->display->display_options['filters']['field_character_type_value']['value'] = array(
    'Joueur' => 'Joueur',
  );

  /* Display: Sélecteur PNJ (Reference) */
  $handler = $view->new_display('entityreference', 'Sélecteur PNJ (Reference)', 'entityreference_nonplayer');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '([sid])';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type (field_character_type) */
  $handler->display->display_options['filters']['field_character_type_value']['id'] = 'field_character_type_value';
  $handler->display->display_options['filters']['field_character_type_value']['table'] = 'field_data_field_character_type';
  $handler->display->display_options['filters']['field_character_type_value']['field'] = 'field_character_type_value';
  $handler->display->display_options['filters']['field_character_type_value']['value'] = array(
    'PNJ' => 'PNJ',
  );

  /* Display: Admin Trombi (Page) */
  $handler = $view->new_display('page', 'Admin Trombi (Page)', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Trombinoscope';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_incarnate_target_id']['id'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['field'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['label'] = 'Joueur';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'inscription_administrative' => 'inscription_administrative',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Nom */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_firstname']['element_label_colon'] = FALSE;
  /* Field: Profile: Prénom */
  $handler->display->display_options['fields']['field_lastname']['id'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['field_lastname']['field'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lastname']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_lastname] [field_firstname])';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_photo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_photo']['alter']['text'] = '[field_photo]*';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['empty'] = '-Pas de photo-';
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'trombinoscope',
    'image_link' => '',
  );
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_photo_1']['id'] = 'field_photo_1';
  $handler->display->display_options['fields']['field_photo_1']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo_1']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo_1']['label'] = '';
  $handler->display->display_options['fields']['field_photo_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_1']['empty'] = '[field_photo]';
  $handler->display->display_options['fields']['field_photo_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_1']['settings'] = array(
    'image_style' => 'trombinoscope',
    'image_link' => '',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '-Pas de description-';
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
  $handler->display->display_options['path'] = 'admin/cec/trombinoscope';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Admin Trombinoscope';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Verif Personnages (Page) */
  $handler = $view->new_display('page', 'Verif Personnages (Page)', 'page_verif');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 'state-[sid_1]';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid_1' => 'nid_1',
    'field_photo' => 'field_photo',
    'field_photo_1' => 'field_photo_1',
    'title' => 'title',
    'url' => 'url',
    'field_lastname' => 'field_lastname',
    'field_firstname' => 'field_firstname',
    'sid' => 'sid',
    'edit_node' => 'edit_node',
    'nothing' => 'edit_node',
    'sid_1' => 'sid_1',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photo_1' => array(
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
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lastname' => array(
      'sortable' => 1,
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_incarnate_target_id']['id'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['field'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['label'] = 'Joueur';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['profile']['label'] = 'ProfilAdministratif';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'inscription_administrative' => 'inscription_administrative',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['empty'] = '<strong>-Aucune-</strong>';
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_photo_1']['id'] = 'field_photo_1';
  $handler->display->display_options['fields']['field_photo_1']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo_1']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo_1']['empty'] = '[field_photo]';
  $handler->display->display_options['fields']['field_photo_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_1']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nom du personnage';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 1;
  /* Field: Profile: Prénom */
  $handler->display->display_options['fields']['field_lastname']['id'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['field_lastname']['field'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lastname']['element_label_colon'] = FALSE;
  /* Field: Profile: Nom */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_firstname']['label'] = 'Nom Joueur';
  $handler->display->display_options['fields']['field_firstname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_firstname']['alter']['text'] = '[field_lastname] [field_firstname]';
  $handler->display->display_options['fields']['field_firstname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_firstname']['alter']['path'] = '[url]';
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
  /* Filter criterion: Content: Type (field_character_type) */
  $handler->display->display_options['filters']['field_character_type_value']['id'] = 'field_character_type_value';
  $handler->display->display_options['filters']['field_character_type_value']['table'] = 'field_data_field_character_type';
  $handler->display->display_options['filters']['field_character_type_value']['field'] = 'field_character_type_value';
  $handler->display->display_options['filters']['field_character_type_value']['value'] = array(
    'Joueur' => 'Joueur',
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
  $handler->display->display_options['path'] = 'admin/cec/verif-persos';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Vérif Personnages';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Comment Persos (Page) */
  $handler = $view->new_display('page', 'Comment Persos (Page)', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Commentaires Joueurs';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'last_comment_name' => 'last_comment_name',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'last_comment_timestamp_1' => 'last_comment_timestamp_1',
    'comment_count' => 'comment_count',
  );
  $handler->display->display_options['style_options']['default'] = 'last_comment_timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_timestamp_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nom du personnage';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Last comment author */
  $handler->display->display_options['fields']['last_comment_name']['id'] = 'last_comment_name';
  $handler->display->display_options['fields']['last_comment_name']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_name']['field'] = 'last_comment_name';
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'time ago';
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp_1']['id'] = 'last_comment_timestamp_1';
  $handler->display->display_options['fields']['last_comment_timestamp_1']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp_1']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp_1']['label'] = 'Date du dernier commentaire';
  $handler->display->display_options['fields']['last_comment_timestamp_1']['date_format'] = 'short';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
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
  /* Filter criterion: Content: Type (field_character_type) */
  $handler->display->display_options['filters']['field_character_type_value']['id'] = 'field_character_type_value';
  $handler->display->display_options['filters']['field_character_type_value']['table'] = 'field_data_field_character_type';
  $handler->display->display_options['filters']['field_character_type_value']['field'] = 'field_character_type_value';
  $handler->display->display_options['filters']['field_character_type_value']['value'] = array(
    'Joueur' => 'Joueur',
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
  $handler->display->display_options['path'] = 'admin/cec/comment-persos';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Commentaires Persos';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-zorga-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Trombinoscope (EntityRefViewWidget) */
  $handler = $view->new_display('entityreference_view_widget', 'Trombinoscope (EntityRefViewWidget)', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 'state-[sid_1]';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityreference_view_widget' => 'entityreference_view_widget',
    'title' => 'title',
    'field_character_type' => 'field_character_type',
    'field_lastname' => 'field_lastname',
    'field_firstname' => 'field_firstname',
    'field_species' => 'field_species',
    'field_nationalite' => 'field_nationalite',
    'field_occupation' => 'field_occupation',
    'field_confession' => 'field_confession',
    'item_id' => 'item_id',
    'sid' => 'sid',
    'field_opus' => 'field_opus',
    'sid_1' => 'sid_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityreference_view_widget' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_character_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nationalite' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_occupation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_confession' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_opus' => array(
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entity Reference View Widget Checkbox: Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'node';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['label'] = '';
  $handler->display->display_options['fields']['entityreference_view_widget']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nom du personnage';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_character_type']['id'] = 'field_character_type';
  $handler->display->display_options['fields']['field_character_type']['table'] = 'field_data_field_character_type';
  $handler->display->display_options['fields']['field_character_type']['field'] = 'field_character_type';
  /* Field: Profile: Prénom */
  $handler->display->display_options['fields']['field_lastname']['id'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['field_lastname']['field'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lastname']['element_label_colon'] = FALSE;
  /* Field: Profile: Nom */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_firstname']['label'] = 'Nom Joueur';
  $handler->display->display_options['fields']['field_firstname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_firstname']['alter']['text'] = '[field_lastname] [field_firstname]';
  $handler->display->display_options['fields']['field_firstname']['alter']['path'] = '[url]';
  /* Field: Content: Espèce */
  $handler->display->display_options['fields']['field_species']['id'] = 'field_species';
  $handler->display->display_options['fields']['field_species']['table'] = 'field_data_field_species';
  $handler->display->display_options['fields']['field_species']['field'] = 'field_species';
  $handler->display->display_options['fields']['field_species']['type'] = 'text_plain';
  /* Field: Content: Nationalité */
  $handler->display->display_options['fields']['field_nationalite']['id'] = 'field_nationalite';
  $handler->display->display_options['fields']['field_nationalite']['table'] = 'field_data_field_nationalite';
  $handler->display->display_options['fields']['field_nationalite']['field'] = 'field_nationalite';
  $handler->display->display_options['fields']['field_nationalite']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Occupation */
  $handler->display->display_options['fields']['field_occupation']['id'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['table'] = 'field_data_field_occupation';
  $handler->display->display_options['fields']['field_occupation']['field'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Confession */
  $handler->display->display_options['fields']['field_confession']['id'] = 'field_confession';
  $handler->display->display_options['fields']['field_confession']['table'] = 'field_data_field_confession';
  $handler->display->display_options['fields']['field_confession']['field'] = 'field_confession';
  $handler->display->display_options['fields']['field_confession']['type'] = 'taxonomy_term_reference_plain';
  /* Field: COUNT(DISTINCT Field collection item: Field collection item ID) */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['relationship'] = 'reverse_field_character_field_collection_item';
  $handler->display->display_options['fields']['item_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['item_id']['label'] = 'Groupes';
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Field: Content: Opus */
  $handler->display->display_options['fields']['field_opus']['id'] = 'field_opus';
  $handler->display->display_options['fields']['field_opus']['table'] = 'field_data_field_opus';
  $handler->display->display_options['fields']['field_opus']['field'] = 'field_opus';
  $handler->display->display_options['fields']['field_opus']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_opus']['delta_offset'] = '0';
  /* Field: Etat CSS */
  $handler->display->display_options['fields']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['fields']['sid_1']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid_1']['field'] = 'sid';
  $handler->display->display_options['fields']['sid_1']['ui_name'] = 'Etat CSS';
  $handler->display->display_options['fields']['sid_1']['label'] = '';
  $handler->display->display_options['fields']['sid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sid_1']['transliterate'] = TRUE;
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
  /* Filter criterion: Content: Title */
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
  /* Filter criterion: Profile: Nom (field_firstname) */
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
  /* Filter criterion: Profile: Prénom (field_lastname) */
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
  /* Filter criterion: Content: Type (field_character_type) */
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
  /* Filter criterion: Content: Nationalité (field_nationalite) */
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
  /* Filter criterion: Content: Occupation (field_occupation) */
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
  /* Filter criterion: Content: Confession (field_confession) */
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
  /* Filter criterion: Content: Opus (field_opus) */
  $handler->display->display_options['filters']['field_opus_value']['id'] = 'field_opus_value';
  $handler->display->display_options['filters']['field_opus_value']['table'] = 'field_data_field_opus';
  $handler->display->display_options['filters']['field_opus_value']['field'] = 'field_opus_value';
  $handler->display->display_options['filters']['field_opus_value']['value'] = array(
    'acte3' => 'acte3',
  );
  $handler->display->display_options['filters']['field_opus_value']['group'] = 1;
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
  $translatables['admin_personnages'] = array(
    t('Master'),
    t('Tous les Personnages'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Aucun personnage ne correspond à cette recherche.'),
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
    t('Opus'),
    t('Actions'),
    t('modifier'),
    t('<a href="/admin/cec/evenements/personnage/[nid_1]">Evenements</a> / <a href="/admin/cec/informations/personnage/[nid_1]">Informations</a> / <a href="/admin/cec/sequences/personnage/[nid_1]">Séquences</a>'),
    t('Prénom Joueur'),
    t('Tempérament 1'),
    t('Tempérament 2'),
    t('Tempérament 3'),
    t('Tempérament 4'),
    t('Tempérament 5'),
    t('État actuel'),
    t('Tous les Personnages (Page)'),
    t('more'),
    t('Sélecteur Membre (Reference)'),
    t('[field_character_type] : '),
    t('([sid])'),
    t('Sélecteur Cible (Reference)'),
    t('[type] : '),
    t('[[field_character_type]]'),
    t('[Technique]'),
    t('Sélecteur Joueur (Reference)'),
    t('Sélecteur PNJ (Reference)'),
    t('Admin Trombi (Page)'),
    t('Admin Trombinoscope'),
    t('Profile'),
    t('[title] ([field_lastname] [field_firstname])'),
    t('[field_photo]*'),
    t('-Pas de photo-'),
    t('[field_photo]'),
    t('-Pas de description-'),
    t('Verif Personnages (Page)'),
    t('<strong>-Aucune-</strong>'),
    t('Photo'),
    t('Comment Persos (Page)'),
    t('Commentaires Joueurs'),
    t('Last comment author'),
    t('Last comment time'),
    t('Date du dernier commentaire'),
    t('Comment count'),
    t('Trombinoscope (EntityRefViewWidget)'),
  );
  $export['admin_personnages'] = $view;

  $view = new view();
  $view->name = 'characters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Personnages';
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
      'character' => 'character',
      'news' => 0,
      'avantage' => 0,
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
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Aucun personnage validé pour le moment';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nom du Personnage';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Statut du Personnage */
  $handler->display->display_options['fields']['field_character_state']['id'] = 'field_character_state';
  $handler->display->display_options['fields']['field_character_state']['table'] = 'field_data_field_character_state';
  $handler->display->display_options['fields']['field_character_state']['field'] = 'field_character_state';
  $handler->display->display_options['fields']['field_character_state']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'voir';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'character' => 'character',
  );
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    13 => '13',
  );

  /* Display: Mes Persos (Page) */
  $handler = $view->new_display('page', 'Mes Persos (Page)', 'mes_persos');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mes Personnages';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Vide';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Vous n\'avez aucun personnage validé pour le moment.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['path'] = 'mes-personnages';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Mes personnages';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Trombinoscope (Block) */
  $handler = $view->new_display('block', 'Trombinoscope (Block)', 'block_trombi');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_characters_target_id']['id'] = 'field_characters_target_id';
  $handler->display->display_options['relationships']['field_characters_target_id']['table'] = 'field_data_field_characters';
  $handler->display->display_options['relationships']['field_characters_target_id']['field'] = 'field_characters_target_id';
  $handler->display->display_options['relationships']['field_characters_target_id']['label'] = 'PersoTrombi';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_incarnate_target_id']['id'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['field'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['relationship'] = 'field_characters_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['label'] = 'JoueurTrombi';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['profile']['label'] = 'ProfilAdmin';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'inscription_administrative' => 'inscription_administrative',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_characters_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Photo */
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
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['relationship'] = 'field_characters_target_id';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['empty'] = '[field_photo_1]';
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'trombinoscope',
    'image_link' => '',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_characters_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
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
    'character' => 'character',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';
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
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['relationship'] = 'field_characters_target_id';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    13 => '13',
  );

  /* Display: Trombinoscope Zorgas */
  $handler = $view->new_display('block', 'Trombinoscope Zorgas', 'block_trombi_zorgas');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_characters_target_id']['id'] = 'field_characters_target_id';
  $handler->display->display_options['relationships']['field_characters_target_id']['table'] = 'field_data_field_characters';
  $handler->display->display_options['relationships']['field_characters_target_id']['field'] = 'field_characters_target_id';
  $handler->display->display_options['relationships']['field_characters_target_id']['label'] = 'PersoTrombi';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_incarnate_target_id']['id'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['table'] = 'field_data_field_incarnate';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['field'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['relationship'] = 'field_characters_target_id';
  $handler->display->display_options['relationships']['field_incarnate_target_id']['label'] = 'JoueurTrombi';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_incarnate_target_id';
  $handler->display->display_options['relationships']['profile']['label'] = 'ProfilAdmin';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'inscription_administrative' => 'inscription_administrative',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_characters_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Photo */
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
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['relationship'] = 'field_characters_target_id';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['empty'] = '[field_photo_1]';
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'trombinoscope',
    'image_link' => '',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_characters_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
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
    'character' => 'character',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';
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
  $translatables['characters'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Aucun personnage validé pour le moment'),
    t('Nom du Personnage'),
    t('Statut du Personnage'),
    t('voir'),
    t('Tout'),
    t('Mes Persos (Page)'),
    t('Mes Personnages'),
    t('more'),
    t('Vide'),
    t('Vous n\'avez aucun personnage validé pour le moment.'),
    t('Trombinoscope (Block)'),
    t('PersoTrombi'),
    t('JoueurTrombi'),
    t('ProfilAdmin'),
    t('[field_photo_1]'),
    t('Trombinoscope Zorgas'),
  );
  $export['characters'] = $view;

  return $export;
}
