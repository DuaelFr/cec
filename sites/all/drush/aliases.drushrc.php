<?php

$base_domain = '.gn-capes-et-crocs.fr';

$aliases['local'] = array(
  'uri' => 'local' . base_domain,
  'root' => 'D:\wamp\www\gncec',
);
$aliases['dev'] = $aliases['local'];

$aliases['stage'] = array(
  'uri' => 'preprod' . base_domain,
  'root' => '/home/gn-capes-et-crocs.fr/sd/preprod',
);
$aliases['preprod'] = $aliases['stage'];

$aliases['live'] = array(
  'uri' => 'www' . base_domain,
  'root' => '/home/gn-capes-et-crocs.fr/www',
);
$aliases['prod'] = $aliases['live'];
