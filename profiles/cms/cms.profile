<?php
/**
 * Initiate the Profiler library
 */
!function_exists('profiler_v2') ? require_once('libraries/profiler/profiler.inc') : FALSE;
profiler_v2('cms');

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter install profile selection form.
 *
 * We have to call 'system' here because drupal doesn't seem to pick up on
 * the hook ('cms') at this level in the install process.
 */
function system_form_install_select_profile_form_alter(&$form, $form_state) {
   foreach($form['profile'] as $key => $element) {
     $form['profile'][$key]['#value'] = 'cms';
   }
}
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function cms_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}

/**
 * Implements hook_init().
 * @todo move this to hook cache_rebuild in D8
 */
function cms_init() {
  // http://drupal.stackexchange.com/questions/146401/uuid-menu-links-will-not-stick-during-profile-installation-but-work-fine-when-re
  // Run init script after the "Congratulations you installed cms" message
  if ((variable_get('install_profile', FALSE) == 'cms') && (variable_get('cms_initialised_demo_content', FALSE) == FALSE)) {
    $t1 = (int) microtime(TRUE);
    $selected_imports = variable_get('cms_selected_imports');
    $demopack = variable_get('cms_demopack');

    if (ini_get('memory_limit') != '-1' && ini_get('memory_limit') <= '196M') {
      ini_set('memory_limit', '196M');
    }
    if (ini_get('max_execution_time') != '0' && ini_get('max_execution_time') <= '300') {
      ini_set('max_execution_time', '300');
      ini_set('max_input_time', '300');
    }
    ini_set('realpath_cache_size=', '2M');
    $max_nesting_level = ini_get('xdebug.max_nesting_level');
    if ($max_nesting_level > 0 && $max_nesting_level <= '200') {
      ini_set('xdebug.max_nesting_level', 200);
    }
    if ($selected_imports) {
      foreach ($selected_imports as $module) {
        if (module_exists($module)) {
          features_revert(array($module => array('menu_links')));
        }
      }
    }
    if (module_exists($demopack)) {
      features_revert(array($demopack => array('menu_links')));
    }

    module_load_include('inc', 'pathauto');
    module_load_include('inc', 'pathauto.pathauto');
    $nids = db_query("SELECT nid FROM {node}")->fetchCol();
    pathauto_node_update_alias_multiple($nids, 'bulkupdate');

    variable_set('cms_initialised_demo_content', TRUE);
    // Remove any status messages that might have been set. They are unneeded.
    drupal_get_messages('status', TRUE);
    drupal_get_messages('warning', TRUE);

    $t2 = (int) microtime(TRUE);
    $time = $t2 - $t1;
    watchdog('cms.install', '@time sec cms_init install tasks', array('@time' => $time));

  }
}