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

  // Exported permission: add terms in intrigue_theme.
  $permissions['add terms in intrigue_theme'] = array(
    'name' => 'add terms in intrigue_theme',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: add terms in intrigue_type.
  $permissions['add terms in intrigue_type'] = array(
    'name' => 'add terms in intrigue_type',
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

  // Exported permission: delete terms in intrigue_theme.
  $permissions['delete terms in intrigue_theme'] = array(
    'name' => 'delete terms in intrigue_theme',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in intrigue_type.
  $permissions['delete terms in intrigue_type'] = array(
    'name' => 'delete terms in intrigue_type',
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

  // Exported permission: edit terms in intrigue_theme.
  $permissions['edit terms in intrigue_theme'] = array(
    'name' => 'edit terms in intrigue_theme',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in intrigue_type.
  $permissions['edit terms in intrigue_type'] = array(
    'name' => 'edit terms in intrigue_type',
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
