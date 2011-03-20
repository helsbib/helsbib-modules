<?php

/**
 * Implements hook_strongarm()
 */
function helbib_panels_strongarm() {
  $export = array();

  // ding_content overwrites
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_article';
  $strongarm->value = '1';
  $export['comment_default_order_article'] = $strongarm;

  // ding_base overwrites
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'j M Y - H:i';
  $export['date_format_short'] = $strongarm;

  return $export;
}
