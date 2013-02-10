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

  // Exported permission: add terms in 12.
  $permissions['add terms in 12'] = array(
    'name' => 'add terms in 12',
    'roles' => array(),
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

  // Exported permission: delete terms in 12.
  $permissions['delete terms in 12'] = array(
    'name' => 'delete terms in 12',
    'roles' => array(),
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

  // Exported permission: edit terms in 12.
  $permissions['edit terms in 12'] = array(
    'name' => 'edit terms in 12',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
