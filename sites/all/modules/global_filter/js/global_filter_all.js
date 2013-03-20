(function($) {

  Drupal.behaviors.GlobalFilterSubmit = {
    attach: function(context, setting) {
      // Cater for up to 9 global filters across the blocks on this page.
      var filterSettings =
        [setting.global_filter_1, setting.global_filter_2, setting.global_filter_3,
         setting.global_filter_4, setting.global_filter_5, setting.global_filter_6,
         setting.global_filter_7, setting.global_filter_8, setting.global_filter_9];

      var confirmQuestion = [];
      var autoSubmit = []; // ie set-on-change
      var oldValues = [];

      // Find global filter widgets on this page and define on-change handlers
      // for those that have either a confirmation msg or set-on-change set.
      for (var i = 0; i < filterSettings.length; i++) {
        if (filterSettings[i] != undefined) {

          var selector = '', elId = '';
          var claz = '.' + filterSettings[i][0]; // eg '.global-filter-2-field-acc-type'

          $(claz+' input:radio[checked]').each(function() {
            selector = claz + ' input:radio'; // ie catch ANY of the radio buttons
            elId = $(this).attr('class');
            oldValues[elId] = $(this).attr('id');
          });
          $(claz+' input:checkbox').each(function() {
            selector = claz + ' input:checkbox'; // catch ALL checkboxes in the family
            elId = $(this).attr('class');
            return false; // break on first match
          });
          if (elId == '') {
            // Single/Multi selects, date fields and text fields
            var selectors = ['select'+claz, claz+' select', 'input:text'+claz, claz+' input:.date-clear', '.global-filter-links'+claz];
            for (var sel=0; sel < selectors.length; sel++) {
              $(selectors[sel]).each(function() { // date range has 2 fields
                selector = selectors[sel];
                if (!(elId = $(this).attr('id'))) {
                  elId = $(this).attr('class');
                }
                oldValues[elId] = $(this).val();
                confirmQuestion[elId] = filterSettings[i][1]; // eg 'Are you sure?'
                autoSubmit[elId] = filterSettings[i][2]; // '1' or undefined
              });
            }
          }
          else {
            confirmQuestion[elId] = filterSettings[i][1];
            autoSubmit[elId] = filterSettings[i][2];
          }

          if (selector == '') {
            continue;
          }
          // Define on-change event handlers for all widgets on the page
          $(selector).change(function(event) {
            var type = $(this).attr('type');
            var elId = $(this).attr(type == 'radio' || type == 'checkbox' ? 'class' : 'id');
            var changeConfirmed = !confirmQuestion[elId] || confirm(Drupal.t(confirmQuestion[elId]));
            if (!changeConfirmed) {
              // On second thoughts user declined: restore old selection
              switch (type) {
                case 'radio':
                  // Press the originally selected radio button again.
                  $('#' + oldValues[elId]).attr('checked', true);
                  break;

                case 'checkbox':
                  // Toggle back the checkbox just clicked
                  $(this).attr('checked', !$(this).attr('checked'));
                  break;

                default:
                  // Put the old value back in the box
                  $(this).val(oldValues[elId]);
              }
            }
            if (autoSubmit[elId] || changeConfirmed) {
              // Find enclosing form and auto-submit as soon as a new value is selected.
              for (var element = $(this).parent(); !element.is('form'); element = element.parent()) {}
              element.submit();
            }
          });

          // On-change handler for links widget is an on-click handler
          $('.global-filter-links'+claz+' li a').click(function(event) {
            elId = $(this).parent().parent().attr('class');
            var changeConfirmed = !confirmQuestion[elId] || confirm(Drupal.t(confirmQuestion[elId]));
            if (!changeConfirmed) {
              event.preventDefault(); // inhibit click action
            }
            else if (setting.links_widget_via_post) {
              event.preventDefault(); // inhibit click and post instead
              var id = $(this).attr('id');
              // id has format <field>:<value>
              var pos = id.indexOf(':');
              var field = id.substr(0, pos);
              var value = id.substr(pos + 1);
              var data = new Object;
              data['from_links_widget'] = field;
              data[field] = value;
              global_filter_post_to('', data);
            }
          });
        }
      }
    }
  }

})(jQuery);

function global_filter_post_to(url, data) {
  jQuery.post(
    url,
    data,
    // Upon confirmation that the post was received, initiate a page refresh.
    // At this time the main module has already set the filter on the session.
    function(response){
      location.href = '';
    }
  );
}
