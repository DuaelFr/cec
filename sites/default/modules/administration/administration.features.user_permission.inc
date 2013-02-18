<?php
/**
 * @file
 * administration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function administration_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(),
    'module' => 'search',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'PNJ' => 'PNJ',
      'Zorga' => 'Zorga',
    ),
    'module' => 'search',
  );

  // Exported permission: use admin toolbar.
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'admin',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'PNJ' => 'PNJ',
      'Zorga' => 'Zorga',
    ),
    'module' => 'search',
  );

  return $permissions;
}
