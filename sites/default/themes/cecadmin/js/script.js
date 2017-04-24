(function (Drupal, $) {

  Drupal.behaviors.CecPlanning = {
    attach: function(context, settings) {
      var $planning = $('.cec-planning');
      if ($planning.length) {
        $planning.find('a').each(function(i) {
          var h = $(this).parent('td').height();
          $(this).css('height', h);
        });
      }
    }
  };

})(Drupal, jQuery);
