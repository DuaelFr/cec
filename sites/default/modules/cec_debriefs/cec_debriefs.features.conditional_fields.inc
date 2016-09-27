<?php
/**
 * @file
 * cec_debriefs.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function cec_debriefs_conditional_fields_default_fields() {
  $items = array();

  $items["profile2:debrief_texte:0"] = array(
    'entity' => 'profile2',
    'bundle' => 'debrief_texte',
    'dependent' => 'field_debrie_contrat_secondaire',
    'dependee' => 'field_debrief_contrat_principal',
    'options' => array(
      'state' => 'visible',
      'condition' => '!empty',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        125268670 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        203293079 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        247050890 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        66570830 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        32775451 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        199742668 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        168020977 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        149933350 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        125268670 => array(
          1 => 1,
          3 => 0,
        ),
        203293079 => array(
          1 => 1,
          3 => 0,
        ),
        247050890 => array(
          1 => 1,
          3 => 0,
        ),
        66570830 => array(
          1 => 1,
          3 => 0,
        ),
        32775451 => array(
          1 => 1,
          3 => 0,
        ),
        199742668 => array(
          1 => 1,
          3 => 0,
        ),
        168020977 => array(
          1 => 1,
          3 => 0,
        ),
        149933350 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value' => array(),
      'values' => array(),
      'value_form' => array(),
    ),
  );

  $items["profile2:debrief_texte:1"] = array(
    'entity' => 'profile2',
    'bundle' => 'debrief_texte',
    'dependent' => 'field_debrief_bottes_detail',
    'dependee' => 'field_debrief_bottes',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        125268670 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        203293079 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        247050890 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        66570830 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        32775451 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        199742668 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        168020977 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        149933350 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        125268670 => array(
          1 => 1,
          3 => 0,
        ),
        203293079 => array(
          1 => 1,
          3 => 0,
        ),
        247050890 => array(
          1 => 1,
          3 => 0,
        ),
        66570830 => array(
          1 => 1,
          3 => 0,
        ),
        32775451 => array(
          1 => 1,
          3 => 0,
        ),
        199742668 => array(
          1 => 1,
          3 => 0,
        ),
        168020977 => array(
          1 => 1,
          3 => 0,
        ),
        149933350 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 1,
      'value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'values' => array(),
    ),
  );

  $items["profile2:debrief_texte:2"] = array(
    'entity' => 'profile2',
    'bundle' => 'debrief_texte',
    'dependent' => 'field_debrief_contrat_autre',
    'dependee' => 'field_debrie_contrat_secondaire',
    'options' => array(
      'state' => 'visible',
      'condition' => '!empty',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        125268670 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        203293079 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        247050890 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        66570830 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        32775451 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        199742668 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        168020977 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        149933350 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        125268670 => array(
          1 => 1,
          3 => 0,
        ),
        203293079 => array(
          1 => 1,
          3 => 0,
        ),
        247050890 => array(
          1 => 1,
          3 => 0,
        ),
        66570830 => array(
          1 => 1,
          3 => 0,
        ),
        32775451 => array(
          1 => 1,
          3 => 0,
        ),
        199742668 => array(
          1 => 1,
          3 => 0,
        ),
        168020977 => array(
          1 => 1,
          3 => 0,
        ),
        149933350 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value' => array(),
      'values' => array(),
      'value_form' => array(),
    ),
  );

  $items["profile2:debrief_texte:3"] = array(
    'entity' => 'profile2',
    'bundle' => 'debrief_texte',
    'dependent' => 'field_debrief_suite_perso',
    'dependee' => 'field_debrief_suite',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        125268670 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        203293079 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        247050890 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        66570830 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        32775451 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        199742668 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        168020977 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        149933350 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        125268670 => array(
          1 => 1,
          3 => 0,
        ),
        203293079 => array(
          1 => 1,
          3 => 0,
        ),
        247050890 => array(
          1 => 1,
          3 => 0,
        ),
        66570830 => array(
          1 => 1,
          3 => 0,
        ),
        32775451 => array(
          1 => 1,
          3 => 0,
        ),
        199742668 => array(
          1 => 1,
          3 => 0,
        ),
        168020977 => array(
          1 => 1,
          3 => 0,
        ),
        149933350 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 1,
      'value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'values' => array(),
    ),
  );

  return $items;
}
