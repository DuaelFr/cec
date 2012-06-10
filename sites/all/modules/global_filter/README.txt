
GLOBAL FILTER CONFIGURATION (7.x)
=================================

A global filter can be either a field or a view. A search terms text box may
also be used as a global filter. It is treated like a field. Similarly, if you
have the Location module installed then you may also globally filter by
distance/proximity. You don't have to define a location field for this, as the
Location module creates this automatically on the selected content type(s).

Fields execute just that little faster and are slightly more straight-forward
to use, so maybe use a field unless none are suitable, in which case you'd
create a view or use an existing one. Follow the instructions below.

Fields can be found on the Structure >> Content types >> Manage fields and
Configuration >> Account settings >> Manage fields pages.

0) You normally use this module in the context of Views, so enable that module
together with Global Filter.

1) A couple of filter blocks, named "Global filter 1" and "Global filter 2" will
now be available at Structure >> Blocks. If you want to use more than two global
filters, you can create more filter blocks at Configuration >> Global Filter.
Click "configure" to select the field or view you want to employ to populate the
global filter widget. Note that the widget will be a text box, if the field does
ot represent a list, radio buttons, check box or vocabulary, i.e. a number or
text. Place the block or blocks anywhere on your site. If in step 2) you choose
the links widget, you may put the block in the -none- region and place links of
the form "/somepage?field_myfield=10" anywhere on your site, e.g. in menus, to
set the global filter. You can set multiple values too, by separating them by
commas: "/somepage?field_myfield=10,17". You can also insert these links on
other sites or in emails to direct the reader to a pre-filtered view of your
site.

2a) You may use either a field or the output of a view as a global filter. Use
the radio buttons on the block configuration page to select which one and
inspect the drop-down to see the fields available for use. If none of the node
properties/fields match what you're after, use a view. If you decide on a view,
set the Format to Unformatted and select "Show: Fields". Be aware that it will
be the first item under the view's Fields heading that will populate the filter
widget, so re-order your items if necessary. The remaining items will be
ignored. The view does not need to have a page or block display associated with
it and may even be disabled -- it will still operate correctly as a global
filter.
2b) After you have selected a widget, press "Save block". The page will refresh
and you will be able to enter a default for the field or view you selected. The
default will be active until the user makes a different filter selection. If
the global filter is a field that also appears on user profiles, then
authenticated users can override the global filter default with their personal
choice.

3) With the widget in place, you can now use it as the default value in a
Contextual Filter in any number of Views that you want to pass the filter to.
On the View edit page, open the Advanced field-set on the right. Then next to
Contextual Filters click Add and select the item corresponding to the global
filter source in the previous step. If you selected a View in step 2) then tick
a suitable ID option, e.g. if the view outputs taxonomy terms, then tick
"Taxonomy: Term ID" (not "Taxonomy: Term", i.e not the name/description).
After pressing "Add and configure..." on the next panel, press the radio button
"Provide default value".
3a) When you chose a field as the source for the global filter, select Type
"Global filter (field)".
3b) When you chose a View as the source for the global filter, select Type
"Global filter (view)" and then select the View driving this filter.

4) Apply and Save the View.

That's all. Repeat steps 3) and 4) for the remaining Views that need to use the
global filter.

The initial selection for each filter will be 'all', unless the underlying field
also appears on the user profile, in which case the value selected there will be
taken as the default.

By default each global filter widget comes with a Set button to activate the
selection. However if you tick the appropriate checkbox on the filter's
block page, the Set button does not appear and the filter is activated
immediately upon release of the mouse button.


USEFUL VIEW OPTIONS
===================
On the View edit page, in the contextual filter configuration panel, after you
have selected Global filter block to provide the default value, scroll down the
panel and expand the More field-set for a couple of additional useful options.
"Allow multiple values" is MANDATORY when you configured your global filter to
render as a multi choice widget.
"Exclude" is nice to populate a view with the compliment of the global filter
selection (e.g. all countries except European countries).


ADVANCED OPTIONS: ROTATING BLOCK CONTENT
========================================
A special auto-cycle filter is available under the "Advanced configuration"
fieldset on the Configuration >> Global Filter page. You can use this to create
block content that changes with every click on the site. Examples are ads, news
items or user profile pictures, that have to follow a specific logical sequence,
for instance chronological, alphabetical, by section or chapter number, or by
vocabulary term order.

You normally need two views for this (although at the bottom of this page we'll
mention a short-cut alternative for the second view). Let's call these the
filter view and the block/page view.

The filter view simply needs to return in the desired order, the nodes (or
users or etc.) that you wish to rotate through the block. This view does not
need page or block displays and doesn't have to output any fields, as the nids
are silently output anyway. However, to verify the view correctly returns the
nodes in the order you wish them to cycle through the block, we suggest to
configure the view format to output titles or teasers. Save this view.
Activate this view as the driver for the auto-cycle filter at Configuration >>
Global Filter, opening the "Advanced configuration" fieldset. Select the view
you've just created and press "on every page load".

The block/page view needs to produce at least as much content as the filter
view. In fact you could start by cloning the filter view and use it as a base.
Select any display format and any fields you like to display for the block of
rotating content. Don't forget to add a block or page display to this view!
Remember that only one of these pieces of content will be shown at any one time,
as auto-selected by the above filter view. This is established by adding a
Contextual Filter to the block/page view (Advanced fieldset, upper right
corner). Tick "Content: Nid" and "Apply...". Press "Provide default value" and
then select "Global filter (view)" from the Type drop-down. Your auto-cycle view
should appear in the next drop-down. Press "Apply...". Save this view.

Finally, if you went for a view with a block rather than page display at
Structure >> Blocks, move your block from the Disabled section into the desired
page region.

Verify the view appears and note that with every new page you visit the
page/block view displays another piece of content.

Shortcut: if you're happy to have just the title show in the block, you could
do the following. Don't create a second view. Create a block instead, select
"PHP code" for the block text format and enter in the block body text area:

<?php
  $node = node_load($_SESSION['global_filter']['view_autocycle']);
  print theme('node',  array('elements' => array('#node' => $node, '#view_mode' => 'teaser')));
?>

Depending on how your theme's node.tpl.php is organised this will most likely
show just the title (hyperlinked) of the next piece of auto-selected content.
