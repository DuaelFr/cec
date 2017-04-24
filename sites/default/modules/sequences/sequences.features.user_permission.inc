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

  // Exported permission: 'add terms in sequence_type'.
  $permissions['add terms in sequence_type'] = array(
    'name' => 'add terms in sequence_type',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create sequence content'.
  $permissions['create sequence content'] = array(
    'name' => 'create sequence content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sequence content'.
  $permissions['delete any sequence content'] = array(
    'name' => 'delete any sequence content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sequence content'.
  $permissions['delete own sequence content'] = array(
    'name' => 'delete own sequence content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in sequence_type'.
  $permissions['delete terms in sequence_type'] = array(
    'name' => 'delete terms in sequence_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any sequence content'.
  $permissions['edit any sequence content'] = array(
    'name' => 'edit any sequence content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own sequence content'.
  $permissions['edit own sequence content'] = array(
    'name' => 'edit own sequence content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in sequence_type'.
  $permissions['edit terms in sequence_type'] = array(
    'name' => 'edit terms in sequence_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
