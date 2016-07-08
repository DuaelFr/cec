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

  // ---------------------------------------------------------------------------

  Drupal.behaviors.AdminInvite = {
    attach: function(context, settings) {
      $('#cec-profiles-create-form').once('admin-invite', function() {
        $(this).find(':input[name="search"]')
          .bind('autocompleteSelect', function() {
            var values = $(this).val().split('|'),
              $form = $(this).parents('form');

            $form.find(':input[name="uid"]').val(values[0]).trigger('keyup');
            $form.find(':input[name="firstname"]').val(values[1]);
            $form.find(':input[name="lastname"]').val(values[2]);
            $form.find(':input[name="email"]').val(values[3]);
            $(this).val('');
          });
      });
    }
  };

})(jQuery, Drupal);
