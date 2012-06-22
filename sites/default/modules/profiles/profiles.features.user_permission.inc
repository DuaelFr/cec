<?php
/**
 * @file
 * profiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit any inscription_administrative profile.
  $permissions['edit any inscription_administrative profile'] = array(
    'name' => 'edit any inscription_administrative profile',
    'roles' => array(
      0 => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any profil_joueur profile.
  $permissions['edit any profil_joueur profile'] = array(
    'name' => 'edit any profil_joueur profile',
    'roles' => array(
      0 => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any profil_pnj_orga profile.
  $permissions['edit any profil_pnj_orga profile'] = array(
    'name' => 'edit any profil_pnj_orga profile',
    'roles' => array(
      0 => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own inscription_administrative profile.
  $permissions['edit own inscription_administrative profile'] = array(
    'name' => 'edit own inscription_administrative profile',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own profil_joueur profile.
  $permissions['edit own profil_joueur profile'] = array(
    'name' => 'edit own profil_joueur profile',
    'roles' => array(
      0 => 'Joueur',
      1 => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own profil_pnj_orga profile.
  $permissions['edit own profil_pnj_orga profile'] = array(
    'name' => 'edit own profil_pnj_orga profile',
    'roles' => array(
      0 => 'PNJ',
      1 => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any inscription_administrative profile.
  $permissions['view any inscription_administrative profile'] = array(
    'name' => 'view any inscription_administrative profile',
    'roles' => array(
      0 => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any profil_joueur profile.
  $permissions['view any profil_joueur profile'] = array(
    'name' => 'view any profil_joueur profile',
    'roles' => array(
      0 => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any profil_pnj_orga profile.
  $permissions['view any profil_pnj_orga profile'] = array(
    'name' => 'view any profil_pnj_orga profile',
    'roles' => array(
      0 => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own inscription_administrative profile.
  $permissions['view own inscription_administrative profile'] = array(
    'name' => 'view own inscription_administrative profile',
    'roles' => array(
      0 => 'Inscription finalisée',
      1 => 'Joueur',
      2 => 'PNJ',
      3 => 'Zorga',
      4 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own profil_joueur profile.
  $permissions['view own profil_joueur profile'] = array(
    'name' => 'view own profil_joueur profile',
    'roles' => array(
      0 => 'Joueur',
      1 => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own profil_pnj_orga profile.
  $permissions['view own profil_pnj_orga profile'] = array(
    'name' => 'view own profil_pnj_orga profile',
    'roles' => array(
      0 => 'PNJ',
      1 => 'Zorga',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
