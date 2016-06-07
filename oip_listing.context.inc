<?php
/**
 * @file
 * oip_listing.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function oip_listing_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'listing_flyer';
  $context->description = 'Any display of flyer listing';
  $context->tag = 'Listing flyers';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'listing_flyer_classic' => 'listing_flyer_classic',
        'listing_flyer_classic:page' => 'listing_flyer_classic:page',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'printable_flyers',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Any display of flyer listing');
  t('Listing flyers');
  $export['listing_flyer'] = $context;

  return $export;
}
