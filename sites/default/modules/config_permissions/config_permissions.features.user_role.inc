<?php
/**
 * @file
 * config_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function config_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Inscription en liste d'attente.
  $roles['Inscription en liste d\'attente'] = array(
    'name' => 'Inscription en liste d\'attente',
    'weight' => '2',
  );

  // Exported role: Inscription finalisée.
  $roles['Inscription finalisée'] = array(
    'name' => 'Inscription finalisée',
    'weight' => '4',
  );

  // Exported role: Inscription validée.
  $roles['Inscription validée'] = array(
    'name' => 'Inscription validée',
    'weight' => '3',
  );

  // Exported role: Joueur.
  $roles['Joueur'] = array(
    'name' => 'Joueur',
    'weight' => '5',
  );

  // Exported role: PNJ.
  $roles['PNJ'] = array(
    'name' => 'PNJ',
    'weight' => '6',
  );

  // Exported role: Zorga.
  $roles['Zorga'] = array(
    'name' => 'Zorga',
    'weight' => '7',
  );

  return $roles;
}
