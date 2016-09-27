<?php
/**
 * @file
 * cec_debriefs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cec_debriefs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit any debrief_sondage profile'.
  $permissions['edit any debrief_sondage profile'] = array(
    'name' => 'edit any debrief_sondage profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any debrief_texte profile'.
  $permissions['edit any debrief_texte profile'] = array(
    'name' => 'edit any debrief_texte profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own debrief_sondage profile'.
  $permissions['edit own debrief_sondage profile'] = array(
    'name' => 'edit own debrief_sondage profile',
    'roles' => array(
      'Joueur' => 'Joueur',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own debrief_texte profile'.
  $permissions['edit own debrief_texte profile'] = array(
    'name' => 'edit own debrief_texte profile',
    'roles' => array(
      'Joueur' => 'Joueur',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any debrief_sondage profile'.
  $permissions['view any debrief_sondage profile'] = array(
    'name' => 'view any debrief_sondage profile',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any debrief_texte profile'.
  $permissions['view any debrief_texte profile'] = array(
    'name' => 'view any debrief_texte profile',
    'roles' => array(
      'Zorga' => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own debrief_sondage profile'.
  $permissions['view own debrief_sondage profile'] = array(
    'name' => 'view own debrief_sondage profile',
    'roles' => array(
      'Joueur' => 'Joueur',
      'Zorga' => 'Zorga',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own debrief_texte profile'.
  $permissions['view own debrief_texte profile'] = array(
    'name' => 'view own debrief_texte profile',
    'roles' => array(
      'Joueur' => 'Joueur',
      'Zorga' => 'Zorga',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
