<?php
/**
 * @file
 * config_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_workflow_features_default_workflow().
 */
function config_base_workflow_features_default_workflow() {
  return array(
    'Avancement' => array(
      'name' => 'Avancement',
      'tab_roles' => '168020977',
      'options' => 'a:3:{s:16:"comment_log_node";i:1;s:15:"comment_log_tab";i:1;s:13:"name_as_title";i:1;}',
      'states' => array(
        0 => array(
          'state' => '(création)',
          'weight' => '-50',
          'sysid' => '1',
          'status' => '1',
        ),
        1 => array(
          'state' => 'En discussion',
          'weight' => '0',
          'sysid' => '0',
          'status' => '1',
        ),
        2 => array(
          'state' => 'En prépa rédaction',
          'weight' => '1',
          'sysid' => '0',
          'status' => '1',
        ),
        3 => array(
          'state' => 'En validation',
          'weight' => '2',
          'sysid' => '0',
          'status' => '1',
        ),
        4 => array(
          'state' => 'En rédaction',
          'weight' => '4',
          'sysid' => '0',
          'status' => '1',
        ),
        5 => array(
          'state' => 'En relecture',
          'weight' => '5',
          'sysid' => '0',
          'status' => '1',
        ),
        6 => array(
          'state' => 'En att publication',
          'weight' => '6',
          'sysid' => '0',
          'status' => '1',
        ),
        7 => array(
          'state' => 'Publié !',
          'weight' => '7',
          'sysid' => '0',
          'status' => '1',
        ),
      ),
      'transitions' => array(
        0 => array(
          'sid' => '(création)',
          'target_sid' => 'En discussion',
          'roles' => 'author,168020977',
        ),
        1 => array(
          'sid' => '(création)',
          'target_sid' => 'En prépa rédaction',
          'roles' => '168020977',
        ),
        2 => array(
          'sid' => '(création)',
          'target_sid' => 'En validation',
          'roles' => '168020977',
        ),
        3 => array(
          'sid' => 'En discussion',
          'target_sid' => 'En prépa rédaction',
          'roles' => '168020977',
        ),
        4 => array(
          'sid' => 'En discussion',
          'target_sid' => 'En validation',
          'roles' => '168020977',
        ),
        5 => array(
          'sid' => 'En prépa rédaction',
          'target_sid' => 'En discussion',
          'roles' => '168020977',
        ),
        6 => array(
          'sid' => 'En prépa rédaction',
          'target_sid' => 'En validation',
          'roles' => '168020977',
        ),
        7 => array(
          'sid' => 'En validation',
          'target_sid' => 'En prépa rédaction',
          'roles' => '168020977',
        ),
        8 => array(
          'sid' => 'En validation',
          'target_sid' => 'En rédaction',
          'roles' => '168020977',
        ),
        9 => array(
          'sid' => 'En validation',
          'target_sid' => 'En discussion',
          'roles' => '168020977',
        ),
        10 => array(
          'sid' => 'En rédaction',
          'target_sid' => 'En relecture',
          'roles' => '168020977,199742668',
        ),
        11 => array(
          'sid' => 'En relecture',
          'target_sid' => 'En rédaction',
          'roles' => '168020977',
        ),
        12 => array(
          'sid' => 'En relecture',
          'target_sid' => 'En att publication',
          'roles' => '199742668,168020977',
        ),
        13 => array(
          'sid' => 'En relecture',
          'target_sid' => 'Publié !',
          'roles' => '168020977',
        ),
        14 => array(
          'sid' => 'En att publication',
          'target_sid' => 'En rédaction',
          'roles' => '168020977',
        ),
        15 => array(
          'sid' => 'En att publication',
          'target_sid' => 'En relecture',
          'roles' => '168020977',
        ),
        16 => array(
          'sid' => 'En att publication',
          'target_sid' => 'Publié !',
          'roles' => '168020977',
        ),
      ),
      'node_types' => array(
        0 => array(
          'type' => 'avantage',
          'wid' => '1',
        ),
        1 => array(
          'type' => 'character',
          'wid' => '1',
        ),
        2 => array(
          'type' => 'event',
          'wid' => '1',
        ),
        3 => array(
          'type' => 'group',
          'wid' => '1',
        ),
        4 => array(
          'type' => 'information',
          'wid' => '1',
        ),
        5 => array(
          'type' => 'intrigue',
          'wid' => '1',
        ),
        6 => array(
          'type' => 'location',
          'wid' => '1',
        ),
        7 => array(
          'type' => 'sequence',
          'wid' => '1',
        ),
        8 => array(
          'type' => 'stuff',
          'wid' => '1',
        ),
      ),
    ),
  );
}
