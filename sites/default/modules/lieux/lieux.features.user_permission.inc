<?php
/**
 * @file
 * lieux.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lieux_user_default_permissions() {
  $permissions = array();

  // Exported permission: add terms in 13.
  $permissions['add terms in 13'] = array(
    'name' => 'add terms in 13',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: create location content.
  $permissions['create location content'] = array(
    'name' => 'create location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any location content.
  $permissions['delete any location content'] = array(
    'name' => 'delete any location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own location content.
  $permissions['delete own location content'] = array(
    'name' => 'delete own location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete terms in 13.
  $permissions['delete terms in 13'] = array(
    'name' => 'delete terms in 13',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any location content.
  $permissions['edit any location content'] = array(
    'name' => 'edit any location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own location content.
  $permissions['edit own location content'] = array(
    'name' => 'edit own location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit terms in 13.
  $permissions['edit terms in 13'] = array(
    'name' => 'edit terms in 13',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
