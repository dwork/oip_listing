<?php
/**
 * @file
 * oip_listing.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function oip_listing_user_default_roles() {
  $roles = array();

  // Exported role: Authenticated Visitor.
  $roles['Authenticated Visitor'] = array(
    'name' => 'Authenticated Visitor',
    'weight' => 3,
  );

  return $roles;
}
