<?php
/**
 * @file
 * matos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function matos_user_default_permissions() {
  $permissions = array();

  // Exported permission: add terms in stuff_type.
  $permissions['add terms in stuff_type'] = array(
    'name' => 'add terms in stuff_type',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: create stuff content.
  $permissions['create stuff content'] = array(
    'name' => 'create stuff content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any stuff content.
  $permissions['delete any stuff content'] = array(
    'name' => 'delete any stuff content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own stuff content.
  $permissions['delete own stuff content'] = array(
    'name' => 'delete own stuff content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete terms in stuff_type.
  $permissions['delete terms in stuff_type'] = array(
    'name' => 'delete terms in stuff_type',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any stuff content.
  $permissions['edit any stuff content'] = array(
    'name' => 'edit any stuff content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own stuff content.
  $permissions['edit own stuff content'] = array(
    'name' => 'edit own stuff content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit terms in stuff_type.
  $permissions['edit terms in stuff_type'] = array(
    'name' => 'edit terms in stuff_type',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
