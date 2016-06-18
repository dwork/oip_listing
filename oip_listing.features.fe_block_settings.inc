<?php
/**
 * @file
 * oip_listing.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function oip_listing_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-mortgage_calculator'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'mortgage_calculator',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<?php
  $match = TRUE;

  if (arg(0) == \'users\' or arg(0) == \'user\') {         // same as "users/*"
    $match = FALSE;
  }

 if (arg(0)==\'admin\') {         // same as "admin/*"
    $match = FALSE;
  }

  if (arg(0) == \'flyer\') {         // same as "flyer/*"
    $match = FALSE;
  }

  if (arg(0) == \'utility-listing-view\') {        
    $match = FALSE;
  }

  if (arg(0) == \'rmls-agent-report\') {
     $match = FALSE;
  }

  if (isset($_SERVER[\'REDIRECT_QUERY_STRING\'])) {
     $dqs = $_SERVER[\'REDIRECT_QUERY_STRING\'];
     if (strlen($dqs) > 0) {
        $match = FALSE;
     }
  }
  
  return $match;
?>',
    'roles' => array(),
    'themes' => array(
      'oip' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'oip',
        'weight' => -20,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Mortgage Calculator',
    'visibility' => 2,
  );

  $export['delta_blocks-action-links'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'action-links',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'oip' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oip',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-branding'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'branding',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'oip' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oip',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-breadcrumb'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'breadcrumb',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'oip' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oip',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-feed-icons'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'feed-icons',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'oip' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oip',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-logo'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'logo',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'oip' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oip',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-messages'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'messages',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'oip' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oip',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-page-title'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'page-title',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'oip' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oip',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-site-name'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'site-name',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'oip' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oip',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-site-slogan'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'site-slogan',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'oip' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oip',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-tabs'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'tabs',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'oip' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oip',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['nice_menus-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'nice_menus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'oip' => array(
        'region' => 'menu',
        'status' => 1,
        'theme' => 'oip',
        'weight' => -10,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-featured_listing-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'featured_listing-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>
listings/*
listings',
    'roles' => array(),
    'themes' => array(
      'oip' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oip',
        'weight' => -25,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-featured_listing-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'featured_listing-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>
listings/*
listings',
    'roles' => array(),
    'themes' => array(
      'oip' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'oip',
        'weight' => -26,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
