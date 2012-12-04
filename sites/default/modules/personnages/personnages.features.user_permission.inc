<?php
/**
 * @file
 * personnages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function personnages_user_default_permissions() {
  $permissions = array();

  // Exported permission: create character content.
  $permissions['create character content'] = array(
    'name' => 'create character content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any character content.
  $permissions['delete any character content'] = array(
    'name' => 'delete any character content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own character content.
  $permissions['delete own character content'] = array(
    'name' => 'delete own character content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any character content.
  $permissions['edit any character content'] = array(
    'name' => 'edit any character content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own character content.
  $permissions['edit own character content'] = array(
    'name' => 'edit own character content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: view all non-playable characters.
  $permissions['view all non-playable characters'] = array(
    'name' => 'view all non-playable characters',
    'roles' => array(
      'PNJ' => 'PNJ',
      'Zorga' => 'Zorga',
    ),
    'module' => 'personnages',
  );

  // Exported permission: view all playable characters.
  $permissions['view all playable characters'] = array(
    'name' => 'view all playable characters',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'personnages',
  );

  return $permissions;
}
