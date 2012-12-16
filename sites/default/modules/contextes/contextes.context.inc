<?php
/**
 * @file
 * contextes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function contextes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all';
  $context->description = '';
  $context->tag = 'Layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => '1',
          'region' => 'header',
          'weight' => '0',
        ),
        'contextes-introduction' => array(
          'module' => 'contextes',
          'delta' => 'introduction',
          'region' => 'highlighted',
          'weight' => '0',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '0',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout');
  $export['all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'zorgas';
  $context->description = '';
  $context->tag = 'Roles';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'Zorga' => 'Zorga',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-zorga-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-zorga-menu',
          'region' => 'sidebar_first',
          'weight' => '3',
        ),
        'switchtheme-switch_form' => array(
          'module' => 'switchtheme',
          'delta' => 'switch_form',
          'region' => 'footer',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Roles');
  $export['zorgas'] = $context;

  return $export;
}
