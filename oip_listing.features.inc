<?php
/**
 * @file
 * oip_listing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oip_listing_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "css_injector" && $api == "css_injector_rules") {
    return array("version" => "1");
  }
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "ds_extras" && $api == "ds_extras") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function oip_listing_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function oip_listing_flag_default_flags() {
  $flags = array();
  // Exported flag: "Listing Flag".
  $flags['listings'] = array(
    'entity_type' => 'node',
    'title' => 'Listing Flag',
    'global' => 0,
    'types' => array(
      0 => 'listing',
    ),
    'flag_short' => 'Save',
    'flag_long' => 'Click to bookmark this listing',
    'flag_message' => 'This listing has been saved',
    'unflag_short' => 'UnSave',
    'unflag_long' => 'Click to remove the bookmark for this listing',
    'unflag_message' => 'This listing has been removed from your saved list',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
      'classic_flyer' => 0,
      'listing_flyer1' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'oip_listing',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function oip_listing_node_info() {
  $items = array(
    'documentation' => array(
      'name' => t('Documentation'),
      'base' => 'node_content',
      'description' => t('System Documentation, available based on role permissions (admin)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hotsheet' => array(
      'name' => t('Hotsheet'),
      'base' => 'node_content',
      'description' => t('Contains a record of the hot sheet maintenance, whether or not the email was successfully sent.'),
      'has_title' => '1',
      'title_label' => t('Hotsheet'),
      'help' => '',
    ),
    'listing' => array(
      'name' => t('Listing'),
      'base' => 'node_content',
      'description' => t('Real Estate Listing'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'listing_statistics' => array(
      'name' => t('Listing Statistics'),
      'base' => 'node_content',
      'description' => t('Record of page views by day by listing or printable flyer. Listing views are accumulated using rule "Listing Statistics", flyer views when the flyer URL is displayed. If (1) the view is from an admin, it is not counted. If (2) the view is from the listing agent, it is not counted.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'open_house' => array(
      'name' => t('Open House'),
      'base' => 'node_content',
      'description' => t('File of open houses (paid members only)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
