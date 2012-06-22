<?php

// Get file from --file option
$file = drush_get_option('file');
if (empty($file)) {
  // Or just get the first argument
  $file = drush_shift();
}
if (empty($file)) { 
  drush_log('You must specify a file', 'error');
  return;
}

// Add complete path to the file
if ($file[0] != '/' && $file[1] != ':') {
  $file = getcwd() . DIRECTORY_SEPARATOR . $file;
}

// Check file existance
if (!is_file($file)) {
  drush_log('This file does not exists', 'error');
  return;
}
else {
  // Process file
  $f = fopen($file, 'r+');
  
  $user_roles = user_roles(TRUE);
  while (($line = fgetcsv($f)) !== FALSE) {
// $line[0] : VIDE
// $line[1] : Date
// $line[2] : Nom
// $line[3] : VIDE
// $line[4] : Prénom
// $line[5] : Mail
// $line[6] : Téléphone
// $line[7] : Ancien joueur ? OUI/NON
// $line[8] : Inscription validée ? OUI/Liste attente
// $line[9] : Nom perso
// $line[10] : Souhait conserver ? OUI/NON/NOUVEAU
// $line[11] : Demande Zorga ? X/VIDE
// $line[12] : Souhait groupe ? OUI/NON
// $line[13] : Groupe
//    var_dump($line); continue;
    if ($line[0] == 'Envoi mail') { continue; } // Jump headers
    $line = array_map('trim', $line); // Remove trailing spaces
    
    $login = transliteration_clean_filename($line[4] . ' ' . $line[2]);
    $pass = user_password();
    $mail = $line[5];
    $roles = array();
    $rid = array_search('Joueur', $user_roles);
    $roles[$rid] = TRUE;
    if ($line[8] == 'Liste attente') {
      $rid = array_search('Inscription en liste d\'attente', $user_roles);
      $roles[$rid] = TRUE;
    } elseif ($line[8] == 'OUI') {
      $rid = array_search('Inscription validée', $user_roles);
      $roles[$rid] = TRUE;
    }

    $account = user_load_by_mail($mail);
    if ($account === FALSE) {
      // Account creation
      $new_user = array(
        'name' => $login,
        'pass' => $pass,
        'mail' => $mail,
        'status' => 1,
        'roles' => $roles,
      );
      $account = user_save(null, $new_user);
      
      // Send mail to new user
      $params = array(
        'firstname' => $line[4],
        'lastname' => $line[2],
        'login' => $login,
        'pass' => $pass,
        'email' => $mail,
        'is_accepted' => $line[8] == 'OUI', // Inscrit / Liste attente
        'is_new_player' => $line[7] == 'NON', // Nouveau / Ancien joueur
        'is_new_character' => $line[10] != 'OUI' || $line[11] == 'X', // Change / Garde perso
      );
      $key = $params['is_accepted'] ? 'new_subscription' : 'new_subscription_awaiting';
      drupal_mail('cec_profiles', $key, $mail, language_default(), $params);
    }
    else {
      watchdog(WATCHDOG_ALERT, 'Account @mail already exists.', array('@mail' => $mail));
    }
  }
  
  fclose($f);
}
