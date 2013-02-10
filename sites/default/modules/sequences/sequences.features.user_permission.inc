<?php
/**
 * @file
 * sequences.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sequences_user_default_permissions() {
  $permissions = array();

  // Exported permission: add terms in 14.
  $permissions['add terms in 14'] = array(
    'name' => 'add terms in 14',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: create sequence content.
  $permissions['create sequence content'] = array(
    'name' => 'create sequence content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any sequence content.
  $permissions['delete any sequence content'] = array(
    'name' => 'delete any sequence content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own sequence content.
  $permissions['delete own sequence content'] = array(
    'name' => 'delete own sequence content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete terms in 14.
  $permissions['delete terms in 14'] = array(
    'name' => 'delete terms in 14',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any sequence content.
  $permissions['edit any sequence content'] = array(
    'name' => 'edit any sequence content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own sequence content.
  $permissions['edit own sequence content'] = array(
    'name' => 'edit own sequence content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit terms in 14.
  $permissions['edit terms in 14'] = array(
    'name' => 'edit terms in 14',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
