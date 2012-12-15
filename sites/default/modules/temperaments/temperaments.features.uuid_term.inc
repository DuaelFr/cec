<?php
/**
 * @file
 * temperaments.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function temperaments_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Timoré',
    'description' => '<p>« M...mais... ils sont au moins deux ! »</p><p>Vous êtes facilement effrayé et intimidable. Mais cela ne veut pas dire que vous soyez lâche, non vous êtes juste prudent par prudence.</p>',
    'format' => 'full_html',
    'weight' => '6',
    'uuid' => '10552fe8-8939-46d8-9526-5e1b02f1aee0',
    'vocabulary_machine_name' => 'temperament',
    'field_antonym' => array(
      'und' => array(
        0 => array(
          'tid' => 'fb5d29c5-8ba2-4103-9127-272b1951d08e',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Dévoué',
    'description' => '<p>«&nbsp;<em>Le vrai nom du dévouement, c\'est le désintéressement</em>.&nbsp;»</p><p>Vous êtes quelqu\'un de naturellement humble et serviable qui trouve sa place aux côtés des autres. Vous respectez et appréciez les autres. On vous dit convivial et vous êtes facilement abordable par les inconnus.</p>',
    'format' => 'full_html',
    'weight' => '8',
    'uuid' => '456c3a63-50c1-4b61-a7fa-672ff81713e4',
    'vocabulary_machine_name' => 'temperament',
    'field_antonym' => array(
      'und' => array(
        0 => array(
          'tid' => '9b0cd4fb-4175-4b6c-855c-2647695f7a6a',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Généreux',
    'description' => '<p>«&nbsp;<em>Une âme peut se dire généreuse, quand elle prend plus de plaisir à donner qu\'à recevoir</em>.&nbsp;»</p><p>Vous êtes altruiste et charitable. Vous pouvez aussi bien offrir votre bourse à un mendiant qu\'offrir les tournées générales dans la taverne qui vous accueille ce soir.</p>',
    'format' => 'full_html',
    'weight' => '4',
    'uuid' => '489d28dd-5d18-4040-9a1e-7215a7bb1224',
    'vocabulary_machine_name' => 'temperament',
    'field_antonym' => array(
      'und' => array(
        0 => array(
          'tid' => '71a65d61-3f26-4fd6-a8a4-618c94504d40',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Candide',
    'description' => '<p>«&nbsp;<em>C\'est vrai&nbsp;? Il y a des poissons dans les mers de la lune&nbsp;? Vous êtes fabuleusement intelligent messire&nbsp;!</em>&nbsp;»</p><p>Vous êtes un rien naïf et confiant envers autrui… de toute façon pourquoi les gens vous mentiraient-ils? Vous êtes aussi sincère et d\'un naturel optimiste.</p>',
    'format' => 'full_html',
    'weight' => '2',
    'uuid' => '62261371-92f2-48cb-af13-dd52131354eb',
    'vocabulary_machine_name' => 'temperament',
    'field_antonym' => array(
      'und' => array(
        0 => array(
          'tid' => 'b615424a-5dff-437d-be56-9bd6544563cc',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cupide',
    'description' => '<p>«&nbsp;<em>Tant que le luxe règnera chez les grands, la cupidité gouvernera tous les cœurs</em>.&nbsp;»</p><p>Vous êtes avare et économe; pour vous «&nbsp;un sou est un sou ». Vous êtes un matérialiste pour qui la richesse et la possession sont des raisons de vivre en soi.</p>',
    'format' => 'full_html',
    'weight' => '5',
    'uuid' => '71a65d61-3f26-4fd6-a8a4-618c94504d40',
    'vocabulary_machine_name' => 'temperament',
    'field_antonym' => array(
      'und' => array(
        0 => array(
          'tid' => '489d28dd-5d18-4040-9a1e-7215a7bb1224',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Honorable',
    'description' => '<p>« <em>Il est plus facile d\'être héros qu\'honnête homme. Héros nous pouvons l\'être une fois par hasard ; honnête homme il faut l\'être toujours</em>. »</p><p>Vous êtes un gars loyal honnête et droit. Vous faites toujours ce qui est juste même si cela va à l\'encontre de votre intérêt. Vos amis comme vos ennemis reconnaissent votre droiture et votre rigueur morale</p>',
    'format' => 'full_html',
    'weight' => '0',
    'uuid' => '9730cdab-60e3-44fd-92b7-afe5fb4cc970',
    'vocabulary_machine_name' => 'temperament',
    'field_antonym' => array(
      'und' => array(
        0 => array(
          'tid' => 'eeb58def-31cb-40b4-9dcc-25780c049fd2',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Puissant',
    'description' => '<p>« <em>Tout pouvoir humain est un composé de patience et de temps. Les gens puissants veulent et veillent</em>. »</p><p>Vous n\'êtes pas de la race des moutons mais de celle des aigles. Vous aimez diriger les choses et les gens<strong>, </strong>et savez mettre vos talents au service de votre ambition pour atteindre la position qui est la votre de droit.</p>',
    'format' => 'full_html',
    'weight' => '9',
    'uuid' => '9b0cd4fb-4175-4b6c-855c-2647695f7a6a',
    'vocabulary_machine_name' => 'temperament',
    'field_antonym' => array(
      'und' => array(
        0 => array(
          'tid' => '456c3a63-50c1-4b61-a7fa-672ff81713e4',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Calculateur',
    'description' => '<p>&laquo;&nbsp;<em>La sinc&eacute;rit&eacute;&hellip; Pff! C\'est un calcul comme un autre.</em>&nbsp;&raquo;</p>
<p>Vous &ecirc;tes pragmatique et r&eacute;fl&eacute;chi. Votre satisfaction n\'est jamais aussi compl&egrave;te que lorsqu\'un de vos plans, savamment &eacute;chafaud&eacute;, aboutit avec succ&egrave;s et rien ne vous frustre plus que l\'odieux hasard qui g&acirc;che tout &agrave; la derni&egrave;re minute.</p>',
    'format' => 'full_html',
    'weight' => '3',
    'uuid' => 'b615424a-5dff-437d-be56-9bd6544563cc',
    'vocabulary_machine_name' => 'temperament',
    'field_antonym' => array(
      'und' => array(
        0 => array(
          'tid' => '62261371-92f2-48cb-af13-dd52131354eb',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Fourbe',
    'description' => '<p>« <em>Il était d\'autant plus fourbe qu\'il ne l\'était pas toujours...</em> »</p><p>Vous êtes plutôt du genre sournois et hypocrite et votre conscience ne s\'alourdit pas de quelques petites (ou grosses) traîtrises. Ceux qui vous connaissent peuvent vous apprécier sans vous faire confiance, mais vous savez acquérir la confiance de ceux qui ne vous connaissent pas.</p>',
    'format' => 'full_html',
    'weight' => '1',
    'uuid' => 'eeb58def-31cb-40b4-9dcc-25780c049fd2',
    'vocabulary_machine_name' => 'temperament',
    'field_antonym' => array(
      'und' => array(
        0 => array(
          'tid' => '9730cdab-60e3-44fd-92b7-afe5fb4cc970',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Fougueux',
    'description' => '<p>«&nbsp; <em>Retenez-moi ou je fais un malheur!</em>&nbsp;»</p><p>Vous êtes courageux, fier et impulsif, de ceux qui foncent et réfléchissent ensuite mais à qui l\'action sourit plus que la réflexion.</p>',
    'format' => 'full_html',
    'weight' => '7',
    'uuid' => 'fb5d29c5-8ba2-4103-9127-272b1951d08e',
    'vocabulary_machine_name' => 'temperament',
    'field_antonym' => array(
      'und' => array(
        0 => array(
          'tid' => '10552fe8-8939-46d8-9526-5e1b02f1aee0',
        ),
      ),
    ),
  );
  return $terms;
}
