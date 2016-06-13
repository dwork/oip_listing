<?php
/**
 * @file
 * oip_listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function oip_listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'agencies';
  $view->description = 'Agencies ("companies", admin view only)';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Agencies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agencies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_company_logo' => 'field_company_logo',
    'title' => 'title',
    'field_contact' => 'field_contact',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_company_logo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Company Logo */
  $handler->display->display_options['fields']['field_company_logo']['id'] = 'field_company_logo';
  $handler->display->display_options['fields']['field_company_logo']['table'] = 'field_data_field_company_logo';
  $handler->display->display_options['fields']['field_company_logo']['field'] = 'field_company_logo';
  $handler->display->display_options['fields']['field_company_logo']['label'] = 'Logo';
  $handler->display->display_options['fields']['field_company_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_company_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Contact/Principal Broker */
  $handler->display->display_options['fields']['field_contact']['id'] = 'field_contact';
  $handler->display->display_options['fields']['field_contact']['table'] = 'field_data_field_contact';
  $handler->display->display_options['fields']['field_contact']['field'] = 'field_contact';
  /* Field: Field: Listing Office ID */
  $handler->display->display_options['fields']['field_offid']['id'] = 'field_offid';
  $handler->display->display_options['fields']['field_offid']['table'] = 'field_data_field_offid';
  $handler->display->display_options['fields']['field_offid']['field'] = 'field_offid';
  /* Field: Field: MLS Type */
  $handler->display->display_options['fields']['field_mls_type']['id'] = 'field_mls_type';
  $handler->display->display_options['fields']['field_mls_type']['table'] = 'field_data_field_mls_type';
  $handler->display->display_options['fields']['field_mls_type']['field'] = 'field_mls_type';
  $handler->display->display_options['fields']['field_mls_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_mls_type']['delta_offset'] = '0';
  /* Field: Content: Listing Status */
  $handler->display->display_options['fields']['field_listingstatus']['id'] = 'field_listingstatus';
  $handler->display->display_options['fields']['field_listingstatus']['table'] = 'field_data_field_listingstatus';
  $handler->display->display_options['fields']['field_listingstatus']['field'] = 'field_listingstatus';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '#Agents';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  $query = new EntityFieldQuery();
  $query->entityCondition(\'entity_type\', \'user\')
  ->propertyCondition(\'status\', 1)
  ->fieldCondition(\'field_agency\', \'target_id\', $row->field_offid, \'=\')
  ->count();
  $result = $query->execute();
  print $result;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'agencies';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Agencies';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['agencies'] = $view;

  $view = new view();
  $view->name = 'agency';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Agency';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agency';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_agency' => 'field_agency',
    'field_agency_' => 'field_agency_',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_agency_target_id']['id'] = 'field_agency_target_id';
  $handler->display->display_options['relationships']['field_agency_target_id']['table'] = 'field_data_field_agency';
  $handler->display->display_options['relationships']['field_agency_target_id']['field'] = 'field_agency_target_id';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_agency_target_id';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'agency';
  $export['agency'] = $view;

  $view = new view();
  $view->name = 'agent_information';
  $view->description = 'Agent information for agent with listing lists';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Agent Information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Listing Agent Information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds_fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_agency_target_id']['id'] = 'field_agency_target_id';
  $handler->display->display_options['relationships']['field_agency_target_id']['table'] = 'field_data_field_agency';
  $handler->display->display_options['relationships']['field_agency_target_id']['field'] = 'field_agency_target_id';
  /* Field: UID (hidden) */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'UID (hidden)';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: name (hidden) */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['ui_name'] = 'name (hidden)';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['ui_name'] = 'Fax';
  $handler->display->display_options['fields']['field_fax']['label'] = '';
  $handler->display->display_options['fields']['field_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['text'] = 'Fax: [field_fax]<BR>';
  $handler->display->display_options['fields']['field_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_fax']['type'] = 'local_phone_number';
  /* Field: First Name (hidden) */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['ui_name'] = 'First Name (hidden)';
  $handler->display->display_options['fields']['field_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_firstname']['element_label_colon'] = FALSE;
  /* Field: Middle Initial (hidden) */
  $handler->display->display_options['fields']['field_middlename']['id'] = 'field_middlename';
  $handler->display->display_options['fields']['field_middlename']['table'] = 'field_data_field_middlename';
  $handler->display->display_options['fields']['field_middlename']['field'] = 'field_middlename';
  $handler->display->display_options['fields']['field_middlename']['ui_name'] = 'Middle Initial (hidden)';
  $handler->display->display_options['fields']['field_middlename']['label'] = '';
  $handler->display->display_options['fields']['field_middlename']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_middlename']['element_label_colon'] = FALSE;
  /* Field: Last Name (hidden) */
  $handler->display->display_options['fields']['field_lastname']['id'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['field_lastname']['field'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['ui_name'] = 'Last Name (hidden)';
  $handler->display->display_options['fields']['field_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lastname']['element_label_colon'] = FALSE;
  /* Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['ui_name'] = 'Phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = 'Ph: [field_phone]<BR>';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_phone']['type'] = 'local_phone_number';
  /* Field: Toll Free */
  $handler->display->display_options['fields']['field_tollfree']['id'] = 'field_tollfree';
  $handler->display->display_options['fields']['field_tollfree']['table'] = 'field_data_field_tollfree';
  $handler->display->display_options['fields']['field_tollfree']['field'] = 'field_tollfree';
  $handler->display->display_options['fields']['field_tollfree']['ui_name'] = 'Toll Free';
  $handler->display->display_options['fields']['field_tollfree']['label'] = '';
  $handler->display->display_options['fields']['field_tollfree']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tollfree']['alter']['text'] = '800: [field_tollfree]<BR>';
  $handler->display->display_options['fields']['field_tollfree']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tollfree']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_tollfree']['type'] = 'local_phone_number';
  /* Field: Cell  */
  $handler->display->display_options['fields']['field_cell']['id'] = 'field_cell';
  $handler->display->display_options['fields']['field_cell']['table'] = 'field_data_field_cell';
  $handler->display->display_options['fields']['field_cell']['field'] = 'field_cell';
  $handler->display->display_options['fields']['field_cell']['ui_name'] = 'Cell ';
  $handler->display->display_options['fields']['field_cell']['label'] = '';
  $handler->display->display_options['fields']['field_cell']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cell']['alter']['text'] = 'Cell: [field_cell]<BR>';
  $handler->display->display_options['fields']['field_cell']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cell']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_cell']['type'] = 'local_phone_number';
  /* Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['ui_name'] = 'Website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_label';
  /* Field: Selected Email (PHP - mail or public email) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Selected Email (PHP - mail or public email)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  $user=user_load($row->uid);
  $emailaddr = $user->mail;
  if (isset($user->field_email[0])) {
    $email = field_fetch_field_values(\'user\',$row->uid,\'field_email\');
    $emailaddr = $email[0];
  }
  print "<a href=mailto:$emailaddr>$emailaddr</a><BR>";
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['hide_empty'] = TRUE;
  /* Field: User: License or CCB# */
  $handler->display->display_options['fields']['field_license']['id'] = 'field_license';
  $handler->display->display_options['fields']['field_license']['table'] = 'field_data_field_license';
  $handler->display->display_options['fields']['field_license']['field'] = 'field_license';
  $handler->display->display_options['fields']['field_license']['label'] = '';
  $handler->display->display_options['fields']['field_license']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_license']['alter']['text'] = 'License/CCB#: [field_license]';
  $handler->display->display_options['fields']['field_license']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_license']['hide_empty'] = TRUE;
  /* Field: Licensed in (state) */
  $handler->display->display_options['fields']['field_licensed']['id'] = 'field_licensed';
  $handler->display->display_options['fields']['field_licensed']['table'] = 'field_data_field_licensed';
  $handler->display->display_options['fields']['field_licensed']['field'] = 'field_licensed';
  $handler->display->display_options['fields']['field_licensed']['ui_name'] = 'Licensed in (state)';
  $handler->display->display_options['fields']['field_licensed']['label'] = '';
  $handler->display->display_options['fields']['field_licensed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_licensed']['alter']['text'] = 'Licensed in [field_licensed]';
  $handler->display->display_options['fields']['field_licensed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_licensed']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_licensed']['delta_offset'] = '0';
  /* Field: Full name (first m last) */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Full name (first m last)';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<strong>[field_firstname] [field_middlename] [field_lastname]</strong>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Office ID */
  $handler->display->display_options['fields']['field_offid']['id'] = 'field_offid';
  $handler->display->display_options['fields']['field_offid']['table'] = 'field_data_field_offid';
  $handler->display->display_options['fields']['field_offid']['field'] = 'field_offid';
  $handler->display->display_options['fields']['field_offid']['relationship'] = 'field_agency_target_id';
  $handler->display->display_options['fields']['field_offid']['ui_name'] = 'Office ID';
  $handler->display->display_options['fields']['field_offid']['label'] = '';
  $handler->display->display_options['fields']['field_offid']['element_label_colon'] = FALSE;
  /* Field: Agency Name (PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Agency Name (PHP)';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$node = node_load($row->field_offid);
print $node->title;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_title']['alter']['text'] = '[field_title]';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Agent ID (field_agentid) */
  $handler->display->display_options['arguments']['field_agentid_value']['id'] = 'field_agentid_value';
  $handler->display->display_options['arguments']['field_agentid_value']['table'] = 'field_data_field_agentid';
  $handler->display->display_options['arguments']['field_agentid_value']['field'] = 'field_agentid_value';
  $handler->display->display_options['arguments']['field_agentid_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_agentid_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_agentid_value']['default_argument_options']['code'] = '$nid = arg(1);
if (arg(0)==\'myactives\' or arg(0)==\'mysolds\' or arg(0)==\'mystats\' or arg(0)==\'mylistings\') {
   $agent = $nid;
} else {
   $thisnode = node_load($nid);
   $agent = \'\';
   if (isset($thisnode->field_listingagentid[\'und\'])) {
     $agent = $thisnode->field_listingagentid[\'und\'][0][\'value\'];
   }
   if (isset($thisnode->field_listingagentid[\'und\'][1])) {
     $agent = $agent.\'+\'.$thisnode->field_listingagentid[\'und\'][1][\'value\'];
   }
}
return $agent;';
  $handler->display->display_options['arguments']['field_agentid_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_agentid_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_agentid_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_agentid_value']['limit'] = '0';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Agent ID (field_agentid) */
  $handler->display->display_options['arguments']['field_agentid_value']['id'] = 'field_agentid_value';
  $handler->display->display_options['arguments']['field_agentid_value']['table'] = 'field_data_field_agentid';
  $handler->display->display_options['arguments']['field_agentid_value']['field'] = 'field_agentid_value';
  $handler->display->display_options['arguments']['field_agentid_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_agentid_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_agentid_value']['default_argument_options']['code'] = '$nid = arg(1);
$thisnode = node_load($nid);
$agent = \'\';
if (isset($thisnode->field_listingagentid[\'und\'])) {
 $agent = $thisnode->field_listingagentid[\'und\'][0][\'value\'];
}
if (isset($thisnode->field_listingagentid[\'und\'][1])) {
 $agent = $agent.\'+\'.$thisnode->field_listingagentid[\'und\'][1][\'value\'];
}
return $agent;';
  $handler->display->display_options['arguments']['field_agentid_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_agentid_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_agentid_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_agentid_value']['limit'] = '0';
  $handler->display->display_options['path'] = 'agent-information';

  /* Display: Agent Block */
  $handler = $view->new_display('block', 'Agent Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';

  /* Display: Co-Agent Block */
  $handler = $view->new_display('block', 'Co-Agent Block', 'block_1');
  $handler->display->display_options['display_description'] = 'Co-agent block';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Agent ID (field_agentid) */
  $handler->display->display_options['arguments']['field_agentid_value']['id'] = 'field_agentid_value';
  $handler->display->display_options['arguments']['field_agentid_value']['table'] = 'field_data_field_agentid';
  $handler->display->display_options['arguments']['field_agentid_value']['field'] = 'field_agentid_value';
  $handler->display->display_options['arguments']['field_agentid_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_agentid_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_agentid_value']['default_argument_options']['code'] = '$nid = arg(1);

  $thisnode = node_load($nid);
  $agent = \'\';
  if (isset($thisnode->field_colistingagentid[\'und\'])) {
   $agent = $thisnode->field_colistingagentid[\'und\'][0][\'value\'];
  }

return $agent;';
  $handler->display->display_options['arguments']['field_agentid_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_agentid_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_agentid_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_agentid_value']['limit'] = '0';
  $export['agent_information'] = $view;

  $view = new view();
  $view->name = 'agent_listing_map_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Agent (listing-map)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agent (listing-map)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Agent ID (field_agentid) */
  $handler->display->display_options['arguments']['field_agentid_value']['id'] = 'field_agentid_value';
  $handler->display->display_options['arguments']['field_agentid_value']['table'] = 'field_data_field_agentid';
  $handler->display->display_options['arguments']['field_agentid_value']['field'] = 'field_agentid_value';
  $handler->display->display_options['arguments']['field_agentid_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_agentid_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_agentid_value']['default_argument_options']['code'] = '$args[1] = \'1234\';
return \'5142\';';
  $handler->display->display_options['arguments']['field_agentid_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_agentid_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_agentid_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_agentid_value']['limit'] = '0';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'agent-listing-map-';

  /* Display: Agent Listing-view */
  $handler = $view->new_display('block', 'Agent Listing-view', 'block_1');
  $export['agent_listing_map_'] = $view;

  $view = new view();
  $view->name = 'agents';
  $view->description = 'Display list of active agents and appropriate contact information';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Agents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agents';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_agency_target_id']['id'] = 'field_agency_target_id';
  $handler->display->display_options['relationships']['field_agency_target_id']['table'] = 'field_data_field_agency';
  $handler->display->display_options['relationships']['field_agency_target_id']['field'] = 'field_agency_target_id';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Listing Office ID (hidden) */
  $handler->display->display_options['fields']['field_offid']['id'] = 'field_offid';
  $handler->display->display_options['fields']['field_offid']['table'] = 'field_data_field_offid';
  $handler->display->display_options['fields']['field_offid']['field'] = 'field_offid';
  $handler->display->display_options['fields']['field_offid']['ui_name'] = 'Listing Office ID (hidden)';
  $handler->display->display_options['fields']['field_offid']['label'] = '';
  $handler->display->display_options['fields']['field_offid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offid']['element_label_colon'] = FALSE;
  /* Field: Fax (hidden) */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['ui_name'] = 'Fax (hidden)';
  $handler->display->display_options['fields']['field_fax']['label'] = '';
  $handler->display->display_options['fields']['field_fax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['text'] = 'Fax: [field_fax]<BR>';
  $handler->display->display_options['fields']['field_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fax']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_fax']['type'] = 'local_phone_number';
  /* Field: Phone (hidden) */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['ui_name'] = 'Phone (hidden)';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = 'Ph: [field_phone]<BR>';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_phone']['type'] = 'local_phone_number';
  /* Field: Toll Free (hidden) */
  $handler->display->display_options['fields']['field_tollfree']['id'] = 'field_tollfree';
  $handler->display->display_options['fields']['field_tollfree']['table'] = 'field_data_field_tollfree';
  $handler->display->display_options['fields']['field_tollfree']['field'] = 'field_tollfree';
  $handler->display->display_options['fields']['field_tollfree']['ui_name'] = 'Toll Free (hidden)';
  $handler->display->display_options['fields']['field_tollfree']['label'] = '';
  $handler->display->display_options['fields']['field_tollfree']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tollfree']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tollfree']['alter']['text'] = '800: [field_tollfree]<BR>';
  $handler->display->display_options['fields']['field_tollfree']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tollfree']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tollfree']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_tollfree']['type'] = 'local_phone_number';
  /* Field: Website (hidden) */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['ui_name'] = 'Website (hidden)';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_label';
  /* Field: First name (hidden) */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['ui_name'] = 'First name (hidden)';
  $handler->display->display_options['fields']['field_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_firstname']['element_label_colon'] = FALSE;
  /* Field: Last Name (hidden) */
  $handler->display->display_options['fields']['field_lastname']['id'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['field_lastname']['field'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['ui_name'] = 'Last Name (hidden)';
  $handler->display->display_options['fields']['field_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lastname']['element_label_colon'] = FALSE;
  /* Field: Middle Initiial (hidden) */
  $handler->display->display_options['fields']['field_middlename']['id'] = 'field_middlename';
  $handler->display->display_options['fields']['field_middlename']['table'] = 'field_data_field_middlename';
  $handler->display->display_options['fields']['field_middlename']['field'] = 'field_middlename';
  $handler->display->display_options['fields']['field_middlename']['ui_name'] = 'Middle Initiial (hidden)';
  $handler->display->display_options['fields']['field_middlename']['label'] = '';
  $handler->display->display_options['fields']['field_middlename']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_middlename']['element_label_colon'] = FALSE;
  /* Field: Agency Name */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_agency_target_id';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Agency Name';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  /* Field: Title (hidden) */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['ui_name'] = 'Title (hidden)';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Linked UID (hidden) */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Linked UID (hidden)';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: Email (PHP-login or public) (hidden) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Email (PHP-login or public) (hidden)';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
  $user=user_load($row->uid);
  $wrapper=entity_metadata_wrapper(\'user\',$user);
  $email = $wrapper->field_email->value();
  $emailaddr = $user->mail;
  if (!empty($email )) {
     $emailaddr = $email;
  }
  print "<a href=mailto:$emailaddr>$emailaddr</a><BR>";
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Agent';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[name]<BR>
[field_firstname] [field_middlename] [field_lastname]<BR>
[field_title]<BR>
[title]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Contact information';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[php_1]
[field_phone]
[field_fax]
[field_tollfree]
[field_website]';
  /* Field: Links to Listings (PHP) */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['ui_name'] = 'Links to Listings (PHP)';
  $handler->display->display_options['fields']['php_2']['label'] = 'Links';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
  global $user;
  $this_user = user_load($row->uid);
  $wrapper=entity_metadata_wrapper(\'user\',$this_user);
  $agent_id = $wrapper->field_agentid->value();
  $membership = \'Basic\';
  foreach ($this_user->roles as $key => $value) {
    switch ($value) {
      case \'basic membership\':  
         $membership = \'Basic\';
         break;
     case \'gold membership\':
         $membership = \'Gold\';
         break;
     case \'platinum membership\':
        $membership = \'Platinum\';
        break;
     case \'team membership\':
        $membership = \'Team\';
        break;
    case \'Agent\':
        $membership = \'Agent\';
        break;
     }
  }
  // Now, display "Listings" for Gold, "Listings, Solds" for Platinum. Display "My Listings" for Gold & Platinum of logged in
 print "<a href=myactives/$agent_id>For Sale<a/><BR>";
 switch ($membership) {
    case \'Gold\':
       if ($this_user == $row->uid or $user->uid==1) {
          print "<a href=/mylistings/$agent_id>My Listings<a/><BR>";
          print "<a href=/mystats/$agent_id>My Stats<a/><BR>";
       }
       break;
    case \'Platinum\':
        print "<a href=/mysolds/$agent_id>Solds</a><BR>";
       if ($this_user == $row->uid or $user->uid==1) {
          print "<a href=/mylistings/$agent_id>My Listings<a/><BR>";
          print "<a href=/mystats/$agent_id>My Stats<a/><BR>";
       }
       break;
    case \'Agent\':
        print "<a href=/mysolds/$agent_id>Solds</a><BR>";
       if ($this_user == $row->uid or $user->uid==1) {
          print "<a href=/mylistings/$agent_id>My Listings<a/><BR>";
          print "<a href=/mystats/$agent_id>My Stats<a/><BR>";
       }
       break;
   default:
       if ($user->uid==1) {
            print "<a href=/mylistings/$agent_id>(Admin) Listings<a/><BR>";
            print "<a href=/mystats/$agent_id>(Admin) Stats<a/><BR>";
       }
       break;
  }
  // print $membership;
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: User: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['sorts']['random']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['random']['expose']['label'] = 'Random';
  /* Sort criterion: User: Last Name (field_lastname) */
  $handler->display->display_options['sorts']['field_lastname_value']['id'] = 'field_lastname_value';
  $handler->display->display_options['sorts']['field_lastname_value']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['sorts']['field_lastname_value']['field'] = 'field_lastname_value';
  $handler->display->display_options['sorts']['field_lastname_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_lastname_value']['expose']['label'] = 'Last Name';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Last Name (field_lastname) */
  $handler->display->display_options['filters']['field_lastname_value']['id'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['filters']['field_lastname_value']['field'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lastname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lastname_value']['expose']['operator_id'] = 'field_lastname_value_op';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['operator'] = 'field_lastname_value_op';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['identifier'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '// Omit admin user
if ($row->uid == 1) {
   RETURN TRUE;
}
RETURN FALSE;';
  /* Filter criterion: User: User Type (field_usertype) */
  $handler->display->display_options['filters']['field_usertype_tid']['id'] = 'field_usertype_tid';
  $handler->display->display_options['filters']['field_usertype_tid']['table'] = 'field_data_field_usertype';
  $handler->display->display_options['filters']['field_usertype_tid']['field'] = 'field_usertype_tid';
  $handler->display->display_options['filters']['field_usertype_tid']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['field_usertype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_usertype_tid']['vocabulary'] = 'company_type';
  $handler->display->display_options['filters']['field_usertype_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'agents';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Agents';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['agents'] = $view;

  $view = new view();
  $view->name = 'business_directory';
  $view->description = 'Business directory (entered through "users")';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Business Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Business Directory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_usertype_tid' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_usertype',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'field_usertype' => 'field_usertype',
    'name' => 'name',
    'field_fax' => 'field_fax',
    'field_phone' => 'field_phone',
    'field_email' => 'field_email',
    'field_tollfree' => 'field_tollfree',
    'field_website' => 'field_website',
    'field_description' => 'field_description',
    'php' => 'php',
    'nothing' => 'nothing',
    'field_description_1' => 'field_description_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_usertype' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fax' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tollfree' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_description_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_company_name']['alter']['text'] = '[field_company_name]';
  $handler->display->display_options['fields']['field_company_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_company_name']['alter']['path'] = '/user/[uid]';
  /* Field: Field: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['alter']['text'] = 'Fax: [field_fax]<BR>';
  $handler->display->display_options['fields']['field_fax']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_fax']['type'] = 'local_phone_number';
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = 'Ph: [field_phone]<BR>';
  $handler->display->display_options['fields']['field_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_phone']['type'] = 'local_phone_number';
  /* Field: Field: Toll Free */
  $handler->display->display_options['fields']['field_tollfree']['id'] = 'field_tollfree';
  $handler->display->display_options['fields']['field_tollfree']['table'] = 'field_data_field_tollfree';
  $handler->display->display_options['fields']['field_tollfree']['field'] = 'field_tollfree';
  $handler->display->display_options['fields']['field_tollfree']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tollfree']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tollfree']['alter']['text'] = '800: [field_tollfree]<BR>';
  $handler->display->display_options['fields']['field_tollfree']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_tollfree']['type'] = 'local_phone_number';
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = 'Company Website';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_label';
  /* Field: User: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  /* Field: Email (login or public) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Email (login or public)';
  $handler->display->display_options['fields']['php']['label'] = 'Email';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  $user=user_load($row->uid);
  $emailaddr = $user->mail;
  if (isset($user->field_email[0])) {
    $email = field_fetch_field_values(\'user\',$row->uid,\'field_email\');
    $emailaddr = $email[0];
  }
  print "<a href=mailto:$emailaddr>$emailaddr</a><BR>";
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Contact Information';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_company_name]<BR>
[php] 
[field_phone]
[field_fax]
[field_tollfree]
[field_website]';
  /* Field: User: Description */
  $handler->display->display_options['fields']['field_description_1']['id'] = 'field_description_1';
  $handler->display->display_options['fields']['field_description_1']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description_1']['field'] = 'field_description';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
    12 => '12',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  /* Filter criterion: User: User Type (field_usertype) */
  $handler->display->display_options['filters']['field_usertype_tid']['id'] = 'field_usertype_tid';
  $handler->display->display_options['filters']['field_usertype_tid']['table'] = 'field_data_field_usertype';
  $handler->display->display_options['filters']['field_usertype_tid']['field'] = 'field_usertype_tid';
  $handler->display->display_options['filters']['field_usertype_tid']['value'] = array(
    84 => '84',
    17 => '17',
    19 => '19',
    18 => '18',
    16 => '16',
    20 => '20',
  );
  $handler->display->display_options['filters']['field_usertype_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_usertype_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_usertype_tid']['expose']['operator_id'] = 'field_usertype_tid_op';
  $handler->display->display_options['filters']['field_usertype_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_usertype_tid']['expose']['operator'] = 'field_usertype_tid_op';
  $handler->display->display_options['filters']['field_usertype_tid']['expose']['identifier'] = 'field_usertype_tid';
  $handler->display->display_options['filters']['field_usertype_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_usertype_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_usertype_tid']['expose']['remember_roles'] = array(
    2 => 0,
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_usertype_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_usertype_tid']['group_info']['label'] = 'User Type (field_usertype)';
  $handler->display->display_options['filters']['field_usertype_tid']['group_info']['identifier'] = 'field_usertype_tid';
  $handler->display->display_options['filters']['field_usertype_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_usertype_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_usertype_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_usertype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_usertype_tid']['vocabulary'] = 'company_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'business-directory';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Business Directory';
  $handler->display->display_options['menu']['description'] = 'Business Directory';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['business_directory'] = $view;

  $view = new view();
  $view->name = 'documentation';
  $view->description = 'Administrative view of documentation';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documentation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Documentation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'documentation' => 'documentation',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'documentation';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Documentation';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['documentation'] = $view;

  $view = new view();
  $view->name = 'duplicate_listings';
  $view->description = 'Find duplicate listings';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Duplicate Listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Duplicate Listings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: MLS# */
  $handler->display->display_options['fields']['field_mlsno']['id'] = 'field_mlsno';
  $handler->display->display_options['fields']['field_mlsno']['table'] = 'field_data_field_mlsno';
  $handler->display->display_options['fields']['field_mlsno']['field'] = 'field_mlsno';
  $handler->display->display_options['fields']['field_mlsno']['label'] = 'Old OIP';
  $handler->display->display_options['fields']['field_mlsno']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_mlsno']['alter']['path'] = 'http://oip.net/[title] ';
  $handler->display->display_options['fields']['field_mlsno']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_mlsno']['alter']['target'] = '_new';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$query = "SELECT title from {node} where title=$row->title";
$result = db_query($query);
echo $result->rowCount();
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Address 1 */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = 'Street Address';
  /* Field: Content: List Price */
  $handler->display->display_options['fields']['field_listprice']['id'] = 'field_listprice';
  $handler->display->display_options['fields']['field_listprice']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['fields']['field_listprice']['field'] = 'field_listprice';
  $handler->display->display_options['fields']['field_listprice']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'report_date';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$query = "SELECT title from {node} where title=$row->title";
$result = db_query($query);
if ($result->rowCount() > 1) {
   return FALSE;
}
return TRUE;
';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'duplicate-listings';
  $export['duplicate_listings'] = $view;

  $view = new view();
  $view->name = 'featured_listing';
  $view->description = 'CONTENT (Top of listings): Featured listing, displayed at the top of all listing displays - random based on "rotate" field	';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Listing Agent ID */
  $handler->display->display_options['fields']['field_listingagentid']['id'] = 'field_listingagentid';
  $handler->display->display_options['fields']['field_listingagentid']['table'] = 'field_data_field_listingagentid';
  $handler->display->display_options['fields']['field_listingagentid']['field'] = 'field_listingagentid';
  $handler->display->display_options['fields']['field_listingagentid']['ui_name'] = 'Listing Agent ID';
  $handler->display->display_options['fields']['field_listingagentid']['label'] = '';
  $handler->display->display_options['fields']['field_listingagentid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_listingagentid']['element_label_colon'] = FALSE;
  /* Field: Feature Listing (H2) */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Feature Listing (H2)';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2>Featured Listing</h2>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: List Price */
  $handler->display->display_options['fields']['field_listprice']['id'] = 'field_listprice';
  $handler->display->display_options['fields']['field_listprice']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['fields']['field_listprice']['field'] = 'field_listprice';
  $handler->display->display_options['fields']['field_listprice']['label'] = '';
  $handler->display->display_options['fields']['field_listprice']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_listprice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_listprice']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Price and Description section */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Price and Description section';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php

$node = node_load($data->nid);
$wrapper=entity_metadata_wrapper(\'node\',$node);
$listprice = $wrapper->field_listprice->value();
print "<a href=/$row->title>$row->title</a> &nbsp; $ ".number_format($listprice)."<BR>";

 $adtitle = $wrapper->field_adtitle->value();
 if (strlen($adtitle) == 0) {
   $adtitle = $wrapper->field_originaltitle->value();
  }
 print $adtitle."<BR><BR>";
 
 $ad = \'\';
 if (isset($node->body[\'und\'][0][\'safe_value\'])) {
   $ad = $node->body[\'und\'][0][\'safe_value\'];   // use the override or the original
 }
 if (strlen(trim($ad)) == 0) {
     $ad = $wrapper->field_originaldescription->value();
 } 
 $text = substr($ad, 0, strrpos(substr($ad, 0, 200), \' \'));
 print $text . "<a href=$row->title>...More...</a><BR>";
 print "<strong>Listing Agent: ". oip_tweaks_format_agent($row->field_listingagentid) . "</strong>";
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Flyer Picture (from OIPRETS) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Flyer Picture (from OIPRETS)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
// Pulls listing picture from OIPRETS
$ch = curl_init();
 $timeout = 0; // set to zero for no timeout
// curl_setopt ($ch, CURLOPT_URL, "http://www.oiprets.com/htbin/bsfphoto.cgi?debug=0&id=$row->title&w=140");
 curl_setopt ($ch, CURLOPT_URL, "http://www.oiprets.com/rets_bsf/bsfphotos.php?debug=0&id=$row->title&w=140");
 curl_setopt ($ch, CURLOPT_RETURNTRANSFER, 1);
 curl_setopt ($ch, CURLOPT_CONNECTTIMEOUT, $timeout);
 $file_contents = curl_exec($ch);
 curl_close($ch);
print "<a href=/$row->title border=0>$file_contents</a>";
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Rotate (field_rotatelisting) */
  $handler->display->display_options['filters']['field_rotatelisting_value']['id'] = 'field_rotatelisting_value';
  $handler->display->display_options['filters']['field_rotatelisting_value']['table'] = 'field_data_field_rotatelisting';
  $handler->display->display_options['filters']['field_rotatelisting_value']['field'] = 'field_rotatelisting_value';
  $handler->display->display_options['filters']['field_rotatelisting_value']['value'] = array(
    'Yes' => 'Yes',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Active' => 'Active',
    'Bumpable Buyer' => 'Bumpable Buyer',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'featured-listing';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_listprice' => 'field_listprice',
    'php' => 'php',
    'php_1' => 'php_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listprice' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Front Page Feature Block */
  $handler = $view->new_display('block', 'Front Page Feature Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_listprice' => 'field_listprice',
    'php' => 'php',
    'php_1' => 'php_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listprice' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Front Page Feature';
  $export['featured_listing'] = $view;

  $view = new view();
  $view->name = 'flag_listings_tab';
  $view->description = 'Provides a tab on all user\'s profile pages containing bookmarks for that user.';
  $view->tag = 'flag';
  $view->base_table = 'node';
  $view->human_name = 'flag_listings_tab';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Saved Listings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'title' => 'title',
    'name' => 'name',
    'comment_count' => 'comment_count',
    'last_comment_timestamp' => 'last_comment_timestamp',
  );
  $handler->display->display_options['style_options']['default'] = 'last_comment_timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => TRUE,
    ),
    'title' => array(
      'sortable' => TRUE,
    ),
    'name' => array(
      'sortable' => TRUE,
    ),
    'comment_count' => array(
      'sortable' => TRUE,
    ),
    'last_comment_timestamp' => array(
      'sortable' => TRUE,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'This user has not yet bookmarked any content.';
  $handler->display->display_options['empty']['text']['format'] = 'plain_text';
  /* Relationship: Flags: listings */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'listing bookmarks';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'listings';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['uid']['label'] = 'bookmarks_user';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'MLS#';
  /* Field: Content: Address 1 */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = 'Street Address';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Replies';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = 'Last Post';
  $handler->display->display_options['fields']['last_comment_timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'long';
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['exclude'] = TRUE;
  /* Field: Content: Zip Code */
  $handler->display->display_options['fields']['field_zipcode']['id'] = 'field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['table'] = 'field_data_field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['field'] = 'field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_address]<BR>
[field_city], [field_state] [field_zipcode]';
  /* Field: Content: List Price */
  $handler->display->display_options['fields']['field_listprice']['id'] = 'field_listprice';
  $handler->display->display_options['fields']['field_listprice']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['fields']['field_listprice']['field'] = 'field_listprice';
  $handler->display->display_options['fields']['field_listprice']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Property Category */
  $handler->display->display_options['fields']['field_proptype']['id'] = 'field_proptype';
  $handler->display->display_options['fields']['field_proptype']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['fields']['field_proptype']['field'] = 'field_proptype';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['uid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = '%1\'s bookmarks';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/listings';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Saved Listings';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['flag_listings_tab'] = $view;

  $view = new view();
  $view->name = 'hotsheet';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hotsheet';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hotsheet';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hotsheet' => 'hotsheet',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'hotsheet';
  $export['hotsheet'] = $view;

  $view = new view();
  $view->name = 'listing_flyer_classic';
  $view->description = 'Displays the "classic" (default) printable flyer';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Listing Flyer - classic';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'classic_flyer';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'classic_flyer';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['title']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['title']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'flyer/classic/%';
  $export['listing_flyer_classic'] = $view;

  $view = new view();
  $view->name = 'listing_map';
  $view->description = 'Displays a map in the sidebar for a specific listing';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Listing Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Listing Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Geodata Map */
  $handler->display->display_options['fields']['field_geodata']['id'] = 'field_geodata';
  $handler->display->display_options['fields']['field_geodata']['table'] = 'field_data_field_geodata';
  $handler->display->display_options['fields']['field_geodata']['field'] = 'field_geodata';
  $handler->display->display_options['fields']['field_geodata']['ui_name'] = 'Geodata Map';
  $handler->display->display_options['fields']['field_geodata']['label'] = '';
  $handler->display->display_options['fields']['field_geodata']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geodata']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geodata']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['field_geodata']['settings'] = array(
    'geofield_map_width' => '100%',
    'geofield_map_height' => '300px',
    'geofield_map_zoom' => '14',
    'geofield_map_controltype' => 'default',
    'geofield_map_mtc' => 'standard',
    'geofield_map_pancontrol' => 1,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 1,
    'geofield_map_baselayers_hybrid' => 1,
    'geofield_map_baselayers_physical' => 0,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 0,
    'geofield_map_streetview_show' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['title']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['title']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Internet Address (field_internetaddress) */
  $handler->display->display_options['filters']['field_internetaddress_value']['id'] = 'field_internetaddress_value';
  $handler->display->display_options['filters']['field_internetaddress_value']['table'] = 'field_data_field_internetaddress';
  $handler->display->display_options['filters']['field_internetaddress_value']['field'] = 'field_internetaddress_value';
  $handler->display->display_options['filters']['field_internetaddress_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_internetaddress_value']['value'] = array(
    'No' => 'No',
  );
  /* Filter criterion: Content: GeoData (field_geodata:lat) */
  $handler->display->display_options['filters']['field_geodata_lat']['id'] = 'field_geodata_lat';
  $handler->display->display_options['filters']['field_geodata_lat']['table'] = 'field_data_field_geodata';
  $handler->display->display_options['filters']['field_geodata_lat']['field'] = 'field_geodata_lat';
  $handler->display->display_options['filters']['field_geodata_lat']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Street Address (hidden) */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['ui_name'] = 'Street Address (hidden)';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  /* Field: City (hidden) */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['ui_name'] = 'City (hidden)';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: State (hidden) */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['ui_name'] = 'State (hidden)';
  $handler->display->display_options['fields']['field_state']['label'] = '';
  $handler->display->display_options['fields']['field_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_state']['element_label_colon'] = FALSE;
  /* Field: Zipcode (hidden) */
  $handler->display->display_options['fields']['field_zipcode']['id'] = 'field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['table'] = 'field_data_field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['field'] = 'field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['ui_name'] = 'Zipcode (hidden)';
  $handler->display->display_options['fields']['field_zipcode']['label'] = '';
  $handler->display->display_options['fields']['field_zipcode']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zipcode']['element_label_colon'] = FALSE;
  /* Field: List Price (hidden) */
  $handler->display->display_options['fields']['field_listprice']['id'] = 'field_listprice';
  $handler->display->display_options['fields']['field_listprice']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['fields']['field_listprice']['field'] = 'field_listprice';
  $handler->display->display_options['fields']['field_listprice']['ui_name'] = 'List Price (hidden)';
  $handler->display->display_options['fields']['field_listprice']['label'] = '';
  $handler->display->display_options['fields']['field_listprice']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_listprice']['alter']['text'] = 'List Price: [field_listprice-value] ';
  $handler->display->display_options['fields']['field_listprice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_listprice']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Address  */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Address ';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_address]<BR>
[field_city]  [field_state]  [field_zipcode] <BR>
List Price: [field_listprice] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: GeoData */
  $handler->display->display_options['fields']['field_geodata']['id'] = 'field_geodata';
  $handler->display->display_options['fields']['field_geodata']['table'] = 'field_data_field_geodata';
  $handler->display->display_options['fields']['field_geodata']['field'] = 'field_geodata';
  $handler->display->display_options['fields']['field_geodata']['label'] = '';
  $handler->display->display_options['fields']['field_geodata']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geodata']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geodata']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['field_geodata']['settings'] = array(
    'geofield_map_width' => '100%',
    'geofield_map_height' => '500px',
    'geofield_map_zoom' => '14',
    'geofield_map_controltype' => 'default',
    'geofield_map_mtc' => 'standard',
    'geofield_map_pancontrol' => 1,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 1,
    'geofield_map_baselayers_hybrid' => 1,
    'geofield_map_baselayers_physical' => 0,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 1,
    'geofield_map_draggable' => 0,
    'geofield_map_streetview_show' => 1,
  );
  $handler->display->display_options['path'] = 'listing-map';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $export['listing_map'] = $view;

  $view = new view();
  $view->name = 'listing_stati';
  $view->description = 'Display listing list for each property type (1=Commercial, 2=Comm Lease, 3=Land, 4=MultiFam, 5=Rental, 6=Residential)';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Listing Statistics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Listing Statistics';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '3';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Listings per page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'php' => 'php',
    'php_1' => 'php_1',
    'php_2' => 'php_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
   global $user, $stats, $months;
   $stats = array();
   $months = array (
       1 => date(\'Ym\'),
       2 => date(\'Ym\',strtotime("-1 month")),
       3 => date(\'Ym\',strtotime("-2 months")),
       4 => date(\'Ym\',strtotime("-3 months")),
       5 => date(\'Ym\',strtotime("-4 months")),
       6 => date(\'Ym\',strtotime("-5 months")),
   );
?>';
  /* Field: Listing# (Title -- hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Listing# (Title -- hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Flyer Picture (from OIPRETS) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Flyer Picture (from OIPRETS)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
// Pulls listing picture from OIPRETS
$ch = curl_init();
 $timeout = 0; // set to zero for no timeout
 curl_setopt ($ch, CURLOPT_URL, "http://www.oiprets.com/htbin/bsfphoto.cgi?debug=0&id=$row->title&w=140");
 curl_setopt ($ch, CURLOPT_RETURNTRANSFER, 1);
 curl_setopt ($ch, CURLOPT_CONNECTTIMEOUT, $timeout);
 $file_contents = curl_exec($ch);
 curl_close($ch);
print "<a href=/$row->title border=0>$file_contents</a>";
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Address and link */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Address and link';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
  $node=node_load($data->nid);
  print "<a href=/$node->title>$node->title</a><BR>";
  $ad_title = field_fetch_field_values(\'node\', $node, \'field_adtitle\');    // use the override or the original
  if (strlen($ad_title[0]) == 0) {
     $ad_title = field_fetch_field_values(\'node\', $node, \'field_originaladtitle\');
  }
  $adtitle = $ad_title[0];
  $address = field_fetch_field_values(\'node\', $node, \'field_address\');
  $city = field_fetch_field_values(\'node\', $node, \'field_city\');
  $state = field_fetch_field_values(\'node\', $node, \'field_state\');
  $zip = field_fetch_field_values(\'node\', $node, \'field_zipcode\');
  print "<strong>$adtitle</strong><BR>$address[0]<BR>$city[0], $state[0]  $zip[0]";
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: This Month */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['ui_name'] = 'This Month';
  $handler->display->display_options['fields']['php_2']['label'] = 'This Month';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
    global $total;
   $date = date(\'Ym\');
    // oip_get_stats is in oip_tweaks.module
    $count = oip_get_stats($row->title,$date);
    print $count;
    $total = $count;
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = 'Previous Month';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
    global $total;
   $date = date(\'Ym\',strtotime("-1 month"));
    // oip_get_stats is in oip_tweaks.module
    $count = oip_get_stats($row->title,$date);
    print $count;
    $total = $total + $count;
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['label'] = '-2 months';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
    global $total;
   $date = date(\'Ym\',strtotime("-2 months"));
    // oip_get_stats is in oip_tweaks.module
    $count = oip_get_stats($row->title,$date);
    print $count;
    $total = $total + $count;
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_5']['id'] = 'php_5';
  $handler->display->display_options['fields']['php_5']['table'] = 'views';
  $handler->display->display_options['fields']['php_5']['field'] = 'php';
  $handler->display->display_options['fields']['php_5']['label'] = '-3 months';
  $handler->display->display_options['fields']['php_5']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_5']['php_output'] = '<?php
    global $total;
   $date = date(\'Ym\',strtotime("-3 months"));
    // oip_get_stats is in oip_tweaks.module
    $count = oip_get_stats($row->title,$date);
    print $count;
    $total = $total + $count;
?>';
  $handler->display->display_options['fields']['php_5']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_5']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_6']['id'] = 'php_6';
  $handler->display->display_options['fields']['php_6']['table'] = 'views';
  $handler->display->display_options['fields']['php_6']['field'] = 'php';
  $handler->display->display_options['fields']['php_6']['label'] = '-4 months';
  $handler->display->display_options['fields']['php_6']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_6']['php_output'] = '<?php
    global $total;
   $date = date(\'Ym\',strtotime("-4 months"));
    // oip_get_stats is in oip_tweaks.module
    $count = oip_get_stats($row->title,$date);
    print $count;
    $total = $total + $count;
?>';
  $handler->display->display_options['fields']['php_6']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_6']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_7']['id'] = 'php_7';
  $handler->display->display_options['fields']['php_7']['table'] = 'views';
  $handler->display->display_options['fields']['php_7']['field'] = 'php';
  $handler->display->display_options['fields']['php_7']['label'] = '-5 months';
  $handler->display->display_options['fields']['php_7']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_7']['php_output'] = '<?php
    global $total;
   $date = date(\'Ym\',strtotime("-5 months"));
    // oip_get_stats is in oip_tweaks.module
    $count = oip_get_stats($row->title,$date);
    print $count;
    $total = $total + $count;
?>';
  $handler->display->display_options['fields']['php_7']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_7']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_8']['id'] = 'php_8';
  $handler->display->display_options['fields']['php_8']['table'] = 'views';
  $handler->display->display_options['fields']['php_8']['field'] = 'php';
  $handler->display->display_options['fields']['php_8']['label'] = 'Total';
  $handler->display->display_options['fields']['php_8']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_8']['php_output'] = '<?php
    global $total;
    print $total;
?>';
  $handler->display->display_options['fields']['php_8']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_8']['php_click_sortable'] = '';
  /* Sort criterion: Content: List Price (field_listprice) */
  $handler->display->display_options['sorts']['field_listprice_value']['id'] = 'field_listprice_value';
  $handler->display->display_options['sorts']['field_listprice_value']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['sorts']['field_listprice_value']['field'] = 'field_listprice_value';
  $handler->display->display_options['sorts']['field_listprice_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_listprice_value']['expose']['label'] = 'List Price';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['sorts']['created']['granularity'] = 'hour';
  /* Contextual filter: Content: Listing Agent ID (field_listingagentid) */
  $handler->display->display_options['arguments']['field_listingagentid_value']['id'] = 'field_listingagentid_value';
  $handler->display->display_options['arguments']['field_listingagentid_value']['table'] = 'field_data_field_listingagentid';
  $handler->display->display_options['arguments']['field_listingagentid_value']['field'] = 'field_listingagentid_value';
  $handler->display->display_options['arguments']['field_listingagentid_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_listingagentid_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_listingagentid_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_listingagentid_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_listingagentid_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'SOLD' => 'SOLD',
  );
  /* Filter criterion: Content: List Price (field_listprice) */
  $handler->display->display_options['filters']['field_listprice_value']['id'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['filters']['field_listprice_value']['field'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_listprice_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_listprice_value']['expose']['operator_id'] = 'field_listprice_value_op';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['label'] = 'List Price (field_listprice)';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['operator'] = 'field_listprice_value_op';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['identifier'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Property Category (field_proptype) */
  $handler->display->display_options['filters']['field_proptype_tid']['id'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['filters']['field_proptype_tid']['field'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['value'] = array(
    1 => '1',
    3 => '3',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_proptype_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator_id'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['label'] = 'Property Category (field_proptype)';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['identifier'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_proptype_tid']['vocabulary'] = 'property_type';
  $handler->display->display_options['filters']['field_proptype_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: SqFt (field_sqft) */
  $handler->display->display_options['filters']['field_sqft_value']['id'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['table'] = 'field_data_field_sqft';
  $handler->display->display_options['filters']['field_sqft_value']['field'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_sqft_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sqft_value']['expose']['operator_id'] = 'field_sqft_value_op';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['label'] = 'SqFt';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['operator'] = 'field_sqft_value_op';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['identifier'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Beds (field_beds) */
  $handler->display->display_options['filters']['field_beds_value']['id'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['table'] = 'field_data_field_beds';
  $handler->display->display_options['filters']['field_beds_value']['field'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_beds_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_beds_value']['expose']['operator_id'] = 'field_beds_value_op';
  $handler->display->display_options['filters']['field_beds_value']['expose']['label'] = 'Beds';
  $handler->display->display_options['filters']['field_beds_value']['expose']['operator'] = 'field_beds_value_op';
  $handler->display->display_options['filters']['field_beds_value']['expose']['identifier'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Baths (field_baths) */
  $handler->display->display_options['filters']['field_baths_value']['id'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['table'] = 'field_data_field_baths';
  $handler->display->display_options['filters']['field_baths_value']['field'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_baths_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_baths_value']['expose']['operator_id'] = 'field_baths_value_op';
  $handler->display->display_options['filters']['field_baths_value']['expose']['label'] = 'Baths';
  $handler->display->display_options['filters']['field_baths_value']['expose']['operator'] = 'field_baths_value_op';
  $handler->display->display_options['filters']['field_baths_value']['expose']['identifier'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );

  /* Display: Listing Statistics */
  $handler = $view->new_display('page', 'Listing Statistics', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Active' => 'Active',
    'Pending' => 'Pending',
    'Bumpable Buyer' => 'Bumpable Buyer',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
    12 => 0,
  );
  /* Filter criterion: Content: Property Category (field_proptype) */
  $handler->display->display_options['filters']['field_proptype_tid']['id'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['filters']['field_proptype_tid']['field'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['value'] = array(
    1 => '1',
    3 => '3',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_proptype_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_proptype_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator_id'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['identifier'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_proptype_tid']['vocabulary'] = 'property_type';
  $handler->display->display_options['filters']['field_proptype_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'mystats/%';
  $export['listing_stati'] = $view;

  $view = new view();
  $view->name = 'listing_statistics';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'accesslog';
  $view->human_name = 'Listing statistics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Listing statistics';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Access log: Aid */
  $handler->display->display_options['fields']['aid']['id'] = 'aid';
  $handler->display->display_options['fields']['aid']['table'] = 'accesslog';
  $handler->display->display_options['fields']['aid']['field'] = 'aid';
  /* Field: Access log: Page title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'accesslog';
  $handler->display->display_options['fields']['title']['field'] = 'title';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'listing-statistics';
  $export['listing_statistics'] = $view;

  $view = new view();
  $view->name = 'listings';
  $view->description = 'Display listing list for each property type (1=Commercial, 2=Comm Lease, 3=Land, 4=MultiFam, 5=Rental, 6=Residential)';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All My Listings';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '3';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Listings per page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'php' => 'php',
    'php_1' => 'php_1',
    'php_2' => 'php_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Listing# (Title -- hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Listing# (Title -- hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Flyer Picture (from OIPRETS) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Flyer Picture (from OIPRETS)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
// Pulls listing picture from OIPRETS
$ch = curl_init();
 $timeout = 0; // set to zero for no timeout
 // curl_setopt ($ch, CURLOPT_URL, "http://www.oiprets.com/htbin/bsfphoto.cgi?debug=0&id=$row->title&w=140");
 curl_setopt ($ch, CURLOPT_URL, "http://www.oiprets.com/bsfphotos.php?debug=0&id=$row->title&w=140");
 curl_setopt ($ch, CURLOPT_RETURNTRANSFER, 1);
 curl_setopt ($ch, CURLOPT_CONNECTTIMEOUT, $timeout);
 $file_contents = curl_exec($ch);
 curl_close($ch);
print "<a href=/$row->title border=0>$file_contents</a>";
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Address and link */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Address and link';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
  $node=node_load($data->nid);
  $qry = \'\';
  if (isset($_SERVER[\'REDIRECT_QUERY_STRING\'])) {
     if (strlen($_SERVER[\'REDIRECT_QUERY_STRING\']) > 0) {
        $qry = \'?\' . $_SERVER[\'REDIRECT_QUERY_STRING\'];
     }
  }
  print "<a href=/$node->title$qry>$node->title</a><BR>";
  $ad_title = field_fetch_field_values(\'node\', $node, \'field_adtitle\');    // use the override or the original
  if (strlen($ad_title[0]) == 0) {
     $ad_title = field_fetch_field_values(\'node\', $node, \'field_originaladtitle\');
  }
  $adtitle = $ad_title[0];
  $address = field_fetch_field_values(\'node\', $node, \'field_address\');
  $city = field_fetch_field_values(\'node\', $node, \'field_city\');
  $state = field_fetch_field_values(\'node\', $node, \'field_state\');
  $zip = field_fetch_field_values(\'node\', $node, \'field_zipcode\');
  print "<strong>$adtitle</strong><BR>$address[0]<BR>$city[0], $state[0]  $zip[0]";
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Status and Particulars (PHP) */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['ui_name'] = 'Status and Particulars (PHP)';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
  $node=node_load($data->nid);
  $wrapper = entity_metadata_wrapper(\'node\',$data->nid);
  $beds = $wrapper->field_beds->value();
  $baths = $wrapper->field_baths->value();
  $sqft = $wrapper->field_sqft->value();
  $acreage = $wrapper->field_acreage->value();
 
  $proptype = $wrapper->field_proptype->value()->name;
  $status = $wrapper->field_status->value();
  switch ($status) {
  case \'Active\':
     $desc = \'For Sale\';
     break;
  case \'Pending\':
     $desc = \'For Sale (pending)\';
     break;
  case \'Bumpable Buyer\':
     $desc = \'For Sale\';
     break;
  case \'SOLD\':
     $desc = \'Sold\';
     break;
  case \'Expired\':
     $desc = \'Expired\';
     break;
  case \'Canceled\':
     $desc = \'Canceled\';
     break;
  case \'Withdrawn\':
     $desc = \'Withdrawn\';
     break;
  case \'Short Sale Pending\':
     $desc = \'Short Sale Pending\';
     break;
  default;
     $desc = \'Sold\';
     break;
  }
  print "<font color=red>$desc: $proptype</font><BR>";
  switch ($proptype) {
    case \'Commercial Sale\':
       break;
    case \'Commercial Lease\':
       break;
    case \'Land\':
       print "Acreage: $acreage<BR>";
       break;
    case \'Rental\':
       break;
    case \'MultiFamily\':
       break;
    case \'Residential\':
       print "Beds: $beds<BR>Baths: $baths<BR>Sqft: ".number_format($sqft)."<BR>Acreage: $acreage<BR>";
       break;
  }
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: List Price */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['ui_name'] = 'List Price';
  $handler->display->display_options['fields']['php_3']['label'] = '';
  $handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
  $node=node_load($data->nid);
  $listprice = field_fetch_field_values(\'node\', $node, \'field_listprice\');
  print "$ ".number_format($listprice[0])."<BR>";
 
  $ary = field_fetch_field_values(\'node\',$node,\'field_internetaddress\'); $showaddress = $ary[0];
  if ($showaddress != \'No\' && isset($node->field_geodata[\'und\'][0][\'lat\']) ) {
    print \'<a href="/listing-map/\'.$node->title.\'">Map</a>\'."<BR>";
  }

  print  flag_create_link(\'listings\', $node->nid);
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['label'] = 'Debugging';
  $handler->display->display_options['fields']['php_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
  // dpm($_SERVER);
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Sort criterion: Content: List Price (field_listprice) */
  $handler->display->display_options['sorts']['field_listprice_value']['id'] = 'field_listprice_value';
  $handler->display->display_options['sorts']['field_listprice_value']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['sorts']['field_listprice_value']['field'] = 'field_listprice_value';
  $handler->display->display_options['sorts']['field_listprice_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_listprice_value']['expose']['label'] = 'List Price';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['sorts']['created']['granularity'] = 'hour';
  /* Contextual filter: Content: Listing Agent ID (field_listingagentid) */
  $handler->display->display_options['arguments']['field_listingagentid_value']['id'] = 'field_listingagentid_value';
  $handler->display->display_options['arguments']['field_listingagentid_value']['table'] = 'field_data_field_listingagentid';
  $handler->display->display_options['arguments']['field_listingagentid_value']['field'] = 'field_listingagentid_value';
  $handler->display->display_options['arguments']['field_listingagentid_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_listingagentid_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_listingagentid_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_listingagentid_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_listingagentid_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Pending' => 'Pending',
    'SOLD' => 'SOLD',
  );
  /* Filter criterion: Content: List Price (field_listprice) */
  $handler->display->display_options['filters']['field_listprice_value']['id'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['filters']['field_listprice_value']['field'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_listprice_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_listprice_value']['expose']['operator_id'] = 'field_listprice_value_op';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['label'] = 'List Price (field_listprice)';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['operator'] = 'field_listprice_value_op';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['identifier'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Property Category (field_proptype) */
  $handler->display->display_options['filters']['field_proptype_tid']['id'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['filters']['field_proptype_tid']['field'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['value'] = array(
    1 => '1',
    3 => '3',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_proptype_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator_id'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['label'] = 'Property Category (field_proptype)';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['identifier'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_proptype_tid']['vocabulary'] = 'property_type';
  $handler->display->display_options['filters']['field_proptype_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: SqFt (field_sqft) */
  $handler->display->display_options['filters']['field_sqft_value']['id'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['table'] = 'field_data_field_sqft';
  $handler->display->display_options['filters']['field_sqft_value']['field'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_sqft_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sqft_value']['expose']['operator_id'] = 'field_sqft_value_op';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['label'] = 'SqFt';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['operator'] = 'field_sqft_value_op';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['identifier'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Beds (field_beds) */
  $handler->display->display_options['filters']['field_beds_value']['id'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['table'] = 'field_data_field_beds';
  $handler->display->display_options['filters']['field_beds_value']['field'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_beds_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_beds_value']['expose']['operator_id'] = 'field_beds_value_op';
  $handler->display->display_options['filters']['field_beds_value']['expose']['label'] = 'Beds';
  $handler->display->display_options['filters']['field_beds_value']['expose']['operator'] = 'field_beds_value_op';
  $handler->display->display_options['filters']['field_beds_value']['expose']['identifier'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Baths (field_baths) */
  $handler->display->display_options['filters']['field_baths_value']['id'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['table'] = 'field_data_field_baths';
  $handler->display->display_options['filters']['field_baths_value']['field'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_baths_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_baths_value']['expose']['operator_id'] = 'field_baths_value_op';
  $handler->display->display_options['filters']['field_baths_value']['expose']['label'] = 'Baths';
  $handler->display->display_options['filters']['field_baths_value']['expose']['operator'] = 'field_baths_value_op';
  $handler->display->display_options['filters']['field_baths_value']['expose']['identifier'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );

  /* Display: General Listing */
  $handler = $view->new_display('page', 'General Listing', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Property Category (field_proptype) */
  $handler->display->display_options['arguments']['field_proptype_tid']['id'] = 'field_proptype_tid';
  $handler->display->display_options['arguments']['field_proptype_tid']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['arguments']['field_proptype_tid']['field'] = 'field_proptype_tid';
  $handler->display->display_options['arguments']['field_proptype_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_proptype_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_proptype_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_proptype_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Active' => 'Active',
    'Bumpable Buyer' => 'Bumpable Buyer',
    'Short Sale Pending' => 'Short Sale Pending',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  /* Filter criterion: Content: List Price (field_listprice) */
  $handler->display->display_options['filters']['field_listprice_value']['id'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['filters']['field_listprice_value']['field'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_listprice_value']['group'] = 1;
  $handler->display->display_options['filters']['field_listprice_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_listprice_value']['expose']['operator_id'] = 'field_listprice_value_op';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['label'] = 'List Price between';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['operator'] = 'field_listprice_value_op';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['identifier'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_listprice_value']['group_info']['label'] = 'List Price (field_listprice)';
  $handler->display->display_options['filters']['field_listprice_value']['group_info']['identifier'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_listprice_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: City (field_city) */
  $handler->display->display_options['filters']['field_city_value']['id'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['table'] = 'field_data_field_city';
  $handler->display->display_options['filters']['field_city_value']['field'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_city_value']['group'] = 1;
  $handler->display->display_options['filters']['field_city_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_city_value']['expose']['operator_id'] = 'field_city_value_op';
  $handler->display->display_options['filters']['field_city_value']['expose']['label'] = 'City (part)';
  $handler->display->display_options['filters']['field_city_value']['expose']['description'] = 'Full or Partial City Name';
  $handler->display->display_options['filters']['field_city_value']['expose']['operator'] = 'field_city_value_op';
  $handler->display->display_options['filters']['field_city_value']['expose']['identifier'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Beds (field_beds) */
  $handler->display->display_options['filters']['field_beds_value']['id'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['table'] = 'field_data_field_beds';
  $handler->display->display_options['filters']['field_beds_value']['field'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_beds_value']['group'] = 1;
  $handler->display->display_options['filters']['field_beds_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_beds_value']['expose']['operator_id'] = 'field_beds_value_op';
  $handler->display->display_options['filters']['field_beds_value']['expose']['label'] = 'Beds +';
  $handler->display->display_options['filters']['field_beds_value']['expose']['operator'] = 'field_beds_value_op';
  $handler->display->display_options['filters']['field_beds_value']['expose']['identifier'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Baths (field_baths) */
  $handler->display->display_options['filters']['field_baths_value']['id'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['table'] = 'field_data_field_baths';
  $handler->display->display_options['filters']['field_baths_value']['field'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_baths_value']['group'] = 1;
  $handler->display->display_options['filters']['field_baths_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_baths_value']['expose']['operator_id'] = 'field_baths_value_op';
  $handler->display->display_options['filters']['field_baths_value']['expose']['label'] = 'Baths +';
  $handler->display->display_options['filters']['field_baths_value']['expose']['operator'] = 'field_baths_value_op';
  $handler->display->display_options['filters']['field_baths_value']['expose']['identifier'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: SqFt (field_sqft) */
  $handler->display->display_options['filters']['field_sqft_value']['id'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['table'] = 'field_data_field_sqft';
  $handler->display->display_options['filters']['field_sqft_value']['field'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_sqft_value']['group'] = 1;
  $handler->display->display_options['filters']['field_sqft_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sqft_value']['expose']['operator_id'] = 'field_sqft_value_op';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['label'] = 'SqFt +';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['operator'] = 'field_sqft_value_op';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['identifier'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Acreage (field_acreage) */
  $handler->display->display_options['filters']['field_acreage_value']['id'] = 'field_acreage_value';
  $handler->display->display_options['filters']['field_acreage_value']['table'] = 'field_data_field_acreage';
  $handler->display->display_options['filters']['field_acreage_value']['field'] = 'field_acreage_value';
  $handler->display->display_options['filters']['field_acreage_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_acreage_value']['group'] = 1;
  $handler->display->display_options['filters']['field_acreage_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_acreage_value']['expose']['operator_id'] = 'field_acreage_value_op';
  $handler->display->display_options['filters']['field_acreage_value']['expose']['label'] = 'Acreage +';
  $handler->display->display_options['filters']['field_acreage_value']['expose']['operator'] = 'field_acreage_value_op';
  $handler->display->display_options['filters']['field_acreage_value']['expose']['identifier'] = 'field_acreage_value';
  $handler->display->display_options['filters']['field_acreage_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Property Category (field_proptype) */
  $handler->display->display_options['filters']['field_proptype_tid']['id'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['filters']['field_proptype_tid']['field'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['value'] = array(
    1 => '1',
    3 => '3',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_proptype_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_proptype_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator_id'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['label'] = 'Property Category';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['identifier'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_proptype_tid']['vocabulary'] = 'property_type';
  $handler->display->display_options['filters']['field_proptype_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'listings';

  /* Display: Agent Actives */
  $handler = $view->new_display('page', 'Agent Actives', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Active' => 'Active',
    'Bumpable Buyer' => 'Bumpable Buyer',
    'Short Sale Pending' => 'Short Sale Pending',
    'Pending' => 'Pending',
  );
  /* Filter criterion: Content: List Price (field_listprice) */
  $handler->display->display_options['filters']['field_listprice_value']['id'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['filters']['field_listprice_value']['field'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_listprice_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_listprice_value']['expose']['operator_id'] = 'field_listprice_value_op';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['label'] = 'List Price (field_listprice)';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['operator'] = 'field_listprice_value_op';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['identifier'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Property Category (field_proptype) */
  $handler->display->display_options['filters']['field_proptype_tid']['id'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['filters']['field_proptype_tid']['field'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['value'] = array(
    1 => '1',
    3 => '3',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_proptype_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator_id'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['label'] = 'Property Category (field_proptype)';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['identifier'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_proptype_tid']['vocabulary'] = 'property_type';
  $handler->display->display_options['filters']['field_proptype_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: SqFt (field_sqft) */
  $handler->display->display_options['filters']['field_sqft_value']['id'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['table'] = 'field_data_field_sqft';
  $handler->display->display_options['filters']['field_sqft_value']['field'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_sqft_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sqft_value']['expose']['operator_id'] = 'field_sqft_value_op';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['label'] = 'SqFt';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['operator'] = 'field_sqft_value_op';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['identifier'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Beds (field_beds) */
  $handler->display->display_options['filters']['field_beds_value']['id'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['table'] = 'field_data_field_beds';
  $handler->display->display_options['filters']['field_beds_value']['field'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_beds_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_beds_value']['expose']['operator_id'] = 'field_beds_value_op';
  $handler->display->display_options['filters']['field_beds_value']['expose']['label'] = 'Beds';
  $handler->display->display_options['filters']['field_beds_value']['expose']['operator'] = 'field_beds_value_op';
  $handler->display->display_options['filters']['field_beds_value']['expose']['identifier'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Baths (field_baths) */
  $handler->display->display_options['filters']['field_baths_value']['id'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['table'] = 'field_data_field_baths';
  $handler->display->display_options['filters']['field_baths_value']['field'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_baths_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_baths_value']['expose']['operator_id'] = 'field_baths_value_op';
  $handler->display->display_options['filters']['field_baths_value']['expose']['label'] = 'Baths';
  $handler->display->display_options['filters']['field_baths_value']['expose']['operator'] = 'field_baths_value_op';
  $handler->display->display_options['filters']['field_baths_value']['expose']['identifier'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'myactives/%';

  /* Display: Agent Solds */
  $handler = $view->new_display('page', 'Agent Solds', 'page_2');
  $handler->display->display_options['path'] = 'mysolds/%';

  /* Display: Mapped Listings */
  $handler = $view->new_display('page', 'Mapped Listings', 'page_3');
  $handler->display->display_options['display_description'] = 'Display search results on a map';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'geofield_map_map';
  $handler->display->display_options['style_options']['data_source'] = 'field_geodata';
  $handler->display->display_options['style_options']['popup_source'] = 'php_1';
  $handler->display->display_options['style_options']['geofield_map_height'] = '500px';
  $handler->display->display_options['style_options']['geofield_map_zoom'] = '14';
  $handler->display->display_options['style_options']['geofield_map_baselayers_physical'] = 1;
  $handler->display->display_options['style_options']['geofield_map_scrollwheel'] = 1;
  $handler->display->display_options['style_options']['geofield_map_draggable'] = 1;
  $handler->display->display_options['style_options']['geofield_map_streetview_show'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Listing# (Title -- hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Listing# (Title -- hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Flyer Picture (from OIPRETS) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Flyer Picture (from OIPRETS)';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
// Pulls listing picture from OIPRETS
$ch = curl_init();
 $timeout = 0; // set to zero for no timeout
 curl_setopt ($ch, CURLOPT_URL, "http://www.oiprets.com/htbin/bsfphoto.cgi?debug=0&id=$row->title&w=140");
 curl_setopt ($ch, CURLOPT_RETURNTRANSFER, 1);
 curl_setopt ($ch, CURLOPT_CONNECTTIMEOUT, $timeout);
 $file_contents = curl_exec($ch);
 curl_close($ch);
print "<a href=/$row->title border=0>$file_contents</a>";
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Address and link */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Address and link';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
  $node=node_load($data->nid);
  print "<a href=/$node->title>$node->title</a><BR>";
  $ad_title = field_fetch_field_values(\'node\', $node, \'field_adtitle\');    // use the override or the original
  if (strlen($ad_title[0]) == 0) {
     $ad_title = field_fetch_field_values(\'node\', $node, \'field_originaladtitle\');
  }
  $adtitle = $ad_title[0];
  $address = field_fetch_field_values(\'node\', $node, \'field_address\');
  $city = field_fetch_field_values(\'node\', $node, \'field_city\');
  $state = field_fetch_field_values(\'node\', $node, \'field_state\');
  $zip = field_fetch_field_values(\'node\', $node, \'field_zipcode\');
  print "<strong>$adtitle</strong><BR>$address[0]<BR>$city[0], $state[0]  $zip[0]";
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Status and Particulars (PHP) */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['ui_name'] = 'Status and Particulars (PHP)';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
  $node=node_load($data->nid);
  $ary = field_fetch_field_values(\'node\', $node, \'field_beds\');  $beds = $ary[0];
  $ary = field_fetch_field_values(\'node\', $node, \'field_baths\');  $baths = $ary[0];
  $ary = field_fetch_field_values(\'node\', $node, \'field_sqft\');  $sqft = $ary[0];
  $ary = field_fetch_field_values(\'node\', $node, \'field_acreage\');  $acreage = $ary[0];
 
 $proptype = field_view_field(\'node\', $node, \'field_proptype\');
 $ary = field_fetch_field_values(\'node\', $node, \'field_status\'); $status = $ary[0];
 switch ($status) {
  case \'Active\':
     $desc = \'For Sale\';
     break;
  case \'Pending\':
     $desc = \'For Sale (pending)\';
     break;
  case \'Bumpable Buyer\':
     $desc = \'For Sale\';
     break;
  case \'SOLD\':
     $desc = \'Sold\';
     break;
  case \'Expired\':
     $desc = \'Expired\';
     break;
  case \'Canceled\':
     $desc = \'Canceled\';
     break;
  case \'Withdrawn\':
     $desc = \'Withdrawn\';
     break;
  }
  print "<font color=red>$desc: ". drupal_render_children($proptype) . "</font><BR>";
  $proptype = field_fetch_field_values(\'node\', $node, \'field_proptype\');
  switch ($proptype[0][\'tid\']) {
    case 1:
       break;
    case 2:
       break;
    case 3:
       print "Acreage: $acreage<BR>";
       break;
    case 4:
       break;
    case 5:
       break;
    case 6:
       print "Beds: $beds<BR>Baths: $baths<BR>Sqft: ".number_format($sqft)."<BR>Acreage: $acreage<BR>";
       break;
  }
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: List Price */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['ui_name'] = 'List Price';
  $handler->display->display_options['fields']['php_3']['label'] = '';
  $handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
  $node=node_load($data->nid);
  $listprice = field_fetch_field_values(\'node\', $node, \'field_listprice\');
  print "$ ".number_format($listprice[0])."<BR>";
  print "Map<BR>". flag_create_link(\'listings\', $node->nid);
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: Content: GeoData */
  $handler->display->display_options['fields']['field_geodata']['id'] = 'field_geodata';
  $handler->display->display_options['fields']['field_geodata']['table'] = 'field_data_field_geodata';
  $handler->display->display_options['fields']['field_geodata']['field'] = 'field_geodata';
  $handler->display->display_options['fields']['field_geodata']['label'] = '';
  $handler->display->display_options['fields']['field_geodata']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_geodata']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geodata']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geodata']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['field_geodata']['settings'] = array(
    'geofield_map_width' => '100%',
    'geofield_map_height' => '300px',
    'geofield_map_zoom' => '8',
    'geofield_map_controltype' => 'default',
    'geofield_map_mtc' => 'standard',
    'geofield_map_pancontrol' => 0,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 0,
    'geofield_map_baselayers_satellite' => 0,
    'geofield_map_baselayers_hybrid' => 0,
    'geofield_map_baselayers_physical' => 0,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 0,
    'geofield_map_streetview_show' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Active' => 'Active',
    'Bumpable Buyer' => 'Bumpable Buyer',
    'Short Sale Pending' => 'Short Sale Pending',
  );
  /* Filter criterion: Content: List Price (field_listprice) */
  $handler->display->display_options['filters']['field_listprice_value']['id'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['filters']['field_listprice_value']['field'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_listprice_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_listprice_value']['expose']['operator_id'] = 'field_listprice_value_op';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['label'] = 'List Price (field_listprice)';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['operator'] = 'field_listprice_value_op';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['identifier'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Property Category (field_proptype) */
  $handler->display->display_options['filters']['field_proptype_tid']['id'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['filters']['field_proptype_tid']['field'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['value'] = array(
    1 => '1',
    3 => '3',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_proptype_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator_id'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['label'] = 'Property Category (field_proptype)';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['identifier'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_proptype_tid']['vocabulary'] = 'property_type';
  $handler->display->display_options['filters']['field_proptype_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: SqFt (field_sqft) */
  $handler->display->display_options['filters']['field_sqft_value']['id'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['table'] = 'field_data_field_sqft';
  $handler->display->display_options['filters']['field_sqft_value']['field'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_sqft_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sqft_value']['expose']['operator_id'] = 'field_sqft_value_op';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['label'] = 'SqFt';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['operator'] = 'field_sqft_value_op';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['identifier'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Beds (field_beds) */
  $handler->display->display_options['filters']['field_beds_value']['id'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['table'] = 'field_data_field_beds';
  $handler->display->display_options['filters']['field_beds_value']['field'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_beds_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_beds_value']['expose']['operator_id'] = 'field_beds_value_op';
  $handler->display->display_options['filters']['field_beds_value']['expose']['label'] = 'Beds';
  $handler->display->display_options['filters']['field_beds_value']['expose']['operator'] = 'field_beds_value_op';
  $handler->display->display_options['filters']['field_beds_value']['expose']['identifier'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Baths (field_baths) */
  $handler->display->display_options['filters']['field_baths_value']['id'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['table'] = 'field_data_field_baths';
  $handler->display->display_options['filters']['field_baths_value']['field'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_baths_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_baths_value']['expose']['operator_id'] = 'field_baths_value_op';
  $handler->display->display_options['filters']['field_baths_value']['expose']['label'] = 'Baths';
  $handler->display->display_options['filters']['field_baths_value']['expose']['operator'] = 'field_baths_value_op';
  $handler->display->display_options['filters']['field_baths_value']['expose']['identifier'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'listingsm';

  /* Display: My Listings */
  $handler = $view->new_display('page', 'My Listings', 'page_4');
  $handler->display->display_options['display_description'] = 'Agent member listings';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Active' => 'Active',
    'Bumpable Buyer' => 'Bumpable Buyer',
    'Short Sale Pending' => 'Short Sale Pending',
    'Pending' => 'Pending',
    'SOLD' => 'SOLD',
    'Deleted' => 'Deleted',
    'Expired' => 'Expired',
    'Canceled' => 'Canceled',
  );
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
    12 => 0,
  );
  /* Filter criterion: Content: List Price (field_listprice) */
  $handler->display->display_options['filters']['field_listprice_value']['id'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['filters']['field_listprice_value']['field'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_listprice_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_listprice_value']['expose']['operator_id'] = 'field_listprice_value_op';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['label'] = 'List Price (field_listprice)';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['operator'] = 'field_listprice_value_op';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['identifier'] = 'field_listprice_value';
  $handler->display->display_options['filters']['field_listprice_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Property Category (field_proptype) */
  $handler->display->display_options['filters']['field_proptype_tid']['id'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['filters']['field_proptype_tid']['field'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['value'] = array(
    1 => '1',
    3 => '3',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_proptype_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator_id'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['label'] = 'Property Category (field_proptype)';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['identifier'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_proptype_tid']['vocabulary'] = 'property_type';
  $handler->display->display_options['filters']['field_proptype_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: SqFt (field_sqft) */
  $handler->display->display_options['filters']['field_sqft_value']['id'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['table'] = 'field_data_field_sqft';
  $handler->display->display_options['filters']['field_sqft_value']['field'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_sqft_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sqft_value']['expose']['operator_id'] = 'field_sqft_value_op';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['label'] = 'SqFt';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['operator'] = 'field_sqft_value_op';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['identifier'] = 'field_sqft_value';
  $handler->display->display_options['filters']['field_sqft_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Beds (field_beds) */
  $handler->display->display_options['filters']['field_beds_value']['id'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['table'] = 'field_data_field_beds';
  $handler->display->display_options['filters']['field_beds_value']['field'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_beds_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_beds_value']['expose']['operator_id'] = 'field_beds_value_op';
  $handler->display->display_options['filters']['field_beds_value']['expose']['label'] = 'Beds';
  $handler->display->display_options['filters']['field_beds_value']['expose']['operator'] = 'field_beds_value_op';
  $handler->display->display_options['filters']['field_beds_value']['expose']['identifier'] = 'field_beds_value';
  $handler->display->display_options['filters']['field_beds_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Baths (field_baths) */
  $handler->display->display_options['filters']['field_baths_value']['id'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['table'] = 'field_data_field_baths';
  $handler->display->display_options['filters']['field_baths_value']['field'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_baths_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_baths_value']['expose']['operator_id'] = 'field_baths_value_op';
  $handler->display->display_options['filters']['field_baths_value']['expose']['label'] = 'Baths';
  $handler->display->display_options['filters']['field_baths_value']['expose']['operator'] = 'field_baths_value_op';
  $handler->display->display_options['filters']['field_baths_value']['expose']['identifier'] = 'field_baths_value';
  $handler->display->display_options['filters']['field_baths_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'mylistings/%';
  $export['listings'] = $view;

  $view = new view();
  $view->name = 'listings_edit';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Listings-edit';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Listings - utility';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '50, 100, 200';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['exclude'] = TRUE;
  /* Field: Content: MLS# */
  $handler->display->display_options['fields']['field_mlsno']['id'] = 'field_mlsno';
  $handler->display->display_options['fields']['field_mlsno']['table'] = 'field_data_field_mlsno';
  $handler->display->display_options['fields']['field_mlsno']['field'] = 'field_mlsno';
  $handler->display->display_options['fields']['field_mlsno']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mlsno']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_mlsno']['alter']['path'] = '[field_mlsno]';
  /* Field: Content: Address 1 */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = 'Street Address';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  /* Field: Content: List Date */
  $handler->display->display_options['fields']['field_listdate']['id'] = 'field_listdate';
  $handler->display->display_options['fields']['field_listdate']['table'] = 'field_data_field_listdate';
  $handler->display->display_options['fields']['field_listdate']['field'] = 'field_listdate';
  $handler->display->display_options['fields']['field_listdate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_listdate']['settings'] = array(
    'format_type' => 'report_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: List Price */
  $handler->display->display_options['fields']['field_listprice']['id'] = 'field_listprice';
  $handler->display->display_options['fields']['field_listprice']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['fields']['field_listprice']['field'] = 'field_listprice';
  $handler->display->display_options['fields']['field_listprice']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_listprice']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Listing Agent ID */
  $handler->display->display_options['fields']['field_listingagentid']['id'] = 'field_listingagentid';
  $handler->display->display_options['fields']['field_listingagentid']['table'] = 'field_data_field_listingagentid';
  $handler->display->display_options['fields']['field_listingagentid']['field'] = 'field_listingagentid';
  $handler->display->display_options['fields']['field_listingagentid']['exclude'] = TRUE;
  /* Field: Content: Property Category */
  $handler->display->display_options['fields']['field_proptype']['id'] = 'field_proptype';
  $handler->display->display_options['fields']['field_proptype']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['fields']['field_proptype']['field'] = 'field_proptype';
  $handler->display->display_options['fields']['field_proptype']['label'] = 'Category';
  $handler->display->display_options['fields']['field_proptype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_proptype']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_status] [field_mlsno]<br>
[field_listprice]<BR>
[field_proptype]<br>
[field_address]<BR>
[field_city]<BR>
[field_listingagentid]';
  /* Field: Content: Ad Title Override */
  $handler->display->display_options['fields']['field_adtitle']['id'] = 'field_adtitle';
  $handler->display->display_options['fields']['field_adtitle']['table'] = 'field_data_field_adtitle';
  $handler->display->display_options['fields']['field_adtitle']['field'] = 'field_adtitle';
  $handler->display->display_options['fields']['field_adtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adtitle']['type'] = 'editable';
  $handler->display->display_options['fields']['field_adtitle']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Content: Original Ad Title */
  $handler->display->display_options['fields']['field_originaladtitle']['id'] = 'field_originaladtitle';
  $handler->display->display_options['fields']['field_originaladtitle']['table'] = 'field_data_field_originaladtitle';
  $handler->display->display_options['fields']['field_originaladtitle']['field'] = 'field_originaladtitle';
  $handler->display->display_options['fields']['field_originaladtitle']['exclude'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'editable';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Content: Original Description */
  $handler->display->display_options['fields']['field_originaldescription']['id'] = 'field_originaldescription';
  $handler->display->display_options['fields']['field_originaldescription']['table'] = 'field_data_field_originaldescription';
  $handler->display->display_options['fields']['field_originaldescription']['field'] = 'field_originaldescription';
  $handler->display->display_options['fields']['field_originaldescription']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Original title/ad';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<strong>[field_originaladtitle]</strong><br>&nbsp;<br>
[field_originaldescription]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_adtitle]<BR>
[body] ';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: List Price (field_listprice) */
  $handler->display->display_options['sorts']['field_listprice_value']['id'] = 'field_listprice_value';
  $handler->display->display_options['sorts']['field_listprice_value']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['sorts']['field_listprice_value']['field'] = 'field_listprice_value';
  $handler->display->display_options['sorts']['field_listprice_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_listprice_value']['expose']['label'] = 'List Price ';
  /* Sort criterion: Content: MLS# (field_mlsno) */
  $handler->display->display_options['sorts']['field_mlsno_value']['id'] = 'field_mlsno_value';
  $handler->display->display_options['sorts']['field_mlsno_value']['table'] = 'field_data_field_mlsno';
  $handler->display->display_options['sorts']['field_mlsno_value']['field'] = 'field_mlsno_value';
  $handler->display->display_options['sorts']['field_mlsno_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_mlsno_value']['expose']['label'] = 'MLS#';
  /* Sort criterion: Content: Property Category (field_proptype) */
  $handler->display->display_options['sorts']['field_proptype_tid']['id'] = 'field_proptype_tid';
  $handler->display->display_options['sorts']['field_proptype_tid']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['sorts']['field_proptype_tid']['field'] = 'field_proptype_tid';
  $handler->display->display_options['sorts']['field_proptype_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_proptype_tid']['expose']['label'] = 'Category';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Active' => 'Active',
    'Bumpable Buyer' => 'Bumpable Buyer',
  );
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Listing Agent ID (field_listingagentid) */
  $handler->display->display_options['filters']['field_listingagentid_value']['id'] = 'field_listingagentid_value';
  $handler->display->display_options['filters']['field_listingagentid_value']['table'] = 'field_data_field_listingagentid';
  $handler->display->display_options['filters']['field_listingagentid_value']['field'] = 'field_listingagentid_value';
  $handler->display->display_options['filters']['field_listingagentid_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_listingagentid_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_listingagentid_value']['expose']['operator_id'] = 'field_listingagentid_value_op';
  $handler->display->display_options['filters']['field_listingagentid_value']['expose']['label'] = 'Listing Agent';
  $handler->display->display_options['filters']['field_listingagentid_value']['expose']['operator'] = 'field_listingagentid_value_op';
  $handler->display->display_options['filters']['field_listingagentid_value']['expose']['identifier'] = 'field_listingagentid_value';
  $handler->display->display_options['filters']['field_listingagentid_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: MLS# (field_mlsno) */
  $handler->display->display_options['filters']['field_mlsno_value']['id'] = 'field_mlsno_value';
  $handler->display->display_options['filters']['field_mlsno_value']['table'] = 'field_data_field_mlsno';
  $handler->display->display_options['filters']['field_mlsno_value']['field'] = 'field_mlsno_value';
  $handler->display->display_options['filters']['field_mlsno_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_mlsno_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mlsno_value']['expose']['operator_id'] = 'field_mlsno_value_op';
  $handler->display->display_options['filters']['field_mlsno_value']['expose']['label'] = 'MLS#';
  $handler->display->display_options['filters']['field_mlsno_value']['expose']['operator'] = 'field_mlsno_value_op';
  $handler->display->display_options['filters']['field_mlsno_value']['expose']['identifier'] = 'field_mlsno_value';
  $handler->display->display_options['filters']['field_mlsno_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Address 1 (field_address) */
  $handler->display->display_options['filters']['field_address_value']['id'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_value']['field'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_value']['expose']['operator_id'] = 'field_address_value_op';
  $handler->display->display_options['filters']['field_address_value']['expose']['label'] = 'Street Address';
  $handler->display->display_options['filters']['field_address_value']['expose']['operator'] = 'field_address_value_op';
  $handler->display->display_options['filters']['field_address_value']['expose']['identifier'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: City (field_city) */
  $handler->display->display_options['filters']['field_city_value']['id'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['table'] = 'field_data_field_city';
  $handler->display->display_options['filters']['field_city_value']['field'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_city_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_city_value']['expose']['operator_id'] = 'field_city_value_op';
  $handler->display->display_options['filters']['field_city_value']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_city_value']['expose']['operator'] = 'field_city_value_op';
  $handler->display->display_options['filters']['field_city_value']['expose']['identifier'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Property Category (field_proptype) */
  $handler->display->display_options['filters']['field_proptype_tid']['id'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['filters']['field_proptype_tid']['field'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator_id'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['label'] = 'Property Category (field_proptype)';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['identifier'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_proptype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_proptype_tid']['vocabulary'] = 'property_type';
  $handler->display->display_options['filters']['field_proptype_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'listings-edit';
  $export['listings_edit'] = $view;

  $view = new view();
  $view->name = 'listings_utility';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Listings - utility';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Listings - utility';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '50, 100, 200';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: MLS# */
  $handler->display->display_options['fields']['field_mlsno']['id'] = 'field_mlsno';
  $handler->display->display_options['fields']['field_mlsno']['table'] = 'field_data_field_mlsno';
  $handler->display->display_options['fields']['field_mlsno']['field'] = 'field_mlsno';
  $handler->display->display_options['fields']['field_mlsno']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_mlsno']['alter']['path'] = '[field_mlsno]';
  /* Field: Content: Address 1 */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = 'Street Address';
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  /* Field: Content: List Date */
  $handler->display->display_options['fields']['field_listdate']['id'] = 'field_listdate';
  $handler->display->display_options['fields']['field_listdate']['table'] = 'field_data_field_listdate';
  $handler->display->display_options['fields']['field_listdate']['field'] = 'field_listdate';
  $handler->display->display_options['fields']['field_listdate']['settings'] = array(
    'format_type' => 'report_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: List Price */
  $handler->display->display_options['fields']['field_listprice']['id'] = 'field_listprice';
  $handler->display->display_options['fields']['field_listprice']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['fields']['field_listprice']['field'] = 'field_listprice';
  $handler->display->display_options['fields']['field_listprice']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Listing Agent ID */
  $handler->display->display_options['fields']['field_listingagentid']['id'] = 'field_listingagentid';
  $handler->display->display_options['fields']['field_listingagentid']['table'] = 'field_data_field_listingagentid';
  $handler->display->display_options['fields']['field_listingagentid']['field'] = 'field_listingagentid';
  /* Field: Field: Listing Office ID */
  $handler->display->display_options['fields']['field_offid']['id'] = 'field_offid';
  $handler->display->display_options['fields']['field_offid']['table'] = 'field_data_field_offid';
  $handler->display->display_options['fields']['field_offid']['field'] = 'field_offid';
  /* Field: Content: Property Category */
  $handler->display->display_options['fields']['field_proptype']['id'] = 'field_proptype';
  $handler->display->display_options['fields']['field_proptype']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['fields']['field_proptype']['field'] = 'field_proptype';
  $handler->display->display_options['fields']['field_proptype']['label'] = 'Category';
  $handler->display->display_options['fields']['field_proptype']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: List Price (field_listprice) */
  $handler->display->display_options['sorts']['field_listprice_value']['id'] = 'field_listprice_value';
  $handler->display->display_options['sorts']['field_listprice_value']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['sorts']['field_listprice_value']['field'] = 'field_listprice_value';
  $handler->display->display_options['sorts']['field_listprice_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_listprice_value']['expose']['label'] = 'List Price ';
  /* Sort criterion: Content: MLS# (field_mlsno) */
  $handler->display->display_options['sorts']['field_mlsno_value']['id'] = 'field_mlsno_value';
  $handler->display->display_options['sorts']['field_mlsno_value']['table'] = 'field_data_field_mlsno';
  $handler->display->display_options['sorts']['field_mlsno_value']['field'] = 'field_mlsno_value';
  $handler->display->display_options['sorts']['field_mlsno_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_mlsno_value']['expose']['label'] = 'MLS#';
  /* Sort criterion: Content: Property Category (field_proptype) */
  $handler->display->display_options['sorts']['field_proptype_tid']['id'] = 'field_proptype_tid';
  $handler->display->display_options['sorts']['field_proptype_tid']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['sorts']['field_proptype_tid']['field'] = 'field_proptype_tid';
  $handler->display->display_options['sorts']['field_proptype_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_proptype_tid']['expose']['label'] = 'Category';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Active' => 'Active',
    'Bumpable Buyer' => 'Bumpable Buyer',
    'Short Sale Pending' => 'Short Sale Pending',
  );
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
    12 => 0,
  );
  /* Filter criterion: Content: Listing Agent ID (field_listingagentid) */
  $handler->display->display_options['filters']['field_listingagentid_value']['id'] = 'field_listingagentid_value';
  $handler->display->display_options['filters']['field_listingagentid_value']['table'] = 'field_data_field_listingagentid';
  $handler->display->display_options['filters']['field_listingagentid_value']['field'] = 'field_listingagentid_value';
  $handler->display->display_options['filters']['field_listingagentid_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_listingagentid_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_listingagentid_value']['expose']['operator_id'] = 'field_listingagentid_value_op';
  $handler->display->display_options['filters']['field_listingagentid_value']['expose']['label'] = 'Listing Agent';
  $handler->display->display_options['filters']['field_listingagentid_value']['expose']['operator'] = 'field_listingagentid_value_op';
  $handler->display->display_options['filters']['field_listingagentid_value']['expose']['identifier'] = 'field_listingagentid_value';
  $handler->display->display_options['filters']['field_listingagentid_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: MLS# (field_mlsno) */
  $handler->display->display_options['filters']['field_mlsno_value']['id'] = 'field_mlsno_value';
  $handler->display->display_options['filters']['field_mlsno_value']['table'] = 'field_data_field_mlsno';
  $handler->display->display_options['filters']['field_mlsno_value']['field'] = 'field_mlsno_value';
  $handler->display->display_options['filters']['field_mlsno_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_mlsno_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mlsno_value']['expose']['operator_id'] = 'field_mlsno_value_op';
  $handler->display->display_options['filters']['field_mlsno_value']['expose']['label'] = 'MLS#';
  $handler->display->display_options['filters']['field_mlsno_value']['expose']['operator'] = 'field_mlsno_value_op';
  $handler->display->display_options['filters']['field_mlsno_value']['expose']['identifier'] = 'field_mlsno_value';
  $handler->display->display_options['filters']['field_mlsno_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Address 1 (field_address) */
  $handler->display->display_options['filters']['field_address_value']['id'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_value']['field'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_value']['expose']['operator_id'] = 'field_address_value_op';
  $handler->display->display_options['filters']['field_address_value']['expose']['label'] = 'Street Address';
  $handler->display->display_options['filters']['field_address_value']['expose']['operator'] = 'field_address_value_op';
  $handler->display->display_options['filters']['field_address_value']['expose']['identifier'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: City (field_city) */
  $handler->display->display_options['filters']['field_city_value']['id'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['table'] = 'field_data_field_city';
  $handler->display->display_options['filters']['field_city_value']['field'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_city_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_city_value']['expose']['operator_id'] = 'field_city_value_op';
  $handler->display->display_options['filters']['field_city_value']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_city_value']['expose']['operator'] = 'field_city_value_op';
  $handler->display->display_options['filters']['field_city_value']['expose']['identifier'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Property Category (field_proptype) */
  $handler->display->display_options['filters']['field_proptype_tid']['id'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['filters']['field_proptype_tid']['field'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator_id'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['label'] = 'Property Category (field_proptype)';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['operator'] = 'field_proptype_tid_op';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['identifier'] = 'field_proptype_tid';
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_proptype_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_proptype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_proptype_tid']['vocabulary'] = 'property_type';
  $handler->display->display_options['filters']['field_proptype_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'listingsqd';
  $export['listings_utility'] = $view;

  $view = new view();
  $view->name = 'new_on_oip';
  $view->description = 'Display listings that still need an Ad Title';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New on OIP';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New Listings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Ad Title Override */
  $handler->display->display_options['fields']['field_adtitle']['id'] = 'field_adtitle';
  $handler->display->display_options['fields']['field_adtitle']['table'] = 'field_data_field_adtitle';
  $handler->display->display_options['fields']['field_adtitle']['field'] = 'field_adtitle';
  $handler->display->display_options['fields']['field_adtitle']['label'] = 'Ad Title ';
  /* Field: Content: Listing Agent ID */
  $handler->display->display_options['fields']['field_listingagentid']['id'] = 'field_listingagentid';
  $handler->display->display_options['fields']['field_listingagentid']['table'] = 'field_data_field_listingagentid';
  $handler->display->display_options['fields']['field_listingagentid']['field'] = 'field_listingagentid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Active' => 'Active',
    'Bumpable Buyer' => 'Bumpable Buyer',
    'Short Sale Pending' => 'Short Sale Pending',
    'Pending' => 'Pending',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
    12 => 0,
  );
  /* Filter criterion: Content: Ad Title Override (field_adtitle) */
  $handler->display->display_options['filters']['field_adtitle_value']['id'] = 'field_adtitle_value';
  $handler->display->display_options['filters']['field_adtitle_value']['table'] = 'field_data_field_adtitle';
  $handler->display->display_options['filters']['field_adtitle_value']['field'] = 'field_adtitle_value';
  $handler->display->display_options['filters']['field_adtitle_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_adtitle_value']['value'] = 'New on OIP';
  $handler->display->display_options['filters']['field_adtitle_value']['group'] = 2;
  /* Filter criterion: Content: Ad Title Override (field_adtitle) */
  $handler->display->display_options['filters']['field_adtitle_value_1']['id'] = 'field_adtitle_value_1';
  $handler->display->display_options['filters']['field_adtitle_value_1']['table'] = 'field_data_field_adtitle';
  $handler->display->display_options['filters']['field_adtitle_value_1']['field'] = 'field_adtitle_value';
  $handler->display->display_options['filters']['field_adtitle_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_adtitle_value_1']['value'] = 'New Listing';
  $handler->display->display_options['filters']['field_adtitle_value_1']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'new-listings';
  $export['new_on_oip'] = $view;

  $view = new view();
  $view->name = 'utility_listing_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Utility Listing View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Utility Listing View';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_status' => 'field_status',
    'field_proptype' => 'field_proptype',
    'field_propertytype' => 'field_propertytype',
    'title' => 'title',
    'field_listingagentid' => 'field_listingagentid',
    'field_colistingagentid' => 'field_colistingagentid',
    'field_address' => 'field_address',
    'field_adtitle' => 'field_adtitle',
    'field_originaladtitle' => 'field_originaladtitle',
    'field_rotatelisting' => 'field_rotatelisting',
    'field_lastname' => 'field_lastname',
    'field_listdate' => 'field_listdate',
    'field_offmarketdate' => 'field_offmarketdate',
    'field_solddate' => 'field_solddate',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_proptype' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_propertytype' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listingagentid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_colistingagentid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_adtitle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_originaladtitle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rotatelisting' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lastname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listdate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offmarketdate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_solddate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Property Category */
  $handler->display->display_options['fields']['field_proptype']['id'] = 'field_proptype';
  $handler->display->display_options['fields']['field_proptype']['table'] = 'field_data_field_proptype';
  $handler->display->display_options['fields']['field_proptype']['field'] = 'field_proptype';
  $handler->display->display_options['fields']['field_proptype']['label'] = 'Category';
  /* Field: Content: Property Type */
  $handler->display->display_options['fields']['field_propertytype']['id'] = 'field_propertytype';
  $handler->display->display_options['fields']['field_propertytype']['table'] = 'field_data_field_propertytype';
  $handler->display->display_options['fields']['field_propertytype']['field'] = 'field_propertytype';
  $handler->display->display_options['fields']['field_propertytype']['label'] = 'Type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Listing Agent ID */
  $handler->display->display_options['fields']['field_listingagentid']['id'] = 'field_listingagentid';
  $handler->display->display_options['fields']['field_listingagentid']['table'] = 'field_data_field_listingagentid';
  $handler->display->display_options['fields']['field_listingagentid']['field'] = 'field_listingagentid';
  $handler->display->display_options['fields']['field_listingagentid']['delta_offset'] = '0';
  /* Field: Content: CoListing Agent */
  $handler->display->display_options['fields']['field_colistingagentid']['id'] = 'field_colistingagentid';
  $handler->display->display_options['fields']['field_colistingagentid']['table'] = 'field_data_field_colistingagentid';
  $handler->display->display_options['fields']['field_colistingagentid']['field'] = 'field_colistingagentid';
  /* Field: Content: Address 1 */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = 'Street Address';
  /* Field: Content: Ad Title Override */
  $handler->display->display_options['fields']['field_adtitle']['id'] = 'field_adtitle';
  $handler->display->display_options['fields']['field_adtitle']['table'] = 'field_data_field_adtitle';
  $handler->display->display_options['fields']['field_adtitle']['field'] = 'field_adtitle';
  /* Field: Content: Original Ad Title */
  $handler->display->display_options['fields']['field_originaladtitle']['id'] = 'field_originaladtitle';
  $handler->display->display_options['fields']['field_originaladtitle']['table'] = 'field_data_field_originaladtitle';
  $handler->display->display_options['fields']['field_originaladtitle']['field'] = 'field_originaladtitle';
  /* Field: Content: Rotate */
  $handler->display->display_options['fields']['field_rotatelisting']['id'] = 'field_rotatelisting';
  $handler->display->display_options['fields']['field_rotatelisting']['table'] = 'field_data_field_rotatelisting';
  $handler->display->display_options['fields']['field_rotatelisting']['field'] = 'field_rotatelisting';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_lastname']['id'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['field_lastname']['field'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['relationship'] = 'uid';
  /* Field: Content: List Date */
  $handler->display->display_options['fields']['field_listdate']['id'] = 'field_listdate';
  $handler->display->display_options['fields']['field_listdate']['table'] = 'field_data_field_listdate';
  $handler->display->display_options['fields']['field_listdate']['field'] = 'field_listdate';
  $handler->display->display_options['fields']['field_listdate']['settings'] = array(
    'format_type' => 'report_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Off Market Date */
  $handler->display->display_options['fields']['field_offmarketdate']['id'] = 'field_offmarketdate';
  $handler->display->display_options['fields']['field_offmarketdate']['table'] = 'field_data_field_offmarketdate';
  $handler->display->display_options['fields']['field_offmarketdate']['field'] = 'field_offmarketdate';
  $handler->display->display_options['fields']['field_offmarketdate']['settings'] = array(
    'format_type' => 'report_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Sold Date */
  $handler->display->display_options['fields']['field_solddate']['id'] = 'field_solddate';
  $handler->display->display_options['fields']['field_solddate']['table'] = 'field_data_field_solddate';
  $handler->display->display_options['fields']['field_solddate']['field'] = 'field_solddate';
  $handler->display->display_options['fields']['field_solddate']['settings'] = array(
    'format_type' => 'report_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Listing Agent ID (field_listingagentid) */
  $handler->display->display_options['sorts']['field_listingagentid_value']['id'] = 'field_listingagentid_value';
  $handler->display->display_options['sorts']['field_listingagentid_value']['table'] = 'field_data_field_listingagentid';
  $handler->display->display_options['sorts']['field_listingagentid_value']['field'] = 'field_listingagentid_value';
  $handler->display->display_options['sorts']['field_listingagentid_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_listingagentid_value']['expose']['label'] = 'Listing Agent ID';
  /* Sort criterion: Content: List Price (field_listprice) */
  $handler->display->display_options['sorts']['field_listprice_value']['id'] = 'field_listprice_value';
  $handler->display->display_options['sorts']['field_listprice_value']['table'] = 'field_data_field_listprice';
  $handler->display->display_options['sorts']['field_listprice_value']['field'] = 'field_listprice_value';
  $handler->display->display_options['sorts']['field_listprice_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_listprice_value']['expose']['label'] = 'List Price';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: MLS# (field_mlsno) */
  $handler->display->display_options['filters']['field_mlsno_value']['id'] = 'field_mlsno_value';
  $handler->display->display_options['filters']['field_mlsno_value']['table'] = 'field_data_field_mlsno';
  $handler->display->display_options['filters']['field_mlsno_value']['field'] = 'field_mlsno_value';
  $handler->display->display_options['filters']['field_mlsno_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mlsno_value']['expose']['operator_id'] = 'field_mlsno_value_op';
  $handler->display->display_options['filters']['field_mlsno_value']['expose']['label'] = 'MLS# ';
  $handler->display->display_options['filters']['field_mlsno_value']['expose']['operator'] = 'field_mlsno_value_op';
  $handler->display->display_options['filters']['field_mlsno_value']['expose']['identifier'] = 'field_mlsno_value';
  $handler->display->display_options['filters']['field_mlsno_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => 0,
    3 => '3',
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_status_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: User: Last Name (field_lastname) */
  $handler->display->display_options['filters']['field_lastname_value']['id'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['filters']['field_lastname_value']['field'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_lastname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lastname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lastname_value']['expose']['operator_id'] = 'field_lastname_value_op';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['operator'] = 'field_lastname_value_op';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['identifier'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    11 => 0,
    7 => 0,
    8 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'utility-listing-view';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Util Listings';
  $handler->display->display_options['menu']['description'] = 'Utility Listing display';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['utility_listing_view'] = $view;

  return $export;
}
