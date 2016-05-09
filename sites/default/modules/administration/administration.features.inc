<?php
/**
 * @file
 * administration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function administration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function administration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function administration_default_search_api_index() {
  $items = array();
  $items['default_index'] = entity_import('search_api_index', '{
    "name" : "Default index",
    "machine_name" : "default_index",
    "description" : null,
    "server" : "default_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "type" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "status" : { "type" : "boolean" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "field_alternate_title" : { "type" : "text", "boost" : "5.0" },
        "search_api_language" : { "type" : "string" },
        "search_api_viewed" : { "type" : "text" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "body:value" : { "type" : "text" },
        "field_alternate_body:value" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : { "news" : "news", "page" : "page" } }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full_zorga" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "-50",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_alternate_title" : true,
              "body:value" : true,
              "field_alternate_body:value" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "-49",
          "settings" : { "fields" : {
              "title" : true,
              "field_alternate_title" : true,
              "body:value" : true,
              "field_alternate_body:value" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "-48",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_alternate_title" : true,
              "body:value" : true,
              "field_alternate_body:value" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "-47",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_alternate_title" : true,
              "body:value" : true,
              "field_alternate_body:value" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function administration_default_search_api_server() {
  $items = array();
  $items['default_server'] = entity_import('search_api_server', '{
    "name" : "Default server",
    "machine_name" : "default_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "indexes" : { "default_index" : {
          "type" : {
            "table" : "search_api_db_default_index_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_default_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "status" : {
            "table" : "search_api_db_default_index_status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_default_index_author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_alternate_title" : {
            "table" : "search_api_db_default_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_default_index_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_viewed" : {
            "table" : "search_api_db_default_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_access_node" : {
            "table" : "search_api_db_default_index_search_api_access_node",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_default_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_alternate_body:value" : {
            "table" : "search_api_db_default_index_text",
            "type" : "text",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  return $items;
}
