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
        'state' => 'Discussion',
        'weight' => '0',
        'sysid' => '0',
        'status' => '1',
      ),
      2 => array(
        'state' => 'Validation',
        'weight' => '1',
        'sysid' => '0',
        'status' => '1',
      ),
      3 => array(
        'state' => 'Rédaction',
        'weight' => '2',
        'sysid' => '0',
        'status' => '1',
      ),
      4 => array(
        'state' => 'Relecture',
        'weight' => '4',
        'sysid' => '0',
        'status' => '1',
      ),
      5 => array(
        'state' => 'Publication',
        'weight' => '5',
        'sysid' => '0',
        'status' => '1',
      ),
    ),
    'transitions' => array(
      0 => array(
        'roles' => 'workflow_features_author_name,Zorga',
        'state' => '(création)',
        'target_state' => 'Discussion',
      ),
      1 => array(
        'roles' => 'Zorga',
        'state' => '(création)',
        'target_state' => 'Validation',
      ),
      2 => array(
        'roles' => 'Zorga',
        'state' => '(création)',
        'target_state' => 'Rédaction',
      ),
      3 => array(
        'roles' => 'Zorga',
        'state' => '(création)',
        'target_state' => 'Relecture',
      ),
      4 => array(
        'roles' => 'Zorga',
        'state' => '(création)',
        'target_state' => 'Publication',
      ),
      5 => array(
        'roles' => 'Zorga',
        'state' => 'Discussion',
        'target_state' => 'Validation',
      ),
      6 => array(
        'roles' => 'Zorga',
        'state' => 'Discussion',
        'target_state' => 'Rédaction',
      ),
      7 => array(
        'roles' => 'Zorga',
        'state' => 'Discussion',
        'target_state' => 'Relecture',
      ),
      8 => array(
        'roles' => 'Zorga',
        'state' => 'Discussion',
        'target_state' => 'Publication',
      ),
      9 => array(
        'roles' => 'Zorga',
        'state' => 'Validation',
        'target_state' => 'Discussion',
      ),
      10 => array(
        'roles' => 'Zorga',
        'state' => 'Validation',
        'target_state' => 'Rédaction',
      ),
      11 => array(
        'roles' => 'Zorga',
        'state' => 'Validation',
        'target_state' => 'Relecture',
      ),
      12 => array(
        'roles' => 'Zorga',
        'state' => 'Validation',
        'target_state' => 'Publication',
      ),
      13 => array(
        'roles' => 'Zorga',
        'state' => 'Rédaction',
        'target_state' => 'Validation',
      ),
      14 => array(
        'roles' => 'Zorga',
        'state' => 'Rédaction',
        'target_state' => 'Relecture',
      ),
      15 => array(
        'roles' => 'Zorga',
        'state' => 'Rédaction',
        'target_state' => 'Discussion',
      ),
      16 => array(
        'roles' => 'Zorga',
        'state' => 'Relecture',
        'target_state' => 'Publication',
      ),
      17 => array(
        'roles' => 'Zorga',
        'state' => 'Relecture',
        'target_state' => 'Validation',
      ),
      18 => array(
        'roles' => 'Zorga',
        'state' => 'Relecture',
        'target_state' => 'Rédaction',
      ),
      19 => array(
        'roles' => 'Zorga',
        'state' => 'Relecture',
        'target_state' => 'Discussion',
      ),
    ),
    'node_types' => array(
      0 => 'avantage',
      1 => 'character',
      2 => 'event',
      3 => 'group',
      4 => 'information',
      5 => 'intrigue',
    ),
  );

  return $workflows;
}
