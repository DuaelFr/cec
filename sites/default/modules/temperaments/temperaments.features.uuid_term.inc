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
    'uuid' => '10552fe8-8939-46d8-9526-5e1b02f1aee0',
    'name' => 'Timoré',
    'description' => '<p>« M...mais... ils sont au moins deux ! »</p><p>Vous êtes facilement effrayé et intimidable. Mais cela ne veut pas dire que vous soyez lâche, non vous êtes juste prudent par prudence.</p>',
    'weight' => '6',
    'vocabulary' => 'temperament',
  );
  $terms[] = array(
    'uuid' => '456c3a63-50c1-4b61-a7fa-672ff81713e4',
    'name' => 'Dévoué',
    'description' => '<p>«&nbsp;<em>Le vrai nom du dévouement, c\'est le désintéressement</em>.&nbsp;»</p><p>Vous êtes quelqu\'un de naturellement humble et serviable qui trouve sa place aux côtés des autres. Vous respectez et appréciez les autres. On vous dit convivial et vous êtes facilement abordable par les inconnus.</p>',
    'weight' => '8',
    'vocabulary' => 'temperament',
  );
  $terms[] = array(
    'uuid' => '489d28dd-5d18-4040-9a1e-7215a7bb1224',
    'name' => 'Généreux',
    'description' => '<p>«&nbsp;<em>Une âme peut se dire généreuse, quand elle prend plus de plaisir à donner qu\'à recevoir</em>.&nbsp;»</p><p>Vous êtes altruiste et charitable. Vous pouvez aussi bien offrir votre bourse à un mendiant qu\'offrir les tournées générales dans la taverne qui vous accueille ce soir.</p>',
    'weight' => '4',
    'vocabulary' => 'temperament',
  );
  $terms[] = array(
    'uuid' => '62261371-92f2-48cb-af13-dd52131354eb',
    'name' => 'Candide',
    'description' => '<p>«&nbsp;<em>C\'est vrai&nbsp;? Il y a des poissons dans les mers de la lune&nbsp;? Vous êtes fabuleusement intelligent messire&nbsp;!</em>&nbsp;»</p><p>Vous êtes un rien naïf et confiant envers autrui… de toute façon pourquoi les gens vous mentiraient-ils? Vous êtes aussi sincère et d\'un naturel optimiste.</p>',
    'weight' => '2',
    'vocabulary' => 'temperament',
  );
  $terms[] = array(
    'uuid' => '71a65d61-3f26-4fd6-a8a4-618c94504d40',
    'name' => 'Cupide',
    'description' => '<p>«&nbsp;<em>Tant que le luxe règnera chez les grands, la cupidité gouvernera tous les cœurs</em>.&nbsp;»</p><p>Vous êtes avare et économe; pour vous «&nbsp;un sou est un sou ». Vous êtes un matérialiste pour qui la richesse et la possession sont des raisons de vivre en soi.</p>',
    'weight' => '5',
    'vocabulary' => 'temperament',
  );
  $terms[] = array(
    'uuid' => '9730cdab-60e3-44fd-92b7-afe5fb4cc970',
    'name' => 'Honorable',
    'description' => '<p>« <em>Il est plus facile d\'être héros qu\'honnête homme. Héros nous pouvons l\'être une fois par hasard ; honnête homme il faut l\'être toujours</em>. »</p><p>Vous êtes un gars loyal honnête et droit. Vous faites toujours ce qui est juste même si cela va à l\'encontre de votre intérêt. Vos amis comme vos ennemis reconnaissent votre droiture et votre rigueur morale</p>',
    'weight' => '0',
    'vocabulary' => 'temperament',
  );
  $terms[] = array(
    'uuid' => '9b0cd4fb-4175-4b6c-855c-2647695f7a6a',
    'name' => 'Puissant',
    'description' => '<p>« <em>Tout pouvoir humain est un composé de patience et de temps. Les gens puissants veulent et veillent</em>. »</p><p>Vous n\'êtes pas de la race des moutons mais de celle des aigles. Vous aimez diriger les choses et les gens<strong>, </strong>et savez mettre vos talents au service de votre ambition pour atteindre la position qui est la votre de droit.</p>',
    'weight' => '9',
    'vocabulary' => 'temperament',
  );
  $terms[] = array(
    'uuid' => 'b615424a-5dff-437d-be56-9bd6544563cc',
    'name' => 'Calculateur',
    'description' => '<p>&laquo;&nbsp;<em>La sinc&eacute;rit&eacute;&hellip; Pff! C\'est un calcul comme un autre.</em>&nbsp;&raquo;</p>
<p>Vous &ecirc;tes pragmatique et r&eacute;fl&eacute;chi. Votre satisfaction n\'est jamais aussi compl&egrave;te que lorsqu\'un de vos plans, savamment &eacute;chafaud&eacute;, aboutit avec succ&egrave;s et rien ne vous frustre plus que l\'odieux hasard qui g&acirc;che tout &agrave; la derni&egrave;re minute.</p>',
    'weight' => '3',
    'vocabulary' => 'temperament',
  );
  $terms[] = array(
    'uuid' => 'eeb58def-31cb-40b4-9dcc-25780c049fd2',
    'name' => 'Fourbe',
    'description' => '<p>« <em>Il était d\'autant plus fourbe qu\'il ne l\'était pas toujours...</em> »</p><p>Vous êtes plutôt du genre sournois et hypocrite et votre conscience ne s\'alourdit pas de quelques petites (ou grosses) traîtrises. Ceux qui vous connaissent peuvent vous apprécier sans vous faire confiance, mais vous savez acquérir la confiance de ceux qui ne vous connaissent pas.</p>',
    'weight' => '1',
    'vocabulary' => 'temperament',
  );
  $terms[] = array(
    'uuid' => 'fb5d29c5-8ba2-4103-9127-272b1951d08e',
    'name' => 'Fougueux',
    'description' => '<p>«&nbsp; <em>Retenez-moi ou je fais un malheur!</em>&nbsp;»</p><p>Vous êtes courageux, fier et impulsif, de ceux qui foncent et réfléchissent ensuite mais à qui l\'action sourit plus que la réflexion.</p>',
    'weight' => '7',
    'vocabulary' => 'temperament',
  );
  return $terms;
}
