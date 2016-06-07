<?php
/**
 * @file
 * oip_listing.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function oip_listing_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'agent_information-block-fields';
  $ds_vd->label = 'Agent_information: Block (Fields)';
  $export['agent_information-block-fields'] = $ds_vd;

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'agent_information-block_1-fields';
  $ds_vd->label = 'Agent_information: Co-Agent Block (Fields)';
  $export['agent_information-block_1-fields'] = $ds_vd;

  return $export;
}
