<?php
/**
 * @file
 * Theme settings for Fubik.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function cecadmin_form_system_theme_settings_alter(&$form) {
  $form['cecadmin'] = array(
    '#type' => 'fieldset',
    '#title' => 'Fubik',
    '#collapsible' => FALSE,
  );

  $form['cecadmin']['cecadmin_show_user_menu'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show User Menu in Top Right Corner'),
    '#default_value' => theme_get_setting('cecadmin_show_user_menu'),
  );
}