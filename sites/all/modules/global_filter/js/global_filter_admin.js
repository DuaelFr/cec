(function($) {

  Drupal.behaviors.GlobalFilterToggleViewOrFieldSelector = {
    attach: function(context, setting) {
      var filterKeys = setting.filter_keys;
      var viewSelectorDiv = [];
      var fieldSelectorDiv = [];
      var fieldsetIdPrefix = 'global-filter-driver-';
      var selectorIdPrefix = '#global-filter-selector-';
      for (var j = 0; j < filterKeys.length; j++) {
        if (filterKeys[j] != undefined) {
          var key = filterKeys[j];
          viewSelectorDiv[key]  = $(selectorIdPrefix + key + '-view' ).parent();
          fieldSelectorDiv[key] = $(selectorIdPrefix + key + '-field').parent();
          // Hide/show view or field selection based on current radio selection
          if ($('#' + fieldsetIdPrefix + key + ' input[type="radio"]:checked').val() < 1) {
            viewSelectorDiv[key].hide();
          }
          else {
            fieldSelectorDiv[key].hide();
          }
          // Define on-change handlers for each pair of radio buttons
          $('#' + fieldsetIdPrefix + key + ' input[type="radio"]').change(function() {
            // Extract filter key from the enclosing fieldset element
            id = $(this).parents('fieldset').attr('id'); // eg "global-filter-driver-3"
            key = parseInt(id.substr(fieldsetIdPrefix.length));
            if ($(this).val() < 1) {
              $(viewSelectorDiv[key] ).hide();
              $(fieldSelectorDiv[key]).show();
            }
            else {
              $(viewSelectorDiv[key] ).show();
              $(fieldSelectorDiv[key]).hide();
            }
          });
        }
      }
    }
  }
})(jQuery);
