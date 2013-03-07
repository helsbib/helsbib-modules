<?php

/**
 * @file
 * Plugin to provide access control based upon a library node's status 
 * as a special library.
 */

/**
 * Implementation of hook_ctools_access().
 */
function helbib_panels_helsbib_page_type_ctools_access() {
  return array(
    'helsbib_page_type' => array(
      'title' => t('Helsbib page type'),
      'description' => t('Control access by page type.'),
      'callback' => 'helbib_panels_helsbib_page_type_ctools_access_check',
      'default' => array('helbib_panels_helsbib_page_type' => 'standard'),
      'settings form' => 'helbib_panels_helsbib_page_type_ctools_access_settings',
      'summary' => 'helbib_panels_helsbib_page_type_ctools_access_summary',
      'required context' => new ctools_context_required(t('Node'), 'node'),
    ),
  );
}

/**
 * Check for access.
 */
function helbib_panels_helsbib_page_type_ctools_access_check($conf, $context) {
  // As far as I know there should always be a context at this point,
  // but this is safe.
  if (empty($context) || empty($context->data) || 
      empty($context->data->type) || $context->data->type != 'page') {
    return FALSE;
  }

  $type = (isset($conf['helsbib_page_type'])) ? $conf['helsbib_page_type'] : 'standard';
  $node = $context->data;

  // If library type is not set on the node, we allow it to pass if the 
  // selected type is standard.
  if (empty($node->field_page_type[0]['value'])) {
    // Nested if statements, so that the elseif claus is skipped when
    // the $node->page_type is not set.
    if ($type != 'standard') {
      return FALSE;
    }
  }
  elseif ($node->field_page_type[0]['value'] != $type) {
    return FALSE;
  }

  return TRUE;
}

/**
 * Add the type to the settings form.
 */
function helbib_panels_helsbib_page_type_ctools_access_settings(&$form, &$form_state, $conf) {
  $form['settings']['helsbib_page_type'] = array(
    '#type' => 'radios',
    '#title' => t('Page type'),
    '#options' => array(
      'standard' => t('Standard page'),
      'navigation' => 'Fordelingsside',
      'child_event' => 'Side med børnearrangementer',
    ),
    '#default_value' => (isset($conf['helsbib_page_type'])) ? $conf['helsbib_page_type'] : 'standard',
    '#description' => t('Pick the allowed page type.'),
  );
}

/**
 * Provide a summary description of what we checked.
 */
function helbib_panels_helsbib_page_type_ctools_access_summary($conf, $context) {
  $type = (isset($conf['helsbib_page_type'])) ? $conf['helsbib_page_type'] : 'standard';
  return t('@identifier must be a “@type” page', array('@identifier' => $context->identifier, '@type' => $type));
}
