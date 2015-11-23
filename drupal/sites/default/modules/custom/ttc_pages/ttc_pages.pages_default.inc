<?php
/**
 * @file
 * ttc_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ttc_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_node__panel_context_ce61e6fb-6c9b-46cb-a9b8-a0d6984ef738';
  $handler->task = 'search';
  $handler->subtask = 'node';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Search API Results',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Search Results';
  $display->uuid = '3402764f-da73-4d6b-857e-b5af3a665f2c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e8d324e9-f9d0-459d-a080-597df13dd956';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ttc_content_search_results-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'search_api_views_fulltext' => '%keywords',
      ),
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '20',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e8d324e9-f9d0-459d-a080-597df13dd956';
    $display->content['new-e8d324e9-f9d0-459d-a080-597df13dd956'] = $pane;
    $display->panels['center'][0] = 'new-e8d324e9-f9d0-459d-a080-597df13dd956';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['search_node__panel_context_ce61e6fb-6c9b-46cb-a9b8-a0d6984ef738'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ttc_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'available_technologies_faceted_search';
  $page->task = 'page';
  $page->admin_title = 'Available Technologies faceted search';
  $page->admin_description = '';
  $page->path = 'availabletechnologies/!keyword';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Available Technologies',
    'name' => 'menu-site-structure',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'keyword' => array(
      'id' => 1,
      'identifier' => 'Search Keyword',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
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
  $handler->name = 'page_available_technologies_faceted_search__panel_context_78250f32-e192-4c92-ae8c-1bb4672bd7f0';
  $handler->task = 'page';
  $handler->subtask = 'available_technologies_faceted_search';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Landing Page',
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
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '0',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Available Technologies';
  $display->uuid = '60b2c82a-0299-4b2d-8a48-3120c474b921';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ecdd01f5-cf28-4c09-b0bd-6a42497470cc';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Landing Page Placeholder',
      'title' => '',
      'body' => 'Landing Page Placeholder

<a href=\'/availabletechnologies/all\'>View all technologies</a>',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ecdd01f5-cf28-4c09-b0bd-6a42497470cc';
    $display->content['new-ecdd01f5-cf28-4c09-b0bd-6a42497470cc'] = $pane;
    $display->panels['center'][0] = 'new-ecdd01f5-cf28-4c09-b0bd-6a42497470cc';
    $pane = new stdClass();
    $pane->pid = 'new-8ba64bdb-0255-43f2-8223-058655c58eb4';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'available_technologies';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8ba64bdb-0255-43f2-8223-058655c58eb4';
    $display->content['new-8ba64bdb-0255-43f2-8223-058655c58eb4'] = $pane;
    $display->panels['center'][1] = 'new-8ba64bdb-0255-43f2-8223-058655c58eb4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_available_technologies_faceted_search__panel';
  $handler->task = 'page';
  $handler->subtask = 'available_technologies_faceted_search';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Faceted Search',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Faceted Search view',
        'keyword' => 'facets',
        'name' => 'view:ttc_abstract_faceted_results-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'Faceted Search relationship',
        'keyword' => 'facets_with_keyword',
        'name' => 'view_from_argument:ttc_abstract_faceted_results-ctools_context_1',
        'context' => array(
          0 => 'argument_string_1',
        ),
        'id' => 1,
      ),
    ),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '62.969128458000284',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => '37.030871541999716',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'facets',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'facets' => array(
        'type' => 'region',
        'title' => 'Facets',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'facets' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Available Technologies';
  $display->uuid = '277f2171-f017-40ff-baab-698ef998bbd8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8f426681-fbd8-495b-8a86-eefde4c39fe7';
    $pane->panel = 'center';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'relationship_view_from_argument:ttc_abstract_faceted_results-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8f426681-fbd8-495b-8a86-eefde4c39fe7';
    $display->content['new-8f426681-fbd8-495b-8a86-eefde4c39fe7'] = $pane;
    $display->panels['center'][0] = 'new-8f426681-fbd8-495b-8a86-eefde4c39fe7';
    $pane = new stdClass();
    $pane->pid = 'new-fd741315-5abd-4c20-a6a5-cae1f20c15b3';
    $pane->panel = 'center';
    $pane->type = 'views_empty';
    $pane->subtype = 'views_empty';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'relationship_view_from_argument:ttc_abstract_faceted_results-ctools_context_1_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fd741315-5abd-4c20-a6a5-cae1f20c15b3';
    $display->content['new-fd741315-5abd-4c20-a6a5-cae1f20c15b3'] = $pane;
    $display->panels['center'][1] = 'new-fd741315-5abd-4c20-a6a5-cae1f20c15b3';
    $pane = new stdClass();
    $pane->pid = 'new-bad4fbc2-aecf-4bb8-ba20-6e60dfdf817b';
    $pane->panel = 'facets';
    $pane->type = 'ttc_search_form_pane';
    $pane->subtype = 'ttc_search_form_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'index_url' => 'availabletechnologies',
      'search_form_label' => 'Keywords',
      'context' => 'argument_string_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bad4fbc2-aecf-4bb8-ba20-6e60dfdf817b';
    $display->content['new-bad4fbc2-aecf-4bb8-ba20-6e60dfdf817b'] = $pane;
    $display->panels['facets'][0] = 'new-bad4fbc2-aecf-4bb8-ba20-6e60dfdf817b';
    $pane = new stdClass();
    $pane->pid = 'new-59da9e71-7ec2-401e-a5f6-0a8ebb55e594';
    $pane->panel = 'facets';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-V0ORwTOF30Y11IwwWPxSInnNyVnSosED';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Product Type',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '59da9e71-7ec2-401e-a5f6-0a8ebb55e594';
    $display->content['new-59da9e71-7ec2-401e-a5f6-0a8ebb55e594'] = $pane;
    $display->panels['facets'][1] = 'new-59da9e71-7ec2-401e-a5f6-0a8ebb55e594';
    $pane = new stdClass();
    $pane->pid = 'new-ce03417b-f1b6-4228-95d2-e844fd2e6c4b';
    $pane->panel = 'facets';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Zotwmz5D6XDlXozm0prmtnI1fpQJ9msu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Development Stage',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ce03417b-f1b6-4228-95d2-e844fd2e6c4b';
    $display->content['new-ce03417b-f1b6-4228-95d2-e844fd2e6c4b'] = $pane;
    $display->panels['facets'][2] = 'new-ce03417b-f1b6-4228-95d2-e844fd2e6c4b';
    $pane = new stdClass();
    $pane->pid = 'new-cecef8cf-637f-435e-bb18-03b3ebba61f7';
    $pane->panel = 'facets';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-0mDxvjOxnXZdopMrqEJx0bwgV6mUZDlo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Therapeutic Area',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'cecef8cf-637f-435e-bb18-03b3ebba61f7';
    $display->content['new-cecef8cf-637f-435e-bb18-03b3ebba61f7'] = $pane;
    $display->panels['facets'][3] = 'new-cecef8cf-637f-435e-bb18-03b3ebba61f7';
    $pane = new stdClass();
    $pane->pid = 'new-6cb1a064-2aff-487d-af15-258fb4be714b';
    $pane->panel = 'facets';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-lBZ1VAzTznOE5gQyP8OHERh0Zq44hFsG';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Patent Status',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6cb1a064-2aff-487d-af15-258fb4be714b';
    $display->content['new-6cb1a064-2aff-487d-af15-258fb4be714b'] = $pane;
    $display->panels['facets'][4] = 'new-6cb1a064-2aff-487d-af15-258fb4be714b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-59da9e71-7ec2-401e-a5f6-0a8ebb55e594';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['available_technologies_faceted_search'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage__panel_context_5d326fdf-2d40-42b2-b528-f211176abf5c';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'ttc_home';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'top_first' => NULL,
      'top_second' => NULL,
      'top_third' => NULL,
      'top_fourth' => NULL,
      'middle_small' => NULL,
      'middle_large' => NULL,
      'middle_first' => NULL,
      'middle_second' => NULL,
      'bottom_first' => NULL,
      'bottom_second' => NULL,
      'bottom_third' => NULL,
      'bottom_fourth' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '299b2b76-2d89-4a77-88a9-8133ee604829';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fa861c18-0b34-4706-80a3-6466c1ad2d17';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Homepage Banner',
      'title' => '',
      'body' => '<div class="banner">
  <h2 class="banner__headline">Innovation Through Collaboration</h2>
  <p class="banner__tagline">Serving NCI and Client Institutes and Centers</p>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fa861c18-0b34-4706-80a3-6466c1ad2d17';
    $display->content['new-fa861c18-0b34-4706-80a3-6466c1ad2d17'] = $pane;
    $display->panels['top'][0] = 'new-fa861c18-0b34-4706-80a3-6466c1ad2d17';
    $pane = new stdClass();
    $pane->pid = 'new-dde72c29-185e-4c3f-948d-cf3049c554cf';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'available_technologies';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '/availabletechnologies',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dde72c29-185e-4c3f-948d-cf3049c554cf';
    $display->content['new-dde72c29-185e-4c3f-948d-cf3049c554cf'] = $pane;
    $display->panels['top'][1] = 'new-dde72c29-185e-4c3f-948d-cf3049c554cf';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}