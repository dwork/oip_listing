<?php
/**
 * @file
 * oip_listing.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function oip_listing_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'BSF',
    'description' => 'Broker Specific Feed',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1650906d-c4e3-48db-8f12-32ce48a8241a',
    'vocabulary_machine_name' => 'mls_type',
  );
  $terms[] = array(
    'name' => 'MultiFamily',
    'description' => 'Multiple Family, Duplex, Apartments',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2325f61c-ac7e-49be-a616-256bdb20a146',
    'vocabulary_machine_name' => 'property_type',
  );
  $terms[] = array(
    'name' => 'IDX',
    'description' => 'Displays IDX data on OIP hosted website',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '59baa9f3-fc9b-4978-a62b-7323bf1dc983',
    'vocabulary_machine_name' => 'mls_type',
  );
  $terms[] = array(
    'name' => 'Residential',
    'description' => 'Residential',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '61ef7fdb-7738-4fa4-ae86-85de99975187',
    'vocabulary_machine_name' => 'property_type',
  );
  $terms[] = array(
    'name' => 'Land',
    'description' => 'Lots and Land',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '82fedd62-162e-40f9-8408-248e755d2d96',
    'vocabulary_machine_name' => 'property_type',
  );
  $terms[] = array(
    'name' => 'Rental',
    'description' => 'Rental',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8cdd543b-8fcd-4c13-a25b-d83fcda9eed0',
    'vocabulary_machine_name' => 'property_type',
  );
  $terms[] = array(
    'name' => 'Flyer1',
    'description' => 'New flyer, main pic + first three from the gallery.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8f2c1bde-cdb9-4789-bc45-7c0ac88384b3',
    'vocabulary_machine_name' => 'flyers',
    'field_flyer_label' => array(
      'und' => array(
        0 => array(
          'value' => 'flyer1',
          'format' => NULL,
          'safe_value' => 'flyer1',
        ),
      ),
    ),
    'field_flyer_image' => array(),
    'field_required_images' => array(
      'und' => array(
        0 => array(
          'value' => 4,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Classic Flyer',
    'description' => 'Classic Flyer, displayed through the view "Listing - Classic Flyer" and on the URL /flyer/classic/{listing title}',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a7e5fe57-f8df-47c2-8f74-9472b5f8f244',
    'vocabulary_machine_name' => 'flyers',
    'field_flyer_label' => array(
      'und' => array(
        0 => array(
          'value' => 'classic',
          'format' => NULL,
          'safe_value' => 'classic',
        ),
      ),
    ),
    'field_flyer_image' => array(),
    'field_required_images' => array(),
  );
  $terms[] = array(
    'name' => 'Commercial Lease',
    'description' => 'Commercial Lease',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd4aa5b3e-c105-4c0e-9f62-3f45d1de76bc',
    'vocabulary_machine_name' => 'property_type',
  );
  $terms[] = array(
    'name' => 'Commercial Sale',
    'description' => 'Commerical/Industrial',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e618fb83-90e1-4a0b-8e5b-99939c0c891b',
    'vocabulary_machine_name' => 'property_type',
  );
  $terms[] = array(
    'name' => 'BSS',
    'description' => 'Broker Specific Feed (Solds)',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ed16803e-88ea-4834-adb4-aca905415d6f',
    'vocabulary_machine_name' => 'mls_type',
  );
  $terms[] = array(
    'name' => 'BSP',
    'description' => 'Broker Specific Feed (Pendings)',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'fc9bf002-4726-4857-af19-2819b346666d',
    'vocabulary_machine_name' => 'mls_type',
  );
  return $terms;
}
