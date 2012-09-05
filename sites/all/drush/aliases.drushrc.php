<?php

// Sites under this core
$sites = array(
  array(
    'base_domain' => 'gn-capes-et-crocs.fr',
    'prefix' => '',
  ),
);

// OS dependent base dir
$local_base_dir = dirname(dirname(dirname(dirname(__FILE__))));

foreach ($sites as $site) {
  $bd = $site['base_domain'];
  $pre = $site['prefix'];
  $pre = !empty($pre) ? $pre . '_' : $pre;
  
  // --- LOCAL -----------------------------------------------------------------
  $aliases[$pre . 'local'] = array(
    'uri' => 'local.' . $bd,
    'root' => $local_base_dir,
  );
  
  // --- DEV -------------------------------------------------------------------
  $aliases[$pre . 'dev'] = array(
    'uri' => 'dev.' . $bd,
    'root' => '/home/' . $bd . '/sd/dev',
  );
  
  // --- STAGE -----------------------------------------------------------------
  $aliases[$pre . 'stage'] = array(
    'uri' => 'preprod.' . $bd,
    'root' => '/home/' . $bd . '/sd/preprod',
  );
  $aliases[$pre . 'preprod'] = $aliases[$pre . 'stage'];
  
  // --- LIVE ------------------------------------------------------------------
  $aliases[$pre . 'live'] = array(
    'uri' => 'www.' . $bd,
    'root' => '/home/' . $bd . '/www',
  );
  $aliases[$pre . 'prod'] = $aliases[$pre . 'live'];
}
