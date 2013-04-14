<?php

function cecadmin_preprocess_form_node(&$vars) {
  if (!empty($vars['form']['workflow'])) {
    $vars['sidebar']['workflow'] = $vars['form']['workflow'];
    $vars['sidebar']['workflow']['#weight'] = 99;
    unset($vars['sidebar']['workflow']['#group']);
    unset($vars['sidebar']['workflow']['#groups']);
    unset($vars['form']['workflow']);

    $vars['sidebar']['#wf'] = $vars['form']['#wf'];
    unset($vars['form']['#wf']);

    $vars['sidebar']['#wf_options'] = $vars['form']['#wf_options'];
    unset($vars['form']['#wf_options']);

    $i = 0;
    while (!empty($vars['form']['additional_settings']['group']['#groups']['additional_settings'][$i])) {
      if ($vars['form']['additional_settings']['group']['#groups']['additional_settings'][$i]['#id'] == 'edit-workflow') {
        unset($vars['form']['additional_settings']['group']['#groups']['additional_settings'][$i]);
        $i = -1;
      }
      else {
        ++$i;
      }
    }
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
      $vars['sidebar']['field_attachment'] = $vars['form']['field_attachment'];
      unset($vars['form']['field_attachment']);
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
      $vars['sidebar']['field_intrigue_theme'] = $vars['form']['field_intrigue_theme'];
      unset($vars['form']['field_intrigue_theme']);
      break;
    case 'group_node_form':
      $vars['sidebar']['field_group_type'] = $vars['form']['field_group_type'];
      unset($vars['form']['field_group_type']);
      $vars['sidebar']['field_group_is_technical'] = $vars['form']['field_group_is_technical'];
      unset($vars['form']['field_group_is_technical']);
      break;
    case 'stuff_node_form':
      $vars['sidebar']['field_stuff_type'] = $vars['form']['field_stuff_type'];
      unset($vars['form']['field_stuff_type']);
      break;
    case 'location_node_form':
      $vars['sidebar']['field_location_type'] = $vars['form']['field_location_type'];
      unset($vars['form']['field_location_type']);
      break;
    case 'sequence_node_form':
      $vars['sidebar']['field_sequence_type'] = $vars['form']['field_sequence_type'];
      unset($vars['form']['field_sequence_type']);
      $vars['sidebar']['field_intrigue'] = $vars['form']['field_intrigue'];
      unset($vars['form']['field_intrigue']);
      $vars['sidebar']['field_dates'] = $vars['form']['field_dates'];
      unset($vars['form']['field_dates']);
      $vars['sidebar']['field_location'] = $vars['form']['field_location'];
      unset($vars['form']['field_location']);
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
