<?php
/**
 * @file
 * groupes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function groupes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in type_de_groupe'.
  $permissions['add terms in type_de_groupe'] = array(
    'name' => 'add terms in type_de_groupe',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create group content'.
  $permissions['create group content'] = array(
    'name' => 'create group content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any group content'.
  $permissions['delete any group content'] = array(
    'name' => 'delete any group content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own group content'.
  $permissions['delete own group content'] = array(
    'name' => 'delete own group content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in type_de_groupe'.
  $permissions['delete terms in type_de_groupe'] = array(
    'name' => 'delete terms in type_de_groupe',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any group content'.
  $permissions['edit any group content'] = array(
    'name' => 'edit any group content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own group content'.
  $permissions['edit own group content'] = array(
    'name' => 'edit own group content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in type_de_groupe'.
  $permissions['edit terms in type_de_groupe'] = array(
    'name' => 'edit terms in type_de_groupe',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view all groups'.
  $permissions['view all groups'] = array(
    'name' => 'view all groups',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'groupes',
  );

  // Exported permission: 'view technical groups'.
  $permissions['view technical groups'] = array(
    'name' => 'view technical groups',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'groupes',
  );

  return $permissions;
}
