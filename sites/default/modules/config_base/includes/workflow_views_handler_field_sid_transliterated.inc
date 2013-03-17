<?php

/**
 * @file
 * Provide views field handler for workflow.module.
 */

/**
 * Field handler to provide simple renderer that allows linking to a node.
 */
class workflow_views_handler_field_sid_transliterated extends workflow_views_handler_field_sid {
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    if (module_exists('transliteration')) {
      $form['transliterate'] = array(
        '#title' => t('Transliterate'),
        '#type' => 'checkbox',
        '#default_value' => FALSE,
      );
    }
  }

  function option_definition() {
    $options = parent::option_definition();

    $options['transliterate'] = array('default' => FALSE, 'bool' => TRUE);

    return $options;
  }

  function render($values) {
    $output = parent::render($values);

    if (!empty($this->options['transliterate']) && module_exists('transliteration')) {
      $output = transliteration_clean_filename($output);
    }

    return $output;
  }
}
