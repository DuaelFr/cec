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

  // Exported permission: 'add terms in nationalites'.
  $permissions['add terms in nationalites'] = array(
    'name' => 'add terms in nationalites',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in occupations'.
  $permissions['add terms in occupations'] = array(
    'name' => 'add terms in occupations',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in religions'.
  $permissions['add terms in religions'] = array(
    'name' => 'add terms in religions',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create character content'.
  $permissions['create character content'] = array(
    'name' => 'create character content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any character content'.
  $permissions['delete any character content'] = array(
    'name' => 'delete any character content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own character content'.
  $permissions['delete own character content'] = array(
    'name' => 'delete own character content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in nationalites'.
  $permissions['delete terms in nationalites'] = array(
    'name' => 'delete terms in nationalites',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in occupations'.
  $permissions['delete terms in occupations'] = array(
    'name' => 'delete terms in occupations',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in religions'.
  $permissions['delete terms in religions'] = array(
    'name' => 'delete terms in religions',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any character content'.
  $permissions['edit any character content'] = array(
    'name' => 'edit any character content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own character content'.
  $permissions['edit own character content'] = array(
    'name' => 'edit own character content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in nationalites'.
  $permissions['edit terms in nationalites'] = array(
    'name' => 'edit terms in nationalites',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in occupations'.
  $permissions['edit terms in occupations'] = array(
    'name' => 'edit terms in occupations',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in religions'.
  $permissions['edit terms in religions'] = array(
    'name' => 'edit terms in religions',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view all non-playable characters'.
  $permissions['view all non-playable characters'] = array(
    'name' => 'view all non-playable characters',
    'roles' => array(
      'PNJ' => 'PNJ',
      'Zorga' => 'Zorga',
    ),
    'module' => 'personnages',
  );

  // Exported permission: 'view all playable characters'.
  $permissions['view all playable characters'] = array(
    'name' => 'view all playable characters',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'personnages',
  );

  return $permissions;
}
