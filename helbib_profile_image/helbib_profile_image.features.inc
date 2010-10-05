<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function helbib_profile_image_imagecache_default_presets() {
  $items = array(
    '210_x' => array(
      'presetname' => '210_x',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '210',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
  );
  return $items;
}
