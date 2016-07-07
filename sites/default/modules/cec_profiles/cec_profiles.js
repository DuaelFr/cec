(function($, Drupal, undefined) {
  "use strict";

  function restrictTemperaments() {
    var disabled = [],
      id, tid, $select;

    for (id = 1 ; id < 6 ; id++) {
      $select = $('#edit-profile-profil-joueur-field-temperament' + id + '-und');
      tid = $select.val();

      $select.find('option').removeAttr('disabled');
      $.each(disabled, function(i, value) {
        $select.find('option[value="' + value + '"]').attr('disabled', true);
      });
      if ($.inArray(tid, disabled) != -1) {
        if ($select.find('option[value="_none"]').length == 0) {
          $select.val('');
        } else {
          $select.val('_none');
        }
        tid = '_none';
      }

      if (tid != '_none') {
        disabled.push(tid);
        disabled.push(Drupal.settings.temperaments_exclusion[tid]);
      }
    }
  }

  Drupal.behaviors.SelectTemperaments = {
    attach: function(context, settings) {
      $('#profile2-edit-profil-joueur-form .group-first .form-select')
        .once('select-temperaments', function() {
          if ($(this).find('option[value=""]').length == 0 && $(this).find('option[value="_none"]').length == 0) {
            $(this).prepend($('<option value="">-- Aucun --</option>'));
          }
        })
        .change(restrictTemperaments);
      if ($('#profile2-edit-profil-joueur-form').length) {
        restrictTemperaments();
      }
    }
  };

})(jQuery, Drupal);
