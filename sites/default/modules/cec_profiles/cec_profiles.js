(function($) {

  Temperaments = window.Temperaments || {};

  Temperaments.restrict = function() {
    var disabled = [],
        id = 1,
        select, target;

    for (id = 1 ; id < 6 ; id++) {
      select = $('#edit-profile-profil-joueur-field-temperament' + id + '-und');
      tid = select.val();

      select.find('option').removeAttr('disabled');
      $.each(disabled, function(i, value) {
        select.find('option[value="' + value + '"]').attr('disabled', true);
      });
      if ($.inArray(tid, disabled) != -1) {
    	select.val('');
    	tid = '';
      }

      if (tid != '') {
        disabled.push(tid);
        disabled.push(Drupal.settings.temperaments_exclusion[tid]);
      }
    }
  };

  Temperaments.init = function() {
	$('#profile2_profil_joueur_form_group_first .form-select').each(function() {
	  if ($(this).find('option[value=""]').length == 0) {
		$(this).prepend($('<option value="">-- Aucun --</option>'));
	  }
	});
    $('#profile2_profil_joueur_form_group_first .form-select').change(Temperaments.restrict);
    Temperaments.restrict();
  };
  $(Temperaments.init);

})(jQuery);
