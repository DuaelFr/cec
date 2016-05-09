<?php
/**
 * @file
 * temperaments.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function temperaments_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'temperaments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Tempéraments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tempéraments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Entête: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Entête';
  $handler->display->display_options['header']['area']['content'] = '<p>Les tempéraments s\'opposent deux à deux, représentant le caractère plein de Panache des personnages qui peuplent l\'univers de notre GN. Ci-dessous, vous trouverez une liste détaillée de tous les tempéraments antagonistes qui forment la partition des possibilités d\'interprétation. Lors de votre inscription vous serez amené à en choisir un de chaque ligne et à les classer par ordre d\'importance. C\'est ainsi que nous imaginons les diverses personnalités incarnées en jeu par des joueurs ou des PNJ.</p>
<p><strong>Note orga concernant les temperaments :</strong><br />
le tempérament Cupide de la Surface correspond au tempérament stratien Esthète.
le tempérament Généreux de la Surface correspond au tempérament stratien Créatif.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Champ: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Champ: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Critère de tri: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Critère de filtrage: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'temperament' => 'temperament',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'temperaments';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tempéraments';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['temperaments'] = array(
    t('Master'),
    t('Tempéraments'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Entête'),
    t('<p>Les tempéraments s\'opposent deux à deux, représentant le caractère plein de Panache des personnages qui peuplent l\'univers de notre GN. Ci-dessous, vous trouverez une liste détaillée de tous les tempéraments antagonistes qui forment la partition des possibilités d\'interprétation. Lors de votre inscription vous serez amené à en choisir un de chaque ligne et à les classer par ordre d\'importance. C\'est ainsi que nous imaginons les diverses personnalités incarnées en jeu par des joueurs ou des PNJ.</p>
<p><strong>Note orga concernant les temperaments :</strong><br />
le tempérament Cupide de la Surface correspond au tempérament stratien Esthète.
le tempérament Généreux de la Surface correspond au tempérament stratien Créatif.</p>'),
    t('Page'),
    t('more'),
  );
  $export['temperaments'] = $view;

  return $export;
}
