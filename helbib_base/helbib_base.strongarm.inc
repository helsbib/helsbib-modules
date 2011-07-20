<?php

/**
 * Implementation of hook_strongarm().
 */
function helbib_base_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webtrends_dcs_id';
  $strongarm->value = 'dcsc6jmhht3uwyqgqs2ngnzic_2h8s';

  $export['webtrends_dcs_id'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webtrends_domain';
  $strongarm->value = '.helsbib.dk';

  $export['webtrends_domain'] = $strongarm;
  return $export;
}
