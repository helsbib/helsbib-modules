<?php

/**
 * Implementation of hook_content_default_fields().
 */
function helbib_profile_image_content_default_fields() {
  $fields = array();

  // Exported field: field_profile_large_image
  $fields['profile-field_profile_large_image'] = array(
    'field_name' => 'field_profile_large_image',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => '210_x_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => '210_x_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => 0,
      'min_resolution' => '210x0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => FALSE,
      'insert_styles' => array(
        '0' => 1,
        'auto' => FALSE,
        'link' => FALSE,
        'image' => FALSE,
        'imagecache_80_x' => FALSE,
        'imagecache_120_120' => FALSE,
        'imagecache_180_x' => FALSE,
        'imagecache_210_x' => FALSE,
        'imagecache_440_width' => FALSE,
        'imagecache_460_180' => FALSE,
        'imagecache_460_240' => FALSE,
        'imagecache_680_200_crop' => FALSE,
        'imagecache_ting_search_carousel' => FALSE,
      ),
      'insert_default' => array(
        '0' => 'auto',
      ),
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Stort billede',
      'weight' => '-1',
      'description' => 'Dette billede bliver vist på selve profil siden',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Stort billede');

  return $fields;
}
