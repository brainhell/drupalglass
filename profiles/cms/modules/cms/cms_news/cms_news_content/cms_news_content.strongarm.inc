<?php
/**
 * @file
 * cms_news_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cms_news_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_news';
  $strongarm->value = '1';
  $export['node_preview_news'] = $strongarm;

  return $export;
}
