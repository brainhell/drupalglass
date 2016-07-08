<?php
/**
 * @file
 * cms_portfolio_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function cms_portfolio_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'App Mockup',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440665700,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '144a4987-8e06-4795-b3f8-36532f548cff',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div>
	<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>

	<p>The Big Oxmox advised her not to do so, because there were thousands of bad Commas, wild Question Marks and devious Semikoli, but the Little Blind Text didn’t listen.</p>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => ' Pityful a rethoric ',
        'format' => NULL,
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => 'c98e1a4c-bce6-4b59-81c0-64fa68613972',
        'image_field_caption' => array(
          'value' => 'The copy warned the Little Blind Text, that where it came from it would have been rewritten a thousand times and everything that was left from its origin would be the word "and" and the Little Blind Text should turn around and return to its own, safe country. But nothing the copy said could convince her and so it didn’t take long until a few insidious Copy Writers ambushed her, made her drunk with Longe and Parole and dragged her into their agency, where they abused her for their projects again and again.
<p>&nbsp;&nbsp;&nbsp; And if she hasn’t been rewritten, then they are still using her. Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts.</p>

<p></p>
',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
        'uuid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:55:00 +0000',
  'user_uuid' => '02eb5f9e-a86c-401d-ab0b-51b5e02ad5a7',
);
  $nodes[] = array(
  'title' => 'Stationary Branding',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440665700,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2b805604-a725-40d8-941d-0ebdbac3d077',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div>
	<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>

	<p>The Big Oxmox advised her not to do so, because there were thousands of bad Commas, wild Question Marks and devious Semikoli, but the Little Blind Text didn’t listen.</p>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'SooperThemes',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Glazed',
        'format' => NULL,
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '0c84f401-a22c-49ad-a4a4-e9325c3b5586',
        'image_field_caption' => array(
          'value' => '',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
        'uuid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:55:00 +0000',
  'user_uuid' => '02eb5f9e-a86c-401d-ab0b-51b5e02ad5a7',
);
  $nodes[] = array(
  'title' => 'Stationary Design',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440664175,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '46776433-49a0-4da7-bf2a-35f97342e47c',
  'body' => array(),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => 'b4de4073-d00d-4432-8dae-b126bd9134e4',
        'image_field_caption' => array(
          'value' => '',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
        'uuid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
      ),
      1 => array(
        'tid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
        'uuid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:29:35 +0000',
  'user_uuid' => '02eb5f9e-a86c-401d-ab0b-51b5e02ad5a7',
);
  $nodes[] = array(
  'title' => 'B&W Photography',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663703,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '66705fa9-4a74-4b5d-ba68-5d4b2b441c42',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div>
	<p>Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts.</p>

	<p>Separated they live in Bookmarksgrove right at the coast of the Semantics, a large language ocean.</p>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => 'a771a8dd-b867-4ef9-aea4-e51bb6d09e35',
        'image_field_caption' => array(
          'value' => '',
          'format' => 'wysiwyg_simple',
        ),
      ),
      1 => array(
        'file_uuid' => '2442d676-b8dd-482a-96f9-4c5963c4fd11',
        'image_field_caption' => array(
          'value' => '',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => '4e9e1f82-0684-4fed-8916-6a1b1d76764e',
        'uuid' => '4e9e1f82-0684-4fed-8916-6a1b1d76764e',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:21:43 +0000',
  'user_uuid' => '02eb5f9e-a86c-401d-ab0b-51b5e02ad5a7',
);
  $nodes[] = array(
  'title' => 'Maniac Typeface',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440664225,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6e95a721-dc10-4df8-9169-66eee9cdf916',
  'body' => array(),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '5213a92b-79a5-40ef-89b9-7bc39ff6d1db',
        'image_field_caption' => array(
          'value' => '',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => 'e94cbd43-3334-4460-ba33-8bb0d85ed789',
        'uuid' => 'e94cbd43-3334-4460-ba33-8bb0d85ed789',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:30:25 +0000',
  'user_uuid' => '02eb5f9e-a86c-401d-ab0b-51b5e02ad5a7',
);
  $nodes[] = array(
  'title' => 'Apple Watch Concept',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440752996,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '810ccb6a-f32d-452e-b8e3-fa8cf2396e9a',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>

<p>The Big Oxmox advised her not to do so, because there were thousands of bad Commas, wild Question Marks and devious Semikoli, but the Little Blind Text didn’t listen.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '1d4bcb64-8375-46c0-8e51-d2eaab008a70',
        'image_field_caption' => array(
          'value' => '<p>The copy warned the Little Blind Text, that where it came from it would have been rewritten a thousand times and everything that was left from its origin would be the word "and" and the Little Blind Text should turn around and return to its own, safe country. But nothing the copy said could convince her and so it didn’t take long until a few insidious Copy Writers ambushed her, made her drunk with Longe and Parole and dragged her into their agency, where they abused her for their projects again and again.</p>

<p>And if she hasn’t been rewritten, then they are still using her. Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts.</p>
',
          'format' => 'wysiwyg_simple',
        ),
      ),
      1 => array(
        'file_uuid' => '8dc9e860-decd-45fb-9cd6-26d84baef42d',
        'image_field_caption' => array(
          'value' => '',
          'format' => 'wysiwyg_simple',
        ),
      ),
      2 => array(
        'file_uuid' => '5b086912-2f01-4324-97d4-f5ec1aa5a830',
        'image_field_caption' => array(
          'value' => '',
          'format' => 'wysiwyg_simple',
        ),
      ),
      3 => array(
        'file_uuid' => '7c8f1521-8754-42e2-ac63-73cc60326836',
        'image_field_caption' => array(
          'value' => '',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
        'uuid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-28 09:09:56 +0000',
  'user_uuid' => '02eb5f9e-a86c-401d-ab0b-51b5e02ad5a7',
);
  $nodes[] = array(
  'title' => 'CD Cover',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440750666,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '91ea6105-d5a4-4202-a30c-e4afd630d3f9',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>It is a paradisematic country, in which roasted parts of sentences fly into your mouth.</p>

<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric question',
        'format' => NULL,
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '122e7e0e-f44d-4266-b808-0e441ecd522d',
        'image_field_caption' => array(
          'value' => '',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
        'uuid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
      ),
      1 => array(
        'tid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
        'uuid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-28 08:31:06 +0000',
  'user_uuid' => '02eb5f9e-a86c-401d-ab0b-51b5e02ad5a7',
);
  $nodes[] = array(
  'title' => 'Gravity Paper',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440665700,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'afa694d4-055b-4cc3-a4c6-e5235621761d',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>A small river named Duden flows by their place and supplies it with the necessary regelialia.</p>

<p>It is a paradisematic country, in which roasted parts of sentences fly into your mouth.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '99108329-a759-4e62-90a3-0a87092a8de7',
        'image_field_caption' => array(
          'value' => '',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
        'uuid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
      ),
      1 => array(
        'tid' => 'e94cbd43-3334-4460-ba33-8bb0d85ed789',
        'uuid' => 'e94cbd43-3334-4460-ba33-8bb0d85ed789',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:55:00 +0000',
  'user_uuid' => '02eb5f9e-a86c-401d-ab0b-51b5e02ad5a7',
);
  $nodes[] = array(
  'title' => 'Body Paint',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440749347,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f92ce0fd-a55f-4a71-9203-624270628344',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts.</p>

<p>Separated they live in Bookmarksgrove right at the coast of the Semantics, a large language ocean.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.sooperthemes.com/pricing',
        'title' => 'Project Link',
        'attributes' => array(
          'class' => 'btn btn-md btn-primary',
        ),
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '3f9d6fd1-8a6b-458e-acdb-c44369015419',
        'image_field_caption' => array(
          'value' => '<p>A small river named Duden flows by their place and supplies it with the necessary regelialia.</p>

<p>It is a paradisematic country, in which roasted parts of sentences fly into your mouth.</p>
',
          'format' => 'wysiwyg_simple',
        ),
      ),
      1 => array(
        'file_uuid' => '2581e24f-17a7-4773-9157-756241c47c8f',
        'image_field_caption' => array(
          'value' => '<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">And if she hasn’t been rewritten, then they are still using her.</p>

<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts.</p>

<p style="margin: 0px 0px 10px; padding: 0px; line-height: normal; color: rgb(102, 102, 102); font-style: normal; font-variant: normal; font-weight: normal; letter-spacing: normal; orphans: auto; text-indent: 0px; text-transform: none; white-space: normal; widows: 1; word-spacing: 0px; -webkit-text-stroke-width: 0px; font-family: Verdana, Geneva, sans-serif; font-size: 10px; text-decoration: none; text-align: left; background-color: rgb(255, 255, 255);">Separated they live in Bookmarksgrove right at the coast of the Semantics, a large language ocean.</p>
',
          'format' => 'wysiwyg_simple',
        ),
      ),
    ),
  ),
  'field_glazed_content_design' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => '4e9e1f82-0684-4fed-8916-6a1b1d76764e',
        'uuid' => '4e9e1f82-0684-4fed-8916-6a1b1d76764e',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-28 08:09:07 +0000',
  'user_uuid' => '02eb5f9e-a86c-401d-ab0b-51b5e02ad5a7',
);
  return $nodes;
}
