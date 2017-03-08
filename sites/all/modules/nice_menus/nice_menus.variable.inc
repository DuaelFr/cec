<?php

/**
 * @file
 * Definition of Nice Menus variables for Variable API module.
 */

/**
 * Implements hook_variable_info().
 */
function nice_menus_variable_info($options) {
  // Nice Menus defaults settings.
  $defaults = array(
    'group' => 'nice_menus',
    'localize' => TRUE,
    'multidomain' => TRUE,
  );
  // Number of Nice Menus blocks.
  $variables['nice_menus_number'] = array(
    'type' => 'string',
    'title' => t('Number of Nice Menus blocks', array(), $options),
    'default' => variable_get('nice_menus_number', 2),
      'element' => array(
        '#size' => 2,
        '#title_display' => 'invisible',
        '#maxlength' => 2,
      ),
    'description' => t('The total number of independent Nice menus blocks you want. Enter a number between 0 and 99. If you set this to 0, you will have no blocks created but you can still use the Nice menus theme functions directly in your theme.'),
    // Validate callback to ensure the value submitted is lower than 100.
    'validate callback' => 'nice_menus_validate_nice_menus_number',
  ) + $defaults;

  // Use JavaScript configuration setting.
  $variables['nice_menus_js'] = array(
    'type' => 'boolean',
    'title' => t('Use JavaScript'),
    'default' => variable_get('nice_menus_js', TRUE),
    'description' => t('This will add Superfish jQuery to Nice menus. This is required for Nice menus to work properly in Internet Explorer.'),
  ) + $defaults;

  // Mouse delay textfield for the time before the menus is closed.
  $variables['nice_menus_sf_delay'] = array(
    'type' => 'string',
    'title' => t('Mouse delay'),
    'default' => variable_get('nice_menus_sf_delay', 800),
    'element' => array(
      '#size' => 5,
    ),
    'description' => t('The delay in milliseconds that the mouse can remain outside a submenu without it closing.'),
  ) + $defaults;

  // Display speed of the animation for the menu to open/close.
  $variables['nice_menus_sf_speed'] = array(
    'type' => 'select',
    'title' => t('Animation speed'),
    'default' => variable_get('nice_menus_sf_speed', 'normal'),
    'description' => t('Speed of the menu open/close animation.'),
    'options' => array(
      'slow' => t('slow'),
      'normal' => t('normal'),
      'fast' => t('fast'),
    ),
    'element' => array(
      '#type' => 'select',
    ),
  ) + $defaults;

  return $variables;
}

/**
 * Implements hook_variable_group_info().
 */
function nice_menus_variable_group_info() {
  $groups['nice_menus'] = array(
    'title' => t('Nice Menus'),
    'description' => t('This is a simple module that enables the site to have drop down/flyout CSS menus for site and admin navigation.<br/>Remember to activate and configure the menu blocks in <a href="@link">admin/structure/block</a>.', array('@link' => url('admin/structure/block'))),
    'access' => 'administer site configuration',
    'path' => array('admin/config/user-interface/nice_menus'),
  );

  return $groups;
}

/**
 * Validate callback for the number of Nice Menus blocks.
 */
function nice_menus_validate_nice_menus_number($variable) {
  $number = $variable['value'];
  // Check to make sure it is a number and that is a maximum of 2 digits.
  if (!is_numeric($number) || strlen($number) > 2) {
    form_set_error('nice_menus_number', t('You must enter a number from 0 to 99.'));
  }
}
