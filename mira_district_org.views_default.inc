<?php
/**
 * @file
 * mira_district_org.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mira_district_org_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'jar_org_indexed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_jar_index';
  $view->human_name = 'JAR Organizations Indexed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jar_org' => 'jar_org',
  );

  /* Display: JAR Org */
  $handler = $view->new_display('page', 'JAR Org', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Operational Presence */
  $handler->display->display_options['fields']['field_operational_presence']['id'] = 'field_operational_presence';
  $handler->display->display_options['fields']['field_operational_presence']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_operational_presence']['field'] = 'field_operational_presence';
  $handler->display->display_options['fields']['field_operational_presence']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_operational_presence']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_operational_presence']['bypass_access'] = 0;
  /* Field: Indexed Node: Head of Organization Name */
  $handler->display->display_options['fields']['field_head_of_org_name']['id'] = 'field_head_of_org_name';
  $handler->display->display_options['fields']['field_head_of_org_name']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_head_of_org_name']['field'] = 'field_head_of_org_name';
  /* Field: Indexed Node: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  /* Field: Indexed Node: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Indexed Node: Assessment Focal Person Name */
  $handler->display->display_options['fields']['field_assess_name']['id'] = 'field_assess_name';
  $handler->display->display_options['fields']['field_assess_name']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_assess_name']['field'] = 'field_assess_name';
  /* Field: Indexed Node: Telephone */
  $handler->display->display_options['fields']['field_ass_telephone']['id'] = 'field_ass_telephone';
  $handler->display->display_options['fields']['field_ass_telephone']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_ass_telephone']['field'] = 'field_ass_telephone';
  /* Field: Indexed Node: Email */
  $handler->display->display_options['fields']['field_ass_email']['id'] = 'field_ass_email';
  $handler->display->display_options['fields']['field_ass_email']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_ass_email']['field'] = 'field_ass_email';
  $handler->display->display_options['path'] = 'contacts';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Contact List';
  $handler->display->display_options['menu']['weight'] = '9';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['jar_org_indexed'] = $view;

  $view = new view();
  $view->name = 'jar_org_office';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_jar_index';
  $view->human_name = 'JAR Org Office Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'JAR Org Office Details';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'office_details' => 'office_details',
  );

  /* Display: JAR Org Office */
  $handler = $view->new_display('block', 'JAR Org Office', 'jar_org_off');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Organization Details';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Office Type */
  $handler->display->display_options['fields']['field_office_type']['id'] = 'field_office_type';
  $handler->display->display_options['fields']['field_office_type']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_office_type']['field'] = 'field_office_type';
  $handler->display->display_options['fields']['field_office_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_office_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_office_type']['bypass_access'] = 0;
  /* Field: Indexed Node: Staf Male */
  $handler->display->display_options['fields']['field_staf_male']['id'] = 'field_staf_male';
  $handler->display->display_options['fields']['field_staf_male']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_staf_male']['field'] = 'field_staf_male';
  $handler->display->display_options['fields']['field_staf_male']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Staff Female */
  $handler->display->display_options['fields']['field_staff_female']['id'] = 'field_staff_female';
  $handler->display->display_options['fields']['field_staff_female']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_staff_female']['field'] = 'field_staff_female';
  $handler->display->display_options['fields']['field_staff_female']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: No. PDAs/Android */
  $handler->display->display_options['fields']['field_no_pdas_android']['id'] = 'field_no_pdas_android';
  $handler->display->display_options['fields']['field_no_pdas_android']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_no_pdas_android']['field'] = 'field_no_pdas_android';
  $handler->display->display_options['fields']['field_no_pdas_android']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: No. of vehicles */
  $handler->display->display_options['fields']['field_no_of_vehicles']['id'] = 'field_no_of_vehicles';
  $handler->display->display_options['fields']['field_no_of_vehicles']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_no_of_vehicles']['field'] = 'field_no_of_vehicles';
  $handler->display->display_options['fields']['field_no_of_vehicles']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['block_description'] = 'JAR Organization Office Details';

  /* Display: Office Details Overlay */
  $handler = $view->new_display('openlayers', 'Office Details Overlay', 'off_detail_overlay');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_office_wkt',
    'other_lon' => 'field_office_wkt',
    'wkt' => 'field_office_wkt',
    'other_top' => 'field_office_wkt',
    'other_right' => 'field_office_wkt',
    'other_bottom' => 'field_office_wkt',
    'other_left' => 'field_office_wkt',
    'name_field' => 'field_organization',
    'description_field' => '',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: wkt */
  $handler->display->display_options['fields']['field_office_wkt']['id'] = 'field_office_wkt';
  $handler->display->display_options['fields']['field_office_wkt']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_office_wkt']['field'] = 'field_office_wkt';
  $handler->display->display_options['fields']['field_office_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_office_wkt']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Indexed Node: Office Type */
  $handler->display->display_options['fields']['field_office_type']['id'] = 'field_office_type';
  $handler->display->display_options['fields']['field_office_type']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_office_type']['field'] = 'field_office_type';
  $handler->display->display_options['fields']['field_office_type']['label'] = '';
  $handler->display->display_options['fields']['field_office_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_office_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_office_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_office_type']['bypass_access'] = 0;
  /* Field: Indexed Node: District */
  $handler->display->display_options['fields']['field_district']['id'] = 'field_district';
  $handler->display->display_options['fields']['field_district']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_district']['field'] = 'field_district';
  $handler->display->display_options['fields']['field_district']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_district']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_district']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_district']['bypass_access'] = 0;
  /* Field: Indexed Node: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'search_api_index_jar_index';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['label'] = '';
  $handler->display->display_options['fields']['field_organization']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['alter']['text'] = '[field_organization]-[field_district]-[field_office_type]';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organization']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organization']['bypass_access'] = 0;

  /* Display: JAR Organization Office Map */
  $handler = $view->new_display('block', 'JAR Organization Office Map', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Organization Map';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'jar_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'JAR Organization Office Map';
  $export['jar_org_office'] = $view;

  $view = new view();
  $view->name = 'resources_per_district_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resources Per District ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources Per District ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
    'office_details' => 'office_details',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_locations_target_id']['id'] = 'field_locations_target_id';
  $handler->display->display_options['filters']['field_locations_target_id']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_target_id']['field'] = 'field_locations_target_id';
  $handler->display->display_options['filters']['field_locations_target_id']['operator'] = 'in';
  $handler->display->display_options['filters']['field_locations_target_id']['value'] = array(
    'all' => 'all',
    8 => '8',
    102 => '102',
    103 => '103',
    105 => '105',
    106 => '106',
    107 => '107',
    108 => '108',
    109 => '109',
    110 => '110',
    112 => '112',
    111 => '111',
    113 => '113',
    114 => '114',
    115 => '115',
    116 => '116',
    117 => '117',
    118 => '118',
    119 => '119',
    120 => '120',
    121 => '121',
    122 => '122',
    123 => '123',
    124 => '124',
    125 => '125',
    104 => '104',
    126 => '126',
    127 => '127',
    128 => '128',
    129 => '129',
    130 => '130',
    131 => '131',
    132 => '132',
    1 => '1',
    5 => '5',
    52 => '52',
    59 => '59',
    60 => '60',
    61 => '61',
    62 => '62',
    63 => '63',
    64 => '64',
    53 => '53',
    54 => '54',
    55 => '55',
    56 => '56',
    57 => '57',
    58 => '58',
    6 => '6',
    65 => '65',
    2 => '2',
    10 => '10',
    12 => '12',
    13 => '13',
    14 => '14',
    15 => '15',
    16 => '16',
    11 => '11',
    3 => '3',
    17 => '17',
    18 => '18',
    19 => '19',
    20 => '20',
    21 => '21',
    22 => '22',
    23 => '23',
    24 => '24',
    25 => '25',
    26 => '26',
    27 => '27',
    28 => '28',
    29 => '29',
    30 => '30',
    31 => '31',
    32 => '32',
    33 => '33',
    34 => '34',
    35 => '35',
    36 => '36',
    37 => '37',
    38 => '38',
    39 => '39',
    41 => '41',
    40 => '40',
    4 => '4',
    42 => '42',
    43 => '43',
    44 => '44',
    45 => '45',
    46 => '46',
    47 => '47',
    48 => '48',
    49 => '49',
    50 => '50',
    51 => '51',
    7 => '7',
    66 => '66',
    67 => '67',
    68 => '68',
    69 => '69',
    70 => '70',
    71 => '71',
    72 => '72',
    73 => '73',
    74 => '74',
    75 => '75',
    76 => '76',
    77 => '77',
    78 => '78',
    79 => '79',
    80 => '80',
    81 => '81',
    82 => '82',
    83 => '83',
    84 => '84',
    85 => '85',
    86 => '86',
    87 => '87',
    88 => '88',
    89 => '89',
    90 => '90',
    91 => '91',
    92 => '92',
    93 => '93',
    94 => '94',
    95 => '95',
    96 => '96',
    97 => '97',
    98 => '98',
    99 => '99',
    100 => '100',
    101 => '101',
    9 => '9',
    133 => '133',
    134 => '134',
    135 => '135',
    136 => '136',
    137 => '137',
    138 => '138',
    139 => '139',
    140 => '140',
    141 => '141',
    142 => '142',
    143 => '143',
    144 => '144',
    145 => '145',
    147 => '147',
    146 => '146',
    148 => '148',
    149 => '149',
    150 => '150',
    151 => '151',
    152 => '152',
    153 => '153',
    154 => '154',
    155 => '155',
  );
  $handler->display->display_options['filters']['field_locations_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_target_id']['expose']['operator_id'] = 'field_locations_target_id_op';
  $handler->display->display_options['filters']['field_locations_target_id']['expose']['label'] = 'District';
  $handler->display->display_options['filters']['field_locations_target_id']['expose']['operator'] = 'field_locations_target_id_op';
  $handler->display->display_options['filters']['field_locations_target_id']['expose']['identifier'] = 'field_locations_target_id';
  $handler->display->display_options['filters']['field_locations_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Resources Per District */
  $handler = $view->new_display('page', 'Resources Per District', 'page');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: District */
  $handler->display->display_options['fields']['field_district']['id'] = 'field_district';
  $handler->display->display_options['fields']['field_district']['table'] = 'field_data_field_district';
  $handler->display->display_options['fields']['field_district']['field'] = 'field_district';
  $handler->display->display_options['fields']['field_district']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'No. of organizations';
  /* Field: Content: No. of vehicles */
  $handler->display->display_options['fields']['field_no_of_vehicles']['id'] = 'field_no_of_vehicles';
  $handler->display->display_options['fields']['field_no_of_vehicles']['table'] = 'field_data_field_no_of_vehicles';
  $handler->display->display_options['fields']['field_no_of_vehicles']['field'] = 'field_no_of_vehicles';
  $handler->display->display_options['fields']['field_no_of_vehicles']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_no_of_vehicles']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: No. PDAs/Android */
  $handler->display->display_options['fields']['field_no_pdas_android']['id'] = 'field_no_pdas_android';
  $handler->display->display_options['fields']['field_no_pdas_android']['table'] = 'field_data_field_no_pdas_android';
  $handler->display->display_options['fields']['field_no_pdas_android']['field'] = 'field_no_pdas_android';
  $handler->display->display_options['fields']['field_no_pdas_android']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_no_pdas_android']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Staf Male */
  $handler->display->display_options['fields']['field_staf_male']['id'] = 'field_staf_male';
  $handler->display->display_options['fields']['field_staf_male']['table'] = 'field_data_field_staf_male';
  $handler->display->display_options['fields']['field_staf_male']['field'] = 'field_staf_male';
  $handler->display->display_options['fields']['field_staf_male']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_staf_male']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Staff Female */
  $handler->display->display_options['fields']['field_staff_female']['id'] = 'field_staff_female';
  $handler->display->display_options['fields']['field_staff_female']['table'] = 'field_data_field_staff_female';
  $handler->display->display_options['fields']['field_staff_female']['field'] = 'field_staff_female';
  $handler->display->display_options['fields']['field_staff_female']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_staff_female']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
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
    'office_details' => 'office_details',
  );
  /* Filter criterion: Content: District (field_district) */
  $handler->display->display_options['filters']['field_district_tid']['id'] = 'field_district_tid';
  $handler->display->display_options['filters']['field_district_tid']['table'] = 'field_data_field_district';
  $handler->display->display_options['filters']['field_district_tid']['field'] = 'field_district_tid';
  $handler->display->display_options['filters']['field_district_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_district_tid']['expose']['operator_id'] = 'field_district_tid_op';
  $handler->display->display_options['filters']['field_district_tid']['expose']['label'] = 'District';
  $handler->display->display_options['filters']['field_district_tid']['expose']['operator'] = 'field_district_tid_op';
  $handler->display->display_options['filters']['field_district_tid']['expose']['identifier'] = 'field_district_tid';
  $handler->display->display_options['filters']['field_district_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_district_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_district_tid']['vocabulary'] = 'location';
  $handler->display->display_options['filters']['field_district_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Organization (field_organization) */
  $handler->display->display_options['filters']['field_organization_target_id']['id'] = 'field_organization_target_id';
  $handler->display->display_options['filters']['field_organization_target_id']['table'] = 'field_data_field_organization';
  $handler->display->display_options['filters']['field_organization_target_id']['field'] = 'field_organization_target_id';
  $handler->display->display_options['filters']['field_organization_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_target_id']['expose']['operator_id'] = 'field_organization_target_id_op';
  $handler->display->display_options['filters']['field_organization_target_id']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['field_organization_target_id']['expose']['operator'] = 'field_organization_target_id_op';
  $handler->display->display_options['filters']['field_organization_target_id']['expose']['identifier'] = 'field_organization_target_id';
  $handler->display->display_options['filters']['field_organization_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'resources-per-district-';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Resources Per District ';
  $handler->display->display_options['menu']['weight'] = '11';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['resources_per_district_'] = $view;

  return $export;
}
