<?php
/**
 * Implementation of hook_content_default_fields().
 */
function helbib_panels_content_default_fields() {
  module_load_include('inc', 'helbib_panels', 'helbib_panels.defaults');
  $args = func_get_args();
  return call_user_func_array('_helbib_panels_content_default_fields', $args);
}

/**
 * Implementation of hook_views_api().
 */
function helbib_panels_views_api() {
  return array(
    'api' => '2',
  );
}

