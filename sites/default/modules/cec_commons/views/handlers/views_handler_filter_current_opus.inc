<?php

/**
 * @file
 * Definition of views_handler_filter_current_opus.
 */

/**
 * @ingroup views_filter_handlers
 */
class views_handler_filter_current_opus extends views_handler_filter {

  /**
   * Add this filter to the query.
   *
   * Due to the nature of fapi, the value and the operator have an unintended
   * level of indirection. You will find them in $this->operator
   * and $this->value respectively.
   */
  function query() {
    $this->ensure_my_table();
    $field = "$this->table_alias.$this->real_field";

    $this->query->add_where($this->options['group'], $field, variable_get('cec_current_opus'), $this->operator);
  }

}
