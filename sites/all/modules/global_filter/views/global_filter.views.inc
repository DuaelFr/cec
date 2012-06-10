<?php
/**
 * @file
 * global_filter_views.inc
 *
 * Defines the Global Filter default argument plugin.
 */

/**
 * Implements hook_views_plugins().
 */
function global_filter_views_plugins() {
  $plugins = array(
    'argument default' => array(
      'global_filter_field' => array(
        'title' => t('Global filter (field or search terms)'),
        'handler' => 'global_filter_plugin_argument_default_global_filter_field'
      ),
      'global_filter_view' => array(
        'title' => t('Global filter (view)'),
        'handler' => 'global_filter_plugin_argument_default_global_filter_view'
      ),
      'global_filter_proximity' => array(
        'title' => t('Global filter (proximity)'),
        'handler' => 'global_filter_plugin_argument_default_global_filter_proximity'
      ),
    )
  );
  return $plugins;
}
