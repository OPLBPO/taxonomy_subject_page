<?php
/**
 * @file
 * taxonomy_subject_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function taxonomy_subject_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'subject_vocabulary';
  $page->task = 'page';
  $page->admin_title = 'Subject vocabulary';
  $page->admin_description = '';
  $page->path = 'subjects/%term';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vocabularies' => array(
          'subjects' => 'subjects',
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_subject_vocabulary__panel';
  $handler->task = 'page';
  $handler->subtask = 'subject_vocabulary';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Taxonomy page for Subject taxonomy',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'no-main-content-container-bg',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
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
  $display->title = '%term:name_field';
  $display->uuid = 'c9da41d5-ab8c-4002-9256-cbd75ab92d79';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_subject_vocabulary__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e9fafc87-fc74-48b2-b8ca-b3aaabe69d71';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'taxonomy_subject_page_opl_page-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'tid' => 'Taxonomy term: ID',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e9fafc87-fc74-48b2-b8ca-b3aaabe69d71';
  $display->content['new-e9fafc87-fc74-48b2-b8ca-b3aaabe69d71'] = $pane;
  $display->panels['left'][0] = 'new-e9fafc87-fc74-48b2-b8ca-b3aaabe69d71';
  $pane = new stdClass();
  $pane->pid = 'new-d7451ac7-bfd1-4c3f-82a3-a3d8a5469981';
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
  $pane->uuid = 'd7451ac7-bfd1-4c3f-82a3-a3d8a5469981';
  $display->content['new-d7451ac7-bfd1-4c3f-82a3-a3d8a5469981'] = $pane;
  $display->panels['left'][1] = 'new-d7451ac7-bfd1-4c3f-82a3-a3d8a5469981';
  $pane = new stdClass();
  $pane->pid = 'new-0dd53587-5b6f-4712-923c-bca6b2380a08';
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
  $pane->uuid = '0dd53587-5b6f-4712-923c-bca6b2380a08';
  $display->content['new-0dd53587-5b6f-4712-923c-bca6b2380a08'] = $pane;
  $display->panels['right'][0] = 'new-0dd53587-5b6f-4712-923c-bca6b2380a08';
  $pane = new stdClass();
  $pane->pid = 'new-7bc855bf-b01e-4a73-b8ef-c29b9c94e644';
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
  $pane->uuid = '7bc855bf-b01e-4a73-b8ef-c29b9c94e644';
  $display->content['new-7bc855bf-b01e-4a73-b8ef-c29b9c94e644'] = $pane;
  $display->panels['right'][1] = 'new-7bc855bf-b01e-4a73-b8ef-c29b9c94e644';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['subject_vocabulary'] = $page;

  return $pages;

}
