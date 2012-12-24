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

  // Exported permission: add terms in 3.
  $permissions['add terms in 3'] = array(
    'name' => 'add terms in 3',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: add terms in 4.
  $permissions['add terms in 4'] = array(
    'name' => 'add terms in 4',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: add terms in 5.
  $permissions['add terms in 5'] = array(
    'name' => 'add terms in 5',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy_access_fix',
  );

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

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 4.
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 5.
  $permissions['delete terms in 5'] = array(
    'name' => 'delete terms in 5',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
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

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 4.
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 5.
  $permissions['edit terms in 5'] = array(
    'name' => 'edit terms in 5',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
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
