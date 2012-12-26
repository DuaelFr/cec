<?php

function cecadmin_preprocess_form_node(&$vars) {
  if (!empty($vars['form']['workflow'])) {
    $vars['sidebar']['workflow'] = $vars['form']['workflow'];
    $vars['sidebar']['workflow']['#weight'] = 99;
    unset($vars['form']['workflow']);
  }
  
  switch ($vars['form']['#form_id']) {
    case 'character_node_form':
      $vars['sidebar']['field_character_type'] = $vars['form']['field_character_type'];
      unset($vars['form']['field_character_type']);
      $vars['sidebar']['field_incarnate'] = $vars['form']['field_incarnate'];
      unset($vars['form']['field_incarnate']);
      $vars['sidebar']['field_character_state'] = $vars['form']['field_character_state'];
      unset($vars['form']['field_character_state']);
      break;
    case 'avantage_node_form':
      $vars['sidebar']['field_avantage_type'] = $vars['form']['field_avantage_type'];
      unset($vars['form']['field_avantage_type']);
      $vars['sidebar']['field_value'] = $vars['form']['field_value'];
      unset($vars['form']['field_value']);
      break;
    case 'event_node_form':
      $vars['sidebar']['field_event_type'] = $vars['form']['field_event_type'];
      unset($vars['form']['field_event_type']);
      $vars['sidebar']['field_intrigue'] = $vars['form']['field_intrigue'];
      unset($vars['form']['field_intrigue']);
      $vars['sidebar']['field_dates'] = $vars['form']['field_dates'];
      unset($vars['form']['field_dates']);
      break;
    case 'information_node_form':
      $vars['sidebar']['field_information_type'] = $vars['form']['field_information_type'];
      unset($vars['form']['field_information_type']);
      $vars['sidebar']['field_intrigue'] = $vars['form']['field_intrigue'];
      unset($vars['form']['field_intrigue']);
      break;
    case 'intrigue_node_form':
      $vars['sidebar']['field_intrigue_type'] = $vars['form']['field_intrigue_type'];
      unset($vars['form']['field_intrigue_type']);
      break;
    case 'group_node_form':
      $vars['sidebar']['field_group_type'] = $vars['form']['field_group_type'];
      unset($vars['form']['field_group_type']);
      $vars['sidebar']['field_group_is_technical'] = $vars['form']['field_group_is_technical'];
      unset($vars['form']['field_group_is_technical']);
      break;
  }
}

/**
 * Implementation of hook_theme().
 */
function cecadmin_theme() {
  $items = rubik_theme();

  $items['node_form']['preprocess functions'][] = 'cecadmin_preprocess_form_node';

  return $items;
}
