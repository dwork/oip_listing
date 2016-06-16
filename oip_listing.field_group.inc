<?php
/**
 * @file
 * oip_listing.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function oip_listing_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buildinginfo|node|listing|form';
  $field_group->group_name = 'group_buildinginfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dwelling',
    'weight' => '29',
    'children' => array(
      0 => 'field_baths',
      1 => 'field_beds',
      2 => 'field_exteriordescription',
      3 => 'field_fireplacedesc',
      4 => 'field_fireplaces',
      5 => 'field_garagespaces',
      6 => 'field_garagetype',
      7 => 'field_levels',
      8 => 'field_numberunits',
      9 => 'field_roof',
      10 => 'field_sewer',
      11 => 'field_sqft',
      12 => 'field_style',
      13 => 'field_water',
      14 => 'field_yearbuilt',
      15 => 'field_yearbuiltmod',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-buildinginfo field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_buildinginfo|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coding|node|listing|default';
  $field_group->group_name = 'group_coding';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Coding',
    'weight' => '47',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-coding field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_coding|node|listing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coding|node|listing|form';
  $field_group->group_name = 'group_coding';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Coding',
    'weight' => '8',
    'children' => array(
      0 => 'field_colistingagentid',
      1 => 'field_listingagentid',
      2 => 'field_mlsno',
      3 => 'field_offid',
      4 => 'field_proptype',
      5 => 'field_saleagentid',
      6 => 'field_source',
      7 => 'field_status',
      8 => 'field_propertytype',
      9 => 'field_expiredate',
      10 => 'field_listdate',
      11 => 'field_offmarketdate',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-coding field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_coding|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features|node|listing|form';
  $field_group->group_name = 'group_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Features',
    'weight' => '35',
    'children' => array(
      0 => 'field_accessibility',
      1 => 'field_appliances',
      2 => 'field_basement',
      3 => 'field_construction',
      4 => 'field_cooling',
      5 => 'field_diningroom',
      6 => 'field_exterior',
      7 => 'field_familyroom',
      8 => 'field_fuel',
      9 => 'field_heat',
      10 => 'field_hotwater',
      11 => 'field_interior',
      12 => 'field_livingroom',
      13 => 'field_present_use',
      14 => 'field_structures',
      15 => 'field_utilities',
      16 => 'field_zoning',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-features field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_features|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_financing|node|listing|form';
  $field_group->group_name = 'group_financing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Financing',
    'weight' => '22',
    'children' => array(
      0 => 'field_listprice',
      1 => 'field_maxprice',
      2 => 'field_minprice',
      3 => 'field_pricetype',
      4 => 'field_shortsale',
      5 => 'field_taxes',
      6 => 'field_taxid',
      7 => 'field_terms',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-financing field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_financing|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landinfo|node|listing|form';
  $field_group->group_name = 'group_landinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Land Info',
    'weight' => '30',
    'children' => array(
      0 => 'field_acreage',
      1 => 'field_lotsize',
      2 => 'field_numberlots',
      3 => 'field_contour',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-landinfo field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_landinfo|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|listing|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '9',
    'children' => array(
      0 => 'field_address',
      1 => 'field_city',
      2 => 'field_county',
      3 => 'field_directions',
      4 => 'field_geodata',
      5 => 'field_state',
      6 => 'field_zipcode',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-location field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_neighborhood|node|listing|form';
  $field_group->group_name = 'group_neighborhood';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Neighborhood',
    'weight' => '31',
    'children' => array(
      0 => 'field_area',
      1 => 'field_neighborhood',
      2 => 'field_schoole',
      3 => 'field_schoolh',
      4 => 'field_schoolj',
      5 => 'field_subdivision',
      6 => 'field_view',
      7 => 'field_waterfront',
      8 => 'field_waterfrontname',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-neighborhood field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_neighborhood|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_salesaids|node|listing|form';
  $field_group->group_name = 'group_salesaids';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sales Aids',
    'weight' => '32',
    'children' => array(
      0 => 'field_internetaddress',
      1 => 'field_slideshow',
      2 => 'field_videotour',
      3 => 'field_virtualtour',
      4 => 'field_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-salesaids field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_salesaids|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_soldinfo|node|listing|form';
  $field_group->group_name = 'group_soldinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sold Info',
    'weight' => '33',
    'children' => array(
      0 => 'field_solddate',
      1 => 'field_soldprice',
      2 => 'field_soldterms',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-soldinfo field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_soldinfo|node|listing|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Coding');
  t('Dwelling');
  t('Features');
  t('Financing');
  t('Land Info');
  t('Location');
  t('Neighborhood');
  t('Sales Aids');
  t('Sold Info');

  return $field_groups;
}
