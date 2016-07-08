<?php
/**
 * @file
 * cms_portfolio_content.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function cms_portfolio_content_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Photography',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4e9e1f82-0684-4fed-8916-6a1b1d76764e',
    'vocabulary_machine_name' => 'cms_portfolio_category',
  );
  $terms[] = array(
    'name' => 'Print Design',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
    'vocabulary_machine_name' => 'cms_portfolio_category',
  );
  $terms[] = array(
    'name' => 'Typography',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e94cbd43-3334-4460-ba33-8bb0d85ed789',
    'vocabulary_machine_name' => 'cms_portfolio_category',
  );
  $terms[] = array(
    'name' => 'Branding',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
    'vocabulary_machine_name' => 'cms_portfolio_category',
  );
  return $terms;
}
