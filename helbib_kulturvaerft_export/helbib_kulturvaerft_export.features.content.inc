<?php

/**
 * Implementation of hook_content_default_fields().
 */
function helbib_kulturvaerft_export_content_default_fields() {
  $fields = array();

  // Exported field: field_category
  $fields['event-field_category'] = array(
    'field_name' => 'field_category',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '27',
      'parent' => '',
      '2' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '3' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'mobile' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '1076|Musik
1124|Teater
1325|Show
2669|Event
1078|Udstilling
1468|Litteratur
1127|Dans
1077|Foredrag & Debat
1383|Kurser & Workshops
1467|Film
1470|Familieliv
2012|Rundvisninger
1251|Brunch +
3928|Nyhed
4851|Møde & Konference
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Category',
      'weight' => '27',
      'description' => 'Bruges til eksport til Kulturværftet.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_export_image
  $fields['event-field_export_image'] = array(
    'field_name' => 'field_export_image',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '29',
      'parent' => '',
      '2' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '3' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'mobile' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
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
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_80_x' => 0,
        'imagecache_120_120' => 0,
        'imagecache_180_x' => 0,
        'imagecache_210_x' => 0,
        'imagecache_680_200_crop' => 0,
        'imagecache_ting_search_carousel' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Export Image',
      'weight' => '29',
      'description' => 'Billede til eksport til Kulturværftet. Størrelsesforholdet skal være 1:2.48, f.eks. 620x250.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_facility
  $fields['event-field_facility'] = array(
    'field_name' => 'field_facility',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '26',
      'parent' => '',
      '2' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '3' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'mobile' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '1638|Arkaden
1553|Biblioteket 1. etage
1275|Biblioteket 2. etage
1939|Biblioteket 3. etage
1280|Foyer
1276|Green Room
1938|Grotten
1937|Hulen
1278|Krydsfeltet
1370|Kulturværftets Spisehus
1258|Lille Scene
1697|Møde- og konferenceområde
1338|Prismen
3813|Røde Plads
2113|Sekretariatet
1242|Store Scene
1695|Terrassen
2651|Toldkammeret
1277|Værftsmuseet
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Facility',
      'weight' => '26',
      'description' => 'Bruges til eksport til Kulturværftet.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_targetgroup
  $fields['event-field_targetgroup'] = array(
    'field_name' => 'field_targetgroup',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '28',
      'parent' => '',
      '2' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '3' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'mobile' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '1091|Familien
1092|Unge
1252|Børn
1253|Ældre
1335|Gratis-arrangementer
1256|Voksne
1471|Tema-arrangementer
1472|Sær-arrangementer
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Target group',
      'weight' => '28',
      'description' => 'Bruges til eksport til Kulturværftet. (Hold CTRL eller ⌘ nede og klik for at vælge flere typer)',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Category');
  t('Export Image');
  t('Facility');
  t('Target group');

  return $fields;
}
