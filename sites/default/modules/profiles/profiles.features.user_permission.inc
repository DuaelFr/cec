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

  // Exported permission: access payment.
  $permissions['access payment'] = array(
    'name' => 'access payment',
    'roles' => array(
      'Inscription finalisée' => 'Inscription finalisée',
      'Inscription validée' => 'Inscription validée',
      'Joueur' => 'Joueur',
      'PNJ' => 'PNJ',
      'Zorga' => 'Zorga',
    ),
    'module' => 'cec_payment',
  );

  // Exported permission: access profile opus.
  $permissions['access profile opus'] = array(
    'name' => 'access profile opus',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'cec_profiles',
  );

  // Exported permission: edit any inscription_administrative profile.
  $permissions['edit any inscription_administrative profile'] = array(
    'name' => 'edit any inscription_administrative profile',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any profil_joueur profile.
  $permissions['edit any profil_joueur profile'] = array(
    'name' => 'edit any profil_joueur profile',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own inscription_administrative profile.
  $permissions['edit own inscription_administrative profile'] = array(
    'name' => 'edit own inscription_administrative profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own profil_joueur profile.
  $permissions['edit own profil_joueur profile'] = array(
    'name' => 'edit own profil_joueur profile',
    'roles' => array(
      'Joueur' => 'Joueur',
      'Zorga' => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any inscription_administrative profile.
  $permissions['view any inscription_administrative profile'] = array(
    'name' => 'view any inscription_administrative profile',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any profil_joueur profile.
  $permissions['view any profil_joueur profile'] = array(
    'name' => 'view any profil_joueur profile',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own inscription_administrative profile.
  $permissions['view own inscription_administrative profile'] = array(
    'name' => 'view own inscription_administrative profile',
    'roles' => array(
      'Inscription finalisée' => 'Inscription finalisée',
      'Joueur' => 'Joueur',
      'PNJ' => 'PNJ',
      'Zorga' => 'Zorga',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own profil_joueur profile.
  $permissions['view own profil_joueur profile'] = array(
    'name' => 'view own profil_joueur profile',
    'roles' => array(
      'Joueur' => 'Joueur',
      'Zorga' => 'Zorga',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
