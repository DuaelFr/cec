<?php

/**
 * @todo comment...
 * 
 * @return array
 *   Settings.
 */
function hook_view_mode_per_role_get_role_options() {
  $result = array();

  $result[] = array(
    'group' => t('Special'),
    'identifier' => 'special_author',
    'label' => t('Author'),
  );

  return $result;
}

/**
 * Check if this identifier is active in the current context.
 * 
 * @param $node
 *   The active node.
 * @param $identifier
 *   The identifier.
 * @return boolean
 *   TRUE if the identifier is active.
 */
function hook_view_mode_per_role_is_active($node, $identifier) {
  global $user;
  $result = FALSE;

  switch ($identifier) {
    case 'special_author':
      $result = $node->uid == $user->uid;
      break;
  }

  return $result;
}
