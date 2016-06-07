<?php
/**
 * @file
 * oip_listing.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function oip_listing_default_rules_configuration() {
  $items = array();
  $items['rules_email_statistics_on_1st_day_of_month'] = entity_import('rules_config', '{ "rules_email_statistics_on_1st_day_of_month" : {
      "LABEL" : "Email Statistics on 1st day of month",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : { "cron" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "site:current-date" ], "value" : "first day of this month" } },
        { "OR" : [] },
        { "data_is" : { "data" : [ "site:current-date" ], "value" : "today" } }
      ],
      "DO" : [
        { "php_eval" : { "code" : "\\/\\/ Circulates through all active users, and sends a report for each listing that has had activity\\r\\n\\/\\/ for the prior month. So, this runs the first day of this month (but it can be re-requested) and reports for the prior\\r\\n\\/\\/ six month period (-1 month through -6 months)\\r\\n\\r\\noip_tweaks_send_statisics ();\\r\\n" } }
      ]
    }
  }');
  $items['rules_listing_statistic'] = entity_import('rules_config', '{ "rules_listing_statistic" : {
      "LABEL" : "Listing Statistic",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : { "node_view--listing" : { "bundle" : "listing" } },
      "DO" : [
        { "php_eval" : { "code" : "global $user;\\r\\n$title = [node:title];\\r\\n$time = time();\\r\\n$current_url = \\u0027http:\\/\\/\\u0027 .$_SERVER[\\u0027HTTP_HOST\\u0027] .$_SERVER[\\u0027REQUEST_URI\\u0027];\\r\\n$referrer = $_SERVER[\\u0027HTTP_REFERER\\u0027];\\r\\n$url = strtolower( $current_url);\\r\\n$pos = strpos( $url,\\u0027flyer\\u0027);\\r\\n\\r\\nif ( $pos === FALSE) {\\r\\n   $view_type = \\u0027Listing\\u0027;\\r\\n} else {\\r\\n   $view_type = \\u0027Flyer\\u0027;\\r\\n}\\r\\n     \\/\\/-------------------------------------------------------------\\u003E Add the node now\\r\\n     \\/\\/ entity_create replaces the procedural steps in the first example of\\r\\n     \\/\\/ creating a new object $node and setting its \\u0027type\\u0027 and uid property\\r\\n     $values = array(\\r\\n        \\u0027type\\u0027 =\\u003E \\u0027listing_statistics\\u0027,\\r\\n        \\u0027uid\\u0027 =\\u003E $user-\\u003Euid,\\r\\n        \\u0027status\\u0027 =\\u003E 1,                  \\/\\/ Published\\r\\n        \\u0027comment\\u0027 =\\u003E 1,            \\/\\/ Allow comments\\r\\n        \\u0027promote\\u0027 =\\u003E 0,             \\/\\/ not promoted to front page\\r\\n     );\\r\\n     $entity = entity_create(\\u0027node\\u0027, $values);\\r\\n\\r\\n     \\/\\/ The entity is now created, but we have not yet simplified use of it.\\r\\n     \\/\\/ Now create an entity_metadata_wrapper around the new node entity to make getting and setting values easier\\r\\n     $ewrapper = entity_metadata_wrapper(\\u0027node\\u0027, $entity);\\r\\n\\r\\n     $ewrapper-\\u003Etitle-\\u003Eset(\\u0022$title\\u0022);                                         \\/\\/ Title is the listing number\\r\\n     $ewrapper-\\u003Efield_date-\\u003Eset(\\u0022$time\\u0022);                             \\/\\/ Date is \\u0022now\\u0022\\r\\n     $ewrapper-\\u003Efield_view_type-\\u003Eset(\\u0022$view_type\\u0022);           \\/\\/ View Type = \\u0022listing\\u0022\\r\\n     $ewrapper-\\u003Efield_referrer-\\u003Eset(\\u0022$referrer\\u0022);           \\/\\/ Referring URL\\r\\n\\r\\n     \\/\\/ Save the entity now\\r\\n     $ewrapper-\\u003Esave();" } }
      ]
    }
  }');
  return $items;
}
