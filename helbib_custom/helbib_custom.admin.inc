<?php

/**
 * @file
 * Admin pages for helbib custom module.
 */

/**
 * Page callback; settings page.
 */
/**
 *
 */
function helbib_custom_event_cron_settings_form(&$form_state) {

  $unpublish_time = array(
                      1 => '1 time',
                      3 => '3 timer',
                      5 => '5 timer',
                      8 => '8 timer',
                      24 => '1 dag',
                      48 => '2 dage',
                      72 => '3 dage');
  $form['helbib_custom_unpublish_efter_time'] = array(
    '#type' => 'select',
    '#title' => t('Set events to be unpubliced'),
    '#options' => $unpublish_time,
    '#description' => t('Defauft value is 3 hours : Expired events will be set to be unpublished 3 hours after theirs date/time.'),
    '#default_value' => variable_get('helbib_custom_unpublish_efter_time', 3),
  );

  return system_settings_form($form);
}
