(function($) {

  Drupal.behaviors.Sequences = {
    'attach': function(context) {
      var form = $('#sequence-node-form', context);
      $('.form-type-date-select .date-year :input', form).attr('disabled', true);
      form.submit(function() {
        $('.form-type-date-select .date-year :input', form).attr('disabled', false);
      });
    }
  };

})(jQuery);
