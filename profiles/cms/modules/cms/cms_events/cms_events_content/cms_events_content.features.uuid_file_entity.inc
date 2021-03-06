<?php
/**
 * @file
 * cms_events_content.features.uuid_file_entity.inc
 */

/**
 * Implements hook_uuid_features_default_file_entities().
 */
function cms_events_content_uuid_features_default_file_entities() {
  $files = array();

  $files[] = array(
    'filename' => 'unsplash-architect-tools.jpeg',
    'uri' => 'public://event-images/unsplash-architect-tools.jpeg',
    'filemime' => 'image/jpeg',
    'filesize' => 92655,
    'status' => 1,
    'type' => 'image',
    'uuid' => '35c49e60-7ea1-4a65-bbdb-3cef1bcc3f15',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'rdf_mapping' => array(),
    'metadata' => array(
      'height' => 760,
      'width' => 1140,
    ),
    'alt' => '',
    'title' => '',
    'height' => 760,
    'width' => 1140,
    'uuid_features_packaged_file_path' => 'assets/unsplash-architect-tools.jpeg',
    'user_uuid' => 'df551113-5569-4b6f-b035-1856283c5278',
  );
  $files[] = array(
    'filename' => 'unsplash-path-forest.jpg',
    'uri' => 'public://event-images/unsplash-path-forest.jpg',
    'filemime' => 'image/jpeg',
    'filesize' => 343850,
    'status' => 1,
    'type' => 'image',
    'uuid' => 'c1ff569b-9688-42c8-aa85-7b417f8741e6',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'rdf_mapping' => array(),
    'metadata' => array(
      'height' => 760,
      'width' => 1140,
    ),
    'alt' => '',
    'title' => '',
    'height' => 760,
    'width' => 1140,
    'uuid_features_packaged_file_path' => 'assets/unsplash-path-forest.jpg',
    'user_uuid' => 'df551113-5569-4b6f-b035-1856283c5278',
  );
  return $files;
}
