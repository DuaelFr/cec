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

try {
  
  module_load_include('module', 'cec_profiles');
  cec_profiles_import_from_csv($file);
  
} catch(Exception $e) {
  drush_log($e->getMessage(), 'error');
  return;
}
