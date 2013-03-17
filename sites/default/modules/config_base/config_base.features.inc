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
 * Implements hook_workflow_default_workflows().
 */
function config_base_workflow_default_workflows() {
  $workflows = array();

  // Exported workflow: Avancement
  $workflows['Avancement'] = array(
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
        'roles' => 'workflow_features_author_name,Zorga',
        'state' => '(création)',
        'target_state' => 'En discussion',
      ),
      1 => array(
        'roles' => 'Zorga',
        'state' => '(création)',
        'target_state' => 'En prépa rédaction',
      ),
      2 => array(
        'roles' => 'Zorga',
        'state' => '(création)',
        'target_state' => 'En validation',
      ),
      3 => array(
        'roles' => 'Zorga',
        'state' => 'En discussion',
        'target_state' => 'En prépa rédaction',
      ),
      4 => array(
        'roles' => 'Zorga',
        'state' => 'En discussion',
        'target_state' => 'En validation',
      ),
      5 => array(
        'roles' => 'Zorga',
        'state' => 'En prépa rédaction',
        'target_state' => 'En discussion',
      ),
      6 => array(
        'roles' => 'Zorga',
        'state' => 'En prépa rédaction',
        'target_state' => 'En validation',
      ),
      7 => array(
        'roles' => 'Zorga',
        'state' => 'En validation',
        'target_state' => 'En prépa rédaction',
      ),
      8 => array(
        'roles' => 'Zorga',
        'state' => 'En validation',
        'target_state' => 'En rédaction',
      ),
      9 => array(
        'roles' => 'Zorga',
        'state' => 'En validation',
        'target_state' => 'En discussion',
      ),
      10 => array(
        'roles' => 'PNJ,Zorga',
        'state' => 'En rédaction',
        'target_state' => 'En relecture',
      ),
      11 => array(
        'roles' => 'Zorga',
        'state' => 'En relecture',
        'target_state' => 'En rédaction',
      ),
      12 => array(
        'roles' => 'PNJ,Zorga',
        'state' => 'En relecture',
        'target_state' => 'En att publication',
      ),
      13 => array(
        'roles' => 'Zorga',
        'state' => 'En relecture',
        'target_state' => 'Publié !',
      ),
      14 => array(
        'roles' => 'Zorga',
        'state' => 'En att publication',
        'target_state' => 'En rédaction',
      ),
      15 => array(
        'roles' => 'Zorga',
        'state' => 'En att publication',
        'target_state' => 'En relecture',
      ),
      16 => array(
        'roles' => 'Zorga',
        'state' => 'En att publication',
        'target_state' => 'Publié !',
      ),
    ),
    'node_types' => array(
      0 => 'avantage',
      1 => 'character',
      2 => 'event',
      3 => 'group',
      4 => 'information',
      5 => 'intrigue',
      6 => 'location',
      7 => 'sequence',
      8 => 'stuff',
    ),
  );

  return $workflows;
}
