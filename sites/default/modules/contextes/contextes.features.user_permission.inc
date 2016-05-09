<?php
/**
 * @file
 * contextes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function contextes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer switch'.
  $permissions['administer switch'] = array(
    'name' => 'administer switch',
    'roles' => array(),
    'module' => 'switchtheme',
  );

  // Exported permission: 'select different theme'.
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(),
    'module' => 'switchtheme',
  );

  // Exported permission: 'switch theme'.
  $permissions['switch theme'] = array(
    'name' => 'switch theme',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'switchtheme',
  );

  return $permissions;
}
