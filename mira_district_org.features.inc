<?php
/**
 * @file
 * mira_district_org.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mira_district_org_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mira_district_org_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mira_district_org_node_info() {
  $items = array(
    'jar_org' => array(
      'name' => t('JAR Organizations'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'office_details' => array(
      'name' => t('Office Details'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function mira_district_org_default_search_api_index() {
  $items = array();
  $items['jar_index'] = entity_import('search_api_index', '{
    "name" : "JAR Index",
    "machine_name" : "jar_index",
    "description" : null,
    "server" : "jar_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "published_safe" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "field_acronym" : { "type" : "text" },
        "field_ass_email" : { "type" : "text" },
        "field_ass_telephone" : { "type" : "text" },
        "field_assess_name" : { "type" : "text" },
        "field_district" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_email" : { "type" : "text" },
        "field_head_of_org_name" : { "type" : "text" },
        "field_no_of_vehicles" : { "type" : "integer" },
        "field_no_pdas_android" : { "type" : "integer" },
        "field_office_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_office_wkt:geom" : { "type" : "text" },
        "field_office_wkt:lat" : { "type" : "decimal" },
        "field_office_wkt:lon" : { "type" : "decimal" },
        "field_operational_presence" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_operational_presence:field_wkt:geom" : { "type" : "list\\u003Ctext\\u003E" },
        "field_operational_presence:field_wkt:lat" : { "type" : "list\\u003Cdecimal\\u003E" },
        "field_operational_presence:field_wkt:lon" : { "type" : "list\\u003Cdecimal\\u003E" },
        "field_operational_presence:parent" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_organization" : { "type" : "integer", "entity_type" : "node" },
        "field_organization_name" : { "type" : "text" },
        "field_staf_male" : { "type" : "integer" },
        "field_staff_female" : { "type" : "integer" },
        "field_telephone" : { "type" : "text" },
        "nid" : { "type" : "integer" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : { "jar_org" : "jar_org", "office_details" : "office_details" }
          }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_operational_presence:parent" : "field_operational_presence:parent",
              "field_operational_presence:parents_all" : "field_operational_presence:parents_all",
              "field_district:parent" : "field_district:parent",
              "field_district:parents_all" : "field_district:parents_all"
            }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_acronym" : true,
              "field_ass_email" : true,
              "field_ass_telephone" : true,
              "field_assess_name" : true,
              "field_email" : true,
              "field_head_of_org_name" : true,
              "field_organization_name" : true,
              "field_telephone" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_acronym" : true,
              "field_ass_email" : true,
              "field_ass_telephone" : true,
              "field_assess_name" : true,
              "field_email" : true,
              "field_head_of_org_name" : true,
              "field_organization_name" : true,
              "field_telephone" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_acronym" : true,
              "field_ass_email" : true,
              "field_ass_telephone" : true,
              "field_assess_name" : true,
              "field_email" : true,
              "field_head_of_org_name" : true,
              "field_organization_name" : true,
              "field_telephone" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_acronym" : true,
              "field_ass_email" : true,
              "field_ass_telephone" : true,
              "field_assess_name" : true,
              "field_email" : true,
              "field_head_of_org_name" : true,
              "field_organization_name" : true,
              "field_telephone" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function mira_district_org_default_search_api_server() {
  $items = array();
  $items['jar_server'] = entity_import('search_api_server', '{
    "name" : "JAR Server",
    "machine_name" : "jar_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "indexes" : { "jar_index" : {
          "nid" : {
            "table" : "search_api_db_jar_index",
            "column" : "nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_jar_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_jar_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "url" : {
            "table" : "search_api_db_jar_index",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "field_acronym" : {
            "table" : "search_api_db_jar_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_ass_email" : {
            "table" : "search_api_db_jar_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_ass_telephone" : {
            "table" : "search_api_db_jar_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_assess_name" : {
            "table" : "search_api_db_jar_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_email" : {
            "table" : "search_api_db_jar_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_head_of_org_name" : {
            "table" : "search_api_db_jar_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_operational_presence" : {
            "table" : "search_api_db_jar_index_field_operational_presence",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_organization_name" : {
            "table" : "search_api_db_jar_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_telephone" : {
            "table" : "search_api_db_jar_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_jar_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_jar_index",
            "column" : "status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_jar_index",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_access_node" : {
            "table" : "search_api_db_jar_index_search_api_access_node",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_operational_presence:parent" : {
            "table" : "search_api_db_jar_index_field_operational_presence_parent",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_operational_presence:field_wkt:geom" : {
            "table" : "search_api_db_jar_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_operational_presence:field_wkt:lat" : {
            "table" : "search_api_db_jar_index_field_operational_presence_field_wkt_l",
            "column" : "value",
            "type" : "list\\u003Cdecimal\\u003E",
            "boost" : "1.0"
          },
          "field_operational_presence:field_wkt:lon" : {
            "table" : "search_api_db_jar_index_field_operational_presence_field_wkt_1",
            "column" : "value",
            "type" : "list\\u003Cdecimal\\u003E",
            "boost" : "1.0"
          },
          "field_no_of_vehicles" : {
            "table" : "search_api_db_jar_index",
            "column" : "field_no_of_vehicles",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_no_pdas_android" : {
            "table" : "search_api_db_jar_index",
            "column" : "field_no_pdas_android",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_office_type" : {
            "table" : "search_api_db_jar_index",
            "column" : "field_office_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_organization" : {
            "table" : "search_api_db_jar_index",
            "column" : "field_organization",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_staf_male" : {
            "table" : "search_api_db_jar_index",
            "column" : "field_staf_male",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_staff_female" : {
            "table" : "search_api_db_jar_index",
            "column" : "field_staff_female",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_office_wkt:geom" : {
            "table" : "search_api_db_jar_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_office_wkt:lat" : {
            "table" : "search_api_db_jar_index",
            "column" : "field_office_wkt_lat",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_office_wkt:lon" : {
            "table" : "search_api_db_jar_index",
            "column" : "field_office_wkt_lon",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_district" : {
            "table" : "search_api_db_jar_index_field_district",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
