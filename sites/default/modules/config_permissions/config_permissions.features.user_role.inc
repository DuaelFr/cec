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

  // Exported role: Cuisinier.
  $roles['Cuisinier'] = array(
    'name' => 'Cuisinier',
    'weight' => '6',
    'machine_name' => 'cuisinier',
  );

  // Exported role: Inscription en liste d'attente.
  $roles['Inscription en liste d\'attente'] = array(
    'name' => 'Inscription en liste d\'attente',
    'weight' => '2',
    'machine_name' => 'inscription_en_liste_d\'attente',
  );

  // Exported role: Inscription finalisée.
  $roles['Inscription finalisée'] = array(
    'name' => 'Inscription finalisée',
    'weight' => '4',
    'machine_name' => 'inscription_finalisée',
  );

  // Exported role: Inscription validée.
  $roles['Inscription validée'] = array(
    'name' => 'Inscription validée',
    'weight' => '3',
    'machine_name' => 'inscription_validée',
  );

  // Exported role: Joueur.
  $roles['Joueur'] = array(
    'name' => 'Joueur',
    'weight' => '5',
    'machine_name' => 'joueur',
  );

  // Exported role: PNJ.
  $roles['PNJ'] = array(
    'name' => 'PNJ',
    'weight' => '7',
    'machine_name' => 'pnj',
  );

  // Exported role: Zorga.
  $roles['Zorga'] = array(
    'name' => 'Zorga',
    'weight' => '8',
    'machine_name' => 'zorga',
  );

  return $roles;
}
