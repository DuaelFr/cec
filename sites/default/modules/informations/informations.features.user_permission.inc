<?php
/**
 * @file
 * informations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function informations_user_default_permissions() {
  $permissions = array();

  // Exported permission: create information content.
  $permissions['create information content'] = array(
    'name' => 'create information content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any information content.
  $permissions['delete any information content'] = array(
    'name' => 'delete any information content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own information content.
  $permissions['delete own information content'] = array(
    'name' => 'delete own information content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any information content.
  $permissions['edit any information content'] = array(
    'name' => 'edit any information content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own information content.
  $permissions['edit own information content'] = array(
    'name' => 'edit own information content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: view all informations.
  $permissions['view all informations'] = array(
    'name' => 'view all informations',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'informations',
  );

  return $permissions;
}
