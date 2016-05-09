<?php
/**
 * @file
 * administration.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function administration_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-zorga-menu.
  $menus['menu-zorga-menu'] = array(
    'menu_name' => 'menu-zorga-menu',
    'title' => 'Zorga Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Zorga Menu');

  return $menus;
}
