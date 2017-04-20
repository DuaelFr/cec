<?php
/**
 * @file
 * avantages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function avantages_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in avantage_type'.
  $permissions['add terms in avantage_type'] = array(
    'name' => 'add terms in avantage_type',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create avantage content'.
  $permissions['create avantage content'] = array(
    'name' => 'create avantage content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any avantage content'.
  $permissions['delete any avantage content'] = array(
    'name' => 'delete any avantage content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own avantage content'.
  $permissions['delete own avantage content'] = array(
    'name' => 'delete own avantage content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in avantage_type'.
  $permissions['delete terms in avantage_type'] = array(
    'name' => 'delete terms in avantage_type',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any avantage content'.
  $permissions['edit any avantage content'] = array(
    'name' => 'edit any avantage content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own avantage content'.
  $permissions['edit own avantage content'] = array(
    'name' => 'edit own avantage content',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in avantage_type'.
  $permissions['edit terms in avantage_type'] = array(
    'name' => 'edit terms in avantage_type',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view all avantages'.
  $permissions['view all avantages'] = array(
    'name' => 'view all avantages',
    'roles' => array(
      'PNJ' => 'PNJ',
      'Zorga' => 'Zorga',
    ),
    'module' => 'avantages',
  );

  return $permissions;
}
