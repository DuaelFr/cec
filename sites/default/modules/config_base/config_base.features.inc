<?php
/**
 * @file
 * config_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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
    'tab_roles' => 168020977,
    'options' => 'a:4:{s:16:"comment_log_node";i:1;s:15:"comment_log_tab";i:1;s:13:"name_as_title";i:1;s:12:"watchdog_log";i:1;}',
    'states' => array(
      0 => array(
        'state' => '(création)',
        'weight' => -50,
        'sysid' => 1,
        'status' => 1,
        'name' => 'Avancement',
      ),
      1 => array(
        'state' => 'En discussion',
        'weight' => 0,
        'sysid' => 0,
        'status' => 1,
        'name' => 'Avancement',
      ),
      2 => array(
        'state' => 'En prépa rédaction',
        'weight' => 1,
        'sysid' => 0,
        'status' => 1,
        'name' => 'Avancement',
      ),
      3 => array(
        'state' => 'En validation',
        'weight' => 2,
        'sysid' => 0,
        'status' => 1,
        'name' => 'Avancement',
      ),
      4 => array(
        'state' => 'En rédaction',
        'weight' => 4,
        'sysid' => 0,
        'status' => 1,
        'name' => 'Avancement',
      ),
      5 => array(
        'state' => 'En relecture',
        'weight' => 5,
        'sysid' => 0,
        'status' => 1,
        'name' => 'Avancement',
      ),
      6 => array(
        'state' => 'En att publication',
        'weight' => 6,
        'sysid' => 0,
        'status' => 1,
        'name' => 'Avancement',
      ),
      7 => array(
        'state' => 'Publié !',
        'weight' => 7,
        'sysid' => 0,
        'status' => 1,
        'name' => 'Avancement',
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
        'state' => '(création)',
        'target_state' => 'En rédaction',
      ),
      4 => array(
        'roles' => 'Zorga',
        'state' => '(création)',
        'target_state' => 'En relecture',
      ),
      5 => array(
        'roles' => 'Zorga',
        'state' => '(création)',
        'target_state' => 'En att publication',
      ),
      6 => array(
        'roles' => 'Zorga',
        'state' => '(création)',
        'target_state' => 'Publié !',
      ),
      7 => array(
        'roles' => 'Zorga',
        'state' => 'En discussion',
        'target_state' => 'En prépa rédaction',
      ),
      8 => array(
        'roles' => 'Zorga',
        'state' => 'En discussion',
        'target_state' => 'En validation',
      ),
      9 => array(
        'roles' => 'Zorga',
        'state' => 'En discussion',
        'target_state' => '(création)',
      ),
      10 => array(
        'roles' => 'Zorga',
        'state' => 'En discussion',
        'target_state' => 'En rédaction',
      ),
      11 => array(
        'roles' => 'Zorga',
        'state' => 'En discussion',
        'target_state' => 'En relecture',
      ),
      12 => array(
        'roles' => 'Zorga',
        'state' => 'En discussion',
        'target_state' => 'En att publication',
      ),
      13 => array(
        'roles' => 'Zorga',
        'state' => 'En discussion',
        'target_state' => 'Publié !',
      ),
      14 => array(
        'roles' => 'Zorga',
        'state' => 'En prépa rédaction',
        'target_state' => 'En discussion',
      ),
      15 => array(
        'roles' => 'Zorga',
        'state' => 'En prépa rédaction',
        'target_state' => 'En validation',
      ),
      16 => array(
        'roles' => 'Zorga',
        'state' => 'En prépa rédaction',
        'target_state' => '(création)',
      ),
      17 => array(
        'roles' => 'Zorga',
        'state' => 'En prépa rédaction',
        'target_state' => 'En rédaction',
      ),
      18 => array(
        'roles' => 'Zorga',
        'state' => 'En prépa rédaction',
        'target_state' => 'En relecture',
      ),
      19 => array(
        'roles' => 'Zorga',
        'state' => 'En prépa rédaction',
        'target_state' => 'En att publication',
      ),
      20 => array(
        'roles' => 'Zorga',
        'state' => 'En prépa rédaction',
        'target_state' => 'Publié !',
      ),
      21 => array(
        'roles' => 'Zorga',
        'state' => 'En validation',
        'target_state' => 'En prépa rédaction',
      ),
      22 => array(
        'roles' => 'Zorga',
        'state' => 'En validation',
        'target_state' => 'En rédaction',
      ),
      23 => array(
        'roles' => 'Zorga',
        'state' => 'En validation',
        'target_state' => 'En discussion',
      ),
      24 => array(
        'roles' => 'Zorga',
        'state' => 'En validation',
        'target_state' => '(création)',
      ),
      25 => array(
        'roles' => 'Zorga',
        'state' => 'En validation',
        'target_state' => 'En relecture',
      ),
      26 => array(
        'roles' => 'Zorga',
        'state' => 'En validation',
        'target_state' => 'En att publication',
      ),
      27 => array(
        'roles' => 'Zorga',
        'state' => 'En validation',
        'target_state' => 'Publié !',
      ),
      28 => array(
        'roles' => 'PNJ,Zorga',
        'state' => 'En rédaction',
        'target_state' => 'En relecture',
      ),
      29 => array(
        'roles' => 'Zorga',
        'state' => 'En rédaction',
        'target_state' => '(création)',
      ),
      30 => array(
        'roles' => 'Zorga',
        'state' => 'En rédaction',
        'target_state' => 'En discussion',
      ),
      31 => array(
        'roles' => 'Zorga',
        'state' => 'En rédaction',
        'target_state' => 'En prépa rédaction',
      ),
      32 => array(
        'roles' => 'Zorga',
        'state' => 'En rédaction',
        'target_state' => 'En validation',
      ),
      33 => array(
        'roles' => 'Zorga',
        'state' => 'En rédaction',
        'target_state' => 'En att publication',
      ),
      34 => array(
        'roles' => 'Zorga',
        'state' => 'En rédaction',
        'target_state' => 'Publié !',
      ),
      35 => array(
        'roles' => 'Zorga',
        'state' => 'En relecture',
        'target_state' => 'En rédaction',
      ),
      36 => array(
        'roles' => 'PNJ,Zorga',
        'state' => 'En relecture',
        'target_state' => 'En att publication',
      ),
      37 => array(
        'roles' => 'Zorga',
        'state' => 'En relecture',
        'target_state' => 'Publié !',
      ),
      38 => array(
        'roles' => 'Zorga',
        'state' => 'En relecture',
        'target_state' => '(création)',
      ),
      39 => array(
        'roles' => 'Zorga',
        'state' => 'En relecture',
        'target_state' => 'En discussion',
      ),
      40 => array(
        'roles' => 'Zorga',
        'state' => 'En relecture',
        'target_state' => 'En prépa rédaction',
      ),
      41 => array(
        'roles' => 'Zorga',
        'state' => 'En relecture',
        'target_state' => 'En validation',
      ),
      42 => array(
        'roles' => 'Zorga',
        'state' => 'En att publication',
        'target_state' => 'En rédaction',
      ),
      43 => array(
        'roles' => 'Zorga',
        'state' => 'En att publication',
        'target_state' => 'En relecture',
      ),
      44 => array(
        'roles' => 'Zorga',
        'state' => 'En att publication',
        'target_state' => 'Publié !',
      ),
      45 => array(
        'roles' => 'Zorga',
        'state' => 'En att publication',
        'target_state' => '(création)',
      ),
      46 => array(
        'roles' => 'Zorga',
        'state' => 'En att publication',
        'target_state' => 'En discussion',
      ),
      47 => array(
        'roles' => 'Zorga',
        'state' => 'En att publication',
        'target_state' => 'En prépa rédaction',
      ),
      48 => array(
        'roles' => 'Zorga',
        'state' => 'En att publication',
        'target_state' => 'En validation',
      ),
      49 => array(
        'roles' => 'Zorga',
        'state' => 'Publié !',
        'target_state' => '(création)',
      ),
      50 => array(
        'roles' => 'Zorga',
        'state' => 'Publié !',
        'target_state' => 'En discussion',
      ),
      51 => array(
        'roles' => 'Zorga',
        'state' => 'Publié !',
        'target_state' => 'En prépa rédaction',
      ),
      52 => array(
        'roles' => 'Zorga',
        'state' => 'Publié !',
        'target_state' => 'En validation',
      ),
      53 => array(
        'roles' => 'Zorga',
        'state' => 'Publié !',
        'target_state' => 'En rédaction',
      ),
      54 => array(
        'roles' => 'Zorga',
        'state' => 'Publié !',
        'target_state' => 'En relecture',
      ),
      55 => array(
        'roles' => 'Zorga',
        'state' => 'Publié !',
        'target_state' => 'En att publication',
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
