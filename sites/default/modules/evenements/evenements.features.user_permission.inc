<?php
/**
 * @file
 * evenements.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function evenements_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in event_type'.
  $permissions['add terms in event_type'] = array(
    'name' => 'add terms in event_type',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in event_type'.
  $permissions['delete terms in event_type'] = array(
    'name' => 'delete terms in event_type',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in event_type'.
  $permissions['edit terms in event_type'] = array(
    'name' => 'edit terms in event_type',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view all events'.
  $permissions['view all events'] = array(
    'name' => 'view all events',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'evenements',
  );

  return $permissions;
}
