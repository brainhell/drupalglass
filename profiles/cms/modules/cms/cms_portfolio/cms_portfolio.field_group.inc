<?php
/**
 * @file
 * cms_portfolio.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cms_portfolio_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cms_portfolio_fields|node|portfolio|default';
  $field_group->group_name = 'group_cms_portfolio_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_cms_portfolio_top';
  $field_group->data = array(
    'label' => 'Portfolio Extra Fields',
    'weight' => '2',
    'children' => array(
      0 => 'field_cms_portfolio_client',
      1 => 'field_cms_portfolio_links',
      2 => 'field_cms_portoflio_custom',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Portfolio Extra Fields',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-portfolio-extra field-group-div col-sm-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cms_portfolio_fields|node|portfolio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cms_portfolio_fields|node|portfolio|form';
  $field_group->group_name = 'group_cms_portfolio_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Portfolio extra fields',
    'weight' => '3',
    'children' => array(
      0 => 'field_cms_portfolio_client',
      1 => 'field_cms_portfolio_links',
      2 => 'field_cms_portoflio_custom',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cms-portfolio-fields field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_cms_portfolio_fields|node|portfolio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cms_portfolio_top|node|portfolio|default';
  $field_group->group_name = 'group_cms_portfolio_top';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'portfolio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top Fields',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'group_cms_portfolio_fields',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Top Fields',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-cms-portfolio-top field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cms_portfolio_top|node|portfolio|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Portfolio Extra Fields');
  t('Portfolio extra fields');
  t('Top Fields');

  return $field_groups;
}
