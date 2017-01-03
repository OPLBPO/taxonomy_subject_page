<?php
/**
 * @file
 * taxonomy_subject_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function taxonomy_subject_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_8ac5e3d2-4ae1-4511-b8e1-9870d73d8931';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Taxonomy page for Subject taxonomy',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'subjects' => 'subjects',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_70_30_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f7377241-fa36-47ed-a66c-e66d4e3c457b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_8ac5e3d2-4ae1-4511-b8e1-9870d73d8931';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-508f403e-ef19-4614-8912-f8c4bae4dd7a';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'taxonomy_subject_page_opl_page-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '508f403e-ef19-4614-8912-f8c4bae4dd7a';
  $display->content['new-508f403e-ef19-4614-8912-f8c4bae4dd7a'] = $pane;
  $display->panels['left'][0] = 'new-508f403e-ef19-4614-8912-f8c4bae4dd7a';
  $pane = new stdClass();
  $pane->pid = 'new-e5bacd2c-c958-4657-967a-6e9e6ab548e5';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'taxonomy_subject_page_databases-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e5bacd2c-c958-4657-967a-6e9e6ab548e5';
  $display->content['new-e5bacd2c-c958-4657-967a-6e9e6ab548e5'] = $pane;
  $display->panels['left'][1] = 'new-e5bacd2c-c958-4657-967a-6e9e6ab548e5';
  $pane = new stdClass();
  $pane->pid = 'new-1bcc351a-d3cc-460a-8008-19192e6fac72';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'taxonomy_subject_page_events-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1bcc351a-d3cc-460a-8008-19192e6fac72';
  $display->content['new-1bcc351a-d3cc-460a-8008-19192e6fac72'] = $pane;
  $display->panels['right'][0] = 'new-1bcc351a-d3cc-460a-8008-19192e6fac72';
  $pane = new stdClass();
  $pane->pid = 'new-d716464a-6cce-4d32-93b9-058b2b6477bd';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'taxonomy_subject_pages_blogs-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd716464a-6cce-4d32-93b9-058b2b6477bd';
  $display->content['new-d716464a-6cce-4d32-93b9-058b2b6477bd'] = $pane;
  $display->panels['right'][1] = 'new-d716464a-6cce-4d32-93b9-058b2b6477bd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1bcc351a-d3cc-460a-8008-19192e6fac72';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_8ac5e3d2-4ae1-4511-b8e1-9870d73d8931'] = $handler;

  return $export;
}
