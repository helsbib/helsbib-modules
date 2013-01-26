<?php

/**
 * Implementation of hook_rules_defaults().
 */
function helbib_content_rules_defaults() {
  return array(
    'rules' => array(
      'rules_helbib_content_article_event_insert' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'Helsbib article/event insert',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          'helbib_content' => 'helbib_content',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Created content is article or event',
              'label callback' => FALSE,
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_type',
            '#settings' => array(
              'type' => array(
                'article' => 'article',
                'event' => 'event',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'view' => 'helbib_frontpage_blog',
            ),
            '#name' => 'cache_actions_action_clear_views_cache',
            '#info' => array(
              'label' => 'Clear the cache of the helbib_frontpage_blog view.',
              'label callback' => FALSE,
              'arguments' => array(
                'view' => array(
                  'type' => 'string',
                  'label' => 'View',
                  'description' => 'Specify the view you want to clear.',
                ),
              ),
              'module' => 'Cache Actions',
            ),
          ),
        ),
        '#version' => 6003,
      ),
      'rules_helbib_content_article_event_update' => array(
        '#type' => 'rule',
        '#set' => 'event_node_update',
        '#label' => 'Helsbib article/event update',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          'helbib_content' => 'helbib_content',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Created content is article or event',
              'label callback' => FALSE,
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_type',
            '#settings' => array(
              'type' => array(
                'article' => 'article',
                'event' => 'event',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'view' => 'helbib_frontpage_blog',
            ),
            '#name' => 'cache_actions_action_clear_views_cache',
            '#info' => array(
              'label' => 'Clear the cache of the helbib_frontpage_blog view.',
              'label callback' => FALSE,
              'arguments' => array(
                'view' => array(
                  'type' => 'string',
                  'label' => 'View',
                  'description' => 'Specify the view you want to clear.',
                ),
              ),
              'module' => 'Cache Actions',
            ),
          ),
        ),
        '#version' => 6003,
      ),
      'rules_helbib_content_article_event_delete' => array(
        '#type' => 'rule',
        '#set' => 'event_node_update',
        '#label' => 'Helsbib article/event delete',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          'helbib_content' => 'helbib_content',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Created content is article or event',
              'label callback' => FALSE,
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_type',
            '#settings' => array(
              'type' => array(
                'article' => 'article',
                'event' => 'event',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'view' => 'helbib_frontpage_blog',
            ),
            '#name' => 'cache_actions_action_clear_views_cache',
            '#info' => array(
              'label' => 'Clear the cache of the helbib_frontpage_blog view.',
              'label callback' => FALSE,
              'arguments' => array(
                'view' => array(
                  'type' => 'string',
                  'label' => 'View',
                  'description' => 'Specify the view you want to clear.',
                ),
              ),
              'module' => 'Cache Actions',
            ),
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}
