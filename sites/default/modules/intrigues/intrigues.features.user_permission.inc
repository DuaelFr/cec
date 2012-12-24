<?php
/**
 * @file
 * intrigues.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function intrigues_user_default_permissions() {
  $permissions = array();

  // Exported permission: add terms in 9.
  $permissions['add terms in 9'] = array(
    'name' => 'add terms in 9',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: create intrigue content.
  $permissions['create intrigue content'] = array(
    'name' => 'create intrigue content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any intrigue content.
  $permissions['delete any intrigue content'] = array(
    'name' => 'delete any intrigue content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own intrigue content.
  $permissions['delete own intrigue content'] = array(
    'name' => 'delete own intrigue content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 9.
  $permissions['delete terms in 9'] = array(
    'name' => 'delete terms in 9',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any intrigue content.
  $permissions['edit any intrigue content'] = array(
    'name' => 'edit any intrigue content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own intrigue content.
  $permissions['edit own intrigue content'] = array(
    'name' => 'edit own intrigue content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 9.
  $permissions['edit terms in 9'] = array(
    'name' => 'edit terms in 9',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: view all intrigues.
  $permissions['view all intrigues'] = array(
    'name' => 'view all intrigues',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'intrigues',
  );

  return $permissions;
}
