<?php

/**
 * Implementation of hook_strongarm().
 */
function helbib_base_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_library_map_center';
  $strongarm->value = array(
    'lat' => '56.03522578369872',
    'lon' => '12.568359375',
  );

  $export['ding_library_map_center'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_library_map_zoom';
  $strongarm->value = '12';

  $export['ding_library_map_zoom'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_layers_google_api';
  $strongarm->value = 'ABQIAAAAjywFUo2iTz09kJOkbvQERBTkMDgXF1Dg57XV-6i26eb716jyMxQpE6Te6X1uVCFM-3-L80trf-N4Hw';

  $export['openlayers_layers_google_api'] = $strongarm;
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
  $strongarm->value = 'helsbib.dk';

  $export['webtrends_domain'] = $strongarm;
  return $export;
}
