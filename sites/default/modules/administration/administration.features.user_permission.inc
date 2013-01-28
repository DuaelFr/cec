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

  // Exported permission: use admin toolbar.
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'admin',
  );

  return $permissions;
}
