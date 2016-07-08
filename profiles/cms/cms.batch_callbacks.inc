<?php

/**
 * @file
 * Contains Batch API callbacks used during installation.
 */

/**
 * BatchAPI callback.
 * We make sure dedencies are resolved beforehand to we can skip
 * recursive depency analysis for each batch run
 *
 * @see cms_install_additional_modules()
 */
function _cms_enable_module($module, &$context) {
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

  module_enable(array($module), TRUE);
  $context['message'] = st('Installed %module module.', array('%module' => $module));
}

/**
 * BatchAPI callback.
 *
 * @see cms_install_additional_modules()
 */
function _cms_flush_caches($operation, &$context) {
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

  module_enable(array($demopack));

  $context['message'] = st('Demo Import complete. Clear and rebuild all caches. This may take a minute or two, depending on your system.');
}
