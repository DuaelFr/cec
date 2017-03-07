<?php

/**
 * Implements hook_views_data().
 */
function cec_commons_views_data() {
  $data['field_data_field_opus']['current_opus'] = [
    'group' => 'Content',
    'title' => 'Current opus (field_opus)',
    'title short' => 'Current opus',
    'help' => 'Filtre sur l\'opus en cours défini de manière globale.',
    'real field' => 'field_opus_value',
    'filter' => [
      'handler' => 'views_handler_filter_current_opus',
    ],
  ];
  return $data;
}
