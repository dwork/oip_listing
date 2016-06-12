<?php
/**
 * @file
 * oip_listing.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function oip_listing_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-company-field_address'
  $field_instances['node-company-field_address'] = array(
    'bundle' => 'company',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Street Address',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address',
    'label' => 'Address 1',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-company-field_address2'
  $field_instances['node-company-field_address2'] = array(
    'bundle' => 'company',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address2',
    'label' => 'Address 2',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-company-field_agent_count'
  $field_instances['node-company-field_agent_count'] = array(
    'bundle' => 'company',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_agent_count',
    'label' => 'Agent Count',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-company-field_city'
  $field_instances['node-company-field_city'] = array(
    'bundle' => 'company',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_city',
    'label' => 'City',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-company-field_company_logo'
  $field_instances['node-company-field_company_logo'] = array(
    'bundle' => 'company',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_company_logo',
    'label' => 'Company Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '200x100',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-company-field_companytype'
  $field_instances['node-company-field_companytype'] = array(
    'bundle' => 'company',
    'default_value' => array(
      0 => array(
        'tid' => 16,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_companytype',
    'label' => 'Company Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-company-field_contact'
  $field_instances['node-company-field_contact'] = array(
    'bundle' => 'company',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contact',
    'label' => 'Contact/Principal Broker',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-company-field_email'
  $field_instances['node-company-field_email'] = array(
    'bundle' => 'company',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Company email address',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'Company Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-company-field_fax'
  $field_instances['node-company-field_fax'] = array(
    'bundle' => 'company',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'cck_phone',
        'settings' => array(),
        'type' => 'global_phone_number',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fax',
    'label' => 'Fax',
    'required' => 0,
    'settings' => array(
      'all_country_codes' => 0,
      'country_code_position' => 'before',
      'country_codes' => array(
        'country_selection' => array(
          'ad' => 0,
          'ae' => 0,
          'af' => 0,
          'ag' => 0,
          'ai' => 0,
          'al' => 0,
          'am' => 0,
          'an' => 0,
          'ao' => 0,
          'ar' => 0,
          'as' => 0,
          'at' => 0,
          'au' => 0,
          'aw' => 0,
          'az' => 0,
          'ba' => 0,
          'bb' => 0,
          'bd' => 0,
          'be' => 0,
          'bf' => 0,
          'bg' => 0,
          'bh' => 0,
          'bi' => 0,
          'bj' => 0,
          'bm' => 0,
          'bn' => 0,
          'bo' => 0,
          'br' => 0,
          'bs' => 0,
          'bt' => 0,
          'bw' => 0,
          'by' => 0,
          'bz' => 0,
          'ca' => 0,
          'cc' => 0,
          'cd' => 0,
          'cf' => 0,
          'cg' => 0,
          'ch' => 0,
          'ci' => 0,
          'ck' => 0,
          'cl' => 0,
          'cm' => 0,
          'cn' => 0,
          'co' => 0,
          'cr' => 0,
          'cu' => 0,
          'cv' => 0,
          'cx' => 0,
          'cy' => 0,
          'cz' => 0,
          'de' => 0,
          'dj' => 0,
          'dk' => 0,
          'dm' => 0,
          'do' => 0,
          'dz' => 0,
          'ec' => 0,
          'ee' => 0,
          'eg' => 0,
          'er' => 0,
          'es' => 0,
          'et' => 0,
          'fi' => 0,
          'fj' => 0,
          'fk' => 0,
          'fm' => 0,
          'fo' => 0,
          'fr' => 0,
          'ga' => 0,
          'gb' => 0,
          'gd' => 0,
          'ge' => 0,
          'gf' => 0,
          'gh' => 0,
          'gi' => 0,
          'gl' => 0,
          'gm' => 0,
          'gn' => 0,
          'gp' => 0,
          'gq' => 0,
          'gr' => 0,
          'gt' => 0,
          'gu' => 0,
          'gw' => 0,
          'gy' => 0,
          'hk' => 0,
          'hn' => 0,
          'hr' => 0,
          'ht' => 0,
          'hu' => 0,
          'id' => 0,
          'ie' => 0,
          'il' => 0,
          'in' => 0,
          'io' => 0,
          'iq' => 0,
          'ir' => 0,
          'is' => 0,
          'it' => 0,
          'jm' => 0,
          'jo' => 0,
          'jp' => 0,
          'ke' => 0,
          'kg' => 0,
          'kh' => 0,
          'ki' => 0,
          'km' => 0,
          'kn' => 0,
          'kp' => 0,
          'kr' => 0,
          'kw' => 0,
          'ky' => 0,
          'kz' => 0,
          'la' => 0,
          'lb' => 0,
          'lc' => 0,
          'li' => 0,
          'lk' => 0,
          'lr' => 0,
          'ls' => 0,
          'lt' => 0,
          'lu' => 0,
          'lv' => 0,
          'ly' => 0,
          'ma' => 0,
          'mc' => 0,
          'md' => 0,
          'me' => 0,
          'mg' => 0,
          'mh' => 0,
          'mk' => 0,
          'ml' => 0,
          'mm' => 0,
          'mn' => 0,
          'mo' => 0,
          'mp' => 0,
          'mq' => 0,
          'mr' => 0,
          'ms' => 0,
          'mt' => 0,
          'mu' => 0,
          'mv' => 0,
          'mw' => 0,
          'mx' => 0,
          'my' => 0,
          'mz' => 0,
          'na' => 0,
          'nc' => 0,
          'ne' => 0,
          'nf' => 0,
          'ng' => 0,
          'ni' => 0,
          'nl' => 0,
          'no' => 0,
          'np' => 0,
          'nr' => 0,
          'nu' => 0,
          'nz' => 0,
          'om' => 0,
          'pa' => 0,
          'pe' => 0,
          'pf' => 0,
          'pg' => 0,
          'ph' => 0,
          'pk' => 0,
          'pl' => 0,
          'pm' => 0,
          'pr' => 0,
          'ps' => 0,
          'pt' => 0,
          'pw' => 0,
          'py' => 0,
          'qa' => 0,
          'ro' => 0,
          'rs' => 0,
          'ru' => 0,
          'rw' => 0,
          'sa' => 0,
          'sb' => 0,
          'sc' => 0,
          'sd' => 0,
          'se' => 0,
          'sg' => 0,
          'sh' => 0,
          'si' => 0,
          'sk' => 0,
          'sl' => 0,
          'sm' => 0,
          'sn' => 0,
          'so' => 0,
          'sr' => 0,
          'ss' => 0,
          'st' => 0,
          'sv' => 0,
          'sy' => 0,
          'sz' => 0,
          'tc' => 0,
          'td' => 0,
          'tg' => 0,
          'th' => 0,
          'tj' => 0,
          'tk' => 0,
          'tm' => 0,
          'tn' => 0,
          'to' => 0,
          'tp' => 0,
          'tr' => 0,
          'tt' => 0,
          'tv' => 0,
          'tw' => 0,
          'tz' => 0,
          'ua' => 0,
          'ug' => 0,
          'us' => 'us',
          'uy' => 0,
          'uz' => 0,
          'va' => 0,
          'vc' => 0,
          've' => 0,
          'vg' => 0,
          'vi' => 0,
          'vn' => 0,
          'vu' => 0,
          'wf' => 0,
          'ws' => 0,
          'ye' => 0,
          'yt' => 0,
          'za' => 0,
          'zm' => 0,
          'zw' => 0,
        ),
        'hide_single_cc' => 1,
      ),
      'default_country' => 'us',
      'enable_country_level_validation' => 0,
      'enable_default_country' => 1,
      'enable_extension' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'cck_phone',
      'settings' => array(
        'size' => 15,
      ),
      'type' => 'phone_number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-company-field_listingstatus'
  $field_instances['node-company-field_listingstatus'] = array(
    'bundle' => 'company',
    'default_value' => array(
      0 => array(
        'value' => 'ACT',
      ),
    ),
    'deleted' => 0,
    'description' => 'Determines whether or not listings are downloaded using BSF. All agencies are set up with BSF, BSS (Sold) and BSP (Pending) credentials',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listingstatus',
    'label' => 'Listing Status',
    'readmore_behaviour' => 'default',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-company-field_mls_type'
  $field_instances['node-company-field_mls_type'] = array(
    'bundle' => 'company',
    'default_value' => array(
      0 => array(
        'tid' => 25,
      ),
      1 => array(
        'tid' => 27,
      ),
      2 => array(
        'tid' => 26,
      ),
    ),
    'deleted' => 0,
    'description' => 'Select the MLS Type/Types downloaded for this company. This field is checked on the RMLS agreement when they give permission to OIP to download data via BSF',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mls_type',
    'label' => 'MLS Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-company-field_offid'
  $field_instances['node-company-field_offid'] = array(
    'bundle' => 'company',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_offid',
    'label' => 'Listing Office ID',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 15,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-company-field_phone'
  $field_instances['node-company-field_phone'] = array(
    'bundle' => 'company',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'cck_phone',
        'settings' => array(),
        'type' => 'global_phone_number',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'all_country_codes' => 0,
      'country_code_position' => 'before',
      'country_codes' => array(
        'country_selection' => array(
          'ad' => 0,
          'ae' => 0,
          'af' => 0,
          'ag' => 0,
          'ai' => 0,
          'al' => 0,
          'am' => 0,
          'an' => 0,
          'ao' => 0,
          'ar' => 0,
          'as' => 0,
          'at' => 0,
          'au' => 0,
          'aw' => 0,
          'az' => 0,
          'ba' => 0,
          'bb' => 0,
          'bd' => 0,
          'be' => 0,
          'bf' => 0,
          'bg' => 0,
          'bh' => 0,
          'bi' => 0,
          'bj' => 0,
          'bm' => 0,
          'bn' => 0,
          'bo' => 0,
          'br' => 0,
          'bs' => 0,
          'bt' => 0,
          'bw' => 0,
          'by' => 0,
          'bz' => 0,
          'ca' => 0,
          'cc' => 0,
          'cd' => 0,
          'cf' => 0,
          'cg' => 0,
          'ch' => 0,
          'ci' => 0,
          'ck' => 0,
          'cl' => 0,
          'cm' => 0,
          'cn' => 0,
          'co' => 0,
          'cr' => 0,
          'cu' => 0,
          'cv' => 0,
          'cx' => 0,
          'cy' => 0,
          'cz' => 0,
          'de' => 0,
          'dj' => 0,
          'dk' => 0,
          'dm' => 0,
          'do' => 0,
          'dz' => 0,
          'ec' => 0,
          'ee' => 0,
          'eg' => 0,
          'er' => 0,
          'es' => 0,
          'et' => 0,
          'fi' => 0,
          'fj' => 0,
          'fk' => 0,
          'fm' => 0,
          'fo' => 0,
          'fr' => 0,
          'ga' => 0,
          'gb' => 0,
          'gd' => 0,
          'ge' => 0,
          'gf' => 0,
          'gh' => 0,
          'gi' => 0,
          'gl' => 0,
          'gm' => 0,
          'gn' => 0,
          'gp' => 0,
          'gq' => 0,
          'gr' => 0,
          'gt' => 0,
          'gu' => 0,
          'gw' => 0,
          'gy' => 0,
          'hk' => 0,
          'hn' => 0,
          'hr' => 0,
          'ht' => 0,
          'hu' => 0,
          'id' => 0,
          'ie' => 0,
          'il' => 0,
          'in' => 0,
          'io' => 0,
          'iq' => 0,
          'ir' => 0,
          'is' => 0,
          'it' => 0,
          'jm' => 0,
          'jo' => 0,
          'jp' => 0,
          'ke' => 0,
          'kg' => 0,
          'kh' => 0,
          'ki' => 0,
          'km' => 0,
          'kn' => 0,
          'kp' => 0,
          'kr' => 0,
          'kw' => 0,
          'ky' => 0,
          'kz' => 0,
          'la' => 0,
          'lb' => 0,
          'lc' => 0,
          'li' => 0,
          'lk' => 0,
          'lr' => 0,
          'ls' => 0,
          'lt' => 0,
          'lu' => 0,
          'lv' => 0,
          'ly' => 0,
          'ma' => 0,
          'mc' => 0,
          'md' => 0,
          'me' => 0,
          'mg' => 0,
          'mh' => 0,
          'mk' => 0,
          'ml' => 0,
          'mm' => 0,
          'mn' => 0,
          'mo' => 0,
          'mp' => 0,
          'mq' => 0,
          'mr' => 0,
          'ms' => 0,
          'mt' => 0,
          'mu' => 0,
          'mv' => 0,
          'mw' => 0,
          'mx' => 0,
          'my' => 0,
          'mz' => 0,
          'na' => 0,
          'nc' => 0,
          'ne' => 0,
          'nf' => 0,
          'ng' => 0,
          'ni' => 0,
          'nl' => 0,
          'no' => 0,
          'np' => 0,
          'nr' => 0,
          'nu' => 0,
          'nz' => 0,
          'om' => 0,
          'pa' => 0,
          'pe' => 0,
          'pf' => 0,
          'pg' => 0,
          'ph' => 0,
          'pk' => 0,
          'pl' => 0,
          'pm' => 0,
          'pr' => 0,
          'ps' => 0,
          'pt' => 0,
          'pw' => 0,
          'py' => 0,
          'qa' => 0,
          'ro' => 0,
          'rs' => 0,
          'ru' => 0,
          'rw' => 0,
          'sa' => 0,
          'sb' => 0,
          'sc' => 0,
          'sd' => 0,
          'se' => 0,
          'sg' => 0,
          'sh' => 0,
          'si' => 0,
          'sk' => 0,
          'sl' => 0,
          'sm' => 0,
          'sn' => 0,
          'so' => 0,
          'sr' => 0,
          'ss' => 0,
          'st' => 0,
          'sv' => 0,
          'sy' => 0,
          'sz' => 0,
          'tc' => 0,
          'td' => 0,
          'tg' => 0,
          'th' => 0,
          'tj' => 0,
          'tk' => 0,
          'tm' => 0,
          'tn' => 0,
          'to' => 0,
          'tp' => 0,
          'tr' => 0,
          'tt' => 0,
          'tv' => 0,
          'tw' => 0,
          'tz' => 0,
          'ua' => 0,
          'ug' => 0,
          'us' => 'us',
          'uy' => 0,
          'uz' => 0,
          'va' => 0,
          'vc' => 0,
          've' => 0,
          'vg' => 0,
          'vi' => 0,
          'vn' => 0,
          'vu' => 0,
          'wf' => 0,
          'ws' => 0,
          'ye' => 0,
          'yt' => 0,
          'za' => 0,
          'zm' => 0,
          'zw' => 0,
        ),
        'hide_single_cc' => 1,
      ),
      'default_country' => 'us',
      'enable_country_level_validation' => 0,
      'enable_default_country' => 1,
      'enable_extension' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'cck_phone',
      'settings' => array(
        'size' => 15,
      ),
      'type' => 'phone_number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-company-field_state'
  $field_instances['node-company-field_state'] = array(
    'bundle' => 'company',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_state',
    'label' => 'State',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 3,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-company-field_tollfree'
  $field_instances['node-company-field_tollfree'] = array(
    'bundle' => 'company',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'cck_phone',
        'settings' => array(),
        'type' => 'global_phone_number',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tollfree',
    'label' => 'Toll Free',
    'required' => 0,
    'settings' => array(
      'all_country_codes' => 0,
      'country_code_position' => 'before',
      'country_codes' => array(
        'country_selection' => array(
          'ad' => 0,
          'ae' => 0,
          'af' => 0,
          'ag' => 0,
          'ai' => 0,
          'al' => 0,
          'am' => 0,
          'an' => 0,
          'ao' => 0,
          'ar' => 0,
          'as' => 0,
          'at' => 0,
          'au' => 0,
          'aw' => 0,
          'az' => 0,
          'ba' => 0,
          'bb' => 0,
          'bd' => 0,
          'be' => 0,
          'bf' => 0,
          'bg' => 0,
          'bh' => 0,
          'bi' => 0,
          'bj' => 0,
          'bm' => 0,
          'bn' => 0,
          'bo' => 0,
          'br' => 0,
          'bs' => 0,
          'bt' => 0,
          'bw' => 0,
          'by' => 0,
          'bz' => 0,
          'ca' => 0,
          'cc' => 0,
          'cd' => 0,
          'cf' => 0,
          'cg' => 0,
          'ch' => 0,
          'ci' => 0,
          'ck' => 0,
          'cl' => 0,
          'cm' => 0,
          'cn' => 0,
          'co' => 0,
          'cr' => 0,
          'cu' => 0,
          'cv' => 0,
          'cx' => 0,
          'cy' => 0,
          'cz' => 0,
          'de' => 0,
          'dj' => 0,
          'dk' => 0,
          'dm' => 0,
          'do' => 0,
          'dz' => 0,
          'ec' => 0,
          'ee' => 0,
          'eg' => 0,
          'er' => 0,
          'es' => 0,
          'et' => 0,
          'fi' => 0,
          'fj' => 0,
          'fk' => 0,
          'fm' => 0,
          'fo' => 0,
          'fr' => 0,
          'ga' => 0,
          'gb' => 0,
          'gd' => 0,
          'ge' => 0,
          'gf' => 0,
          'gh' => 0,
          'gi' => 0,
          'gl' => 0,
          'gm' => 0,
          'gn' => 0,
          'gp' => 0,
          'gq' => 0,
          'gr' => 0,
          'gt' => 0,
          'gu' => 0,
          'gw' => 0,
          'gy' => 0,
          'hk' => 0,
          'hn' => 0,
          'hr' => 0,
          'ht' => 0,
          'hu' => 0,
          'id' => 0,
          'ie' => 0,
          'il' => 0,
          'in' => 0,
          'io' => 0,
          'iq' => 0,
          'ir' => 0,
          'is' => 0,
          'it' => 0,
          'jm' => 0,
          'jo' => 0,
          'jp' => 0,
          'ke' => 0,
          'kg' => 0,
          'kh' => 0,
          'ki' => 0,
          'km' => 0,
          'kn' => 0,
          'kp' => 0,
          'kr' => 0,
          'kw' => 0,
          'ky' => 0,
          'kz' => 0,
          'la' => 0,
          'lb' => 0,
          'lc' => 0,
          'li' => 0,
          'lk' => 0,
          'lr' => 0,
          'ls' => 0,
          'lt' => 0,
          'lu' => 0,
          'lv' => 0,
          'ly' => 0,
          'ma' => 0,
          'mc' => 0,
          'md' => 0,
          'me' => 0,
          'mg' => 0,
          'mh' => 0,
          'mk' => 0,
          'ml' => 0,
          'mm' => 0,
          'mn' => 0,
          'mo' => 0,
          'mp' => 0,
          'mq' => 0,
          'mr' => 0,
          'ms' => 0,
          'mt' => 0,
          'mu' => 0,
          'mv' => 0,
          'mw' => 0,
          'mx' => 0,
          'my' => 0,
          'mz' => 0,
          'na' => 0,
          'nc' => 0,
          'ne' => 0,
          'nf' => 0,
          'ng' => 0,
          'ni' => 0,
          'nl' => 0,
          'no' => 0,
          'np' => 0,
          'nr' => 0,
          'nu' => 0,
          'nz' => 0,
          'om' => 0,
          'pa' => 0,
          'pe' => 0,
          'pf' => 0,
          'pg' => 0,
          'ph' => 0,
          'pk' => 0,
          'pl' => 0,
          'pm' => 0,
          'pr' => 0,
          'ps' => 0,
          'pt' => 0,
          'pw' => 0,
          'py' => 0,
          'qa' => 0,
          'ro' => 0,
          'rs' => 0,
          'ru' => 0,
          'rw' => 0,
          'sa' => 0,
          'sb' => 0,
          'sc' => 0,
          'sd' => 0,
          'se' => 0,
          'sg' => 0,
          'sh' => 0,
          'si' => 0,
          'sk' => 0,
          'sl' => 0,
          'sm' => 0,
          'sn' => 0,
          'so' => 0,
          'sr' => 0,
          'ss' => 0,
          'st' => 0,
          'sv' => 0,
          'sy' => 0,
          'sz' => 0,
          'tc' => 0,
          'td' => 0,
          'tg' => 0,
          'th' => 0,
          'tj' => 0,
          'tk' => 0,
          'tm' => 0,
          'tn' => 0,
          'to' => 0,
          'tp' => 0,
          'tr' => 0,
          'tt' => 0,
          'tv' => 0,
          'tw' => 0,
          'tz' => 0,
          'ua' => 0,
          'ug' => 0,
          'us' => 'us',
          'uy' => 0,
          'uz' => 0,
          'va' => 0,
          'vc' => 0,
          've' => 0,
          'vg' => 0,
          'vi' => 0,
          'vn' => 0,
          'vu' => 0,
          'wf' => 0,
          'ws' => 0,
          'ye' => 0,
          'yt' => 0,
          'za' => 0,
          'zm' => 0,
          'zw' => 0,
        ),
        'hide_single_cc' => 1,
      ),
      'default_country' => 'us',
      'enable_country_level_validation' => 0,
      'enable_default_country' => 1,
      'enable_extension' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'cck_phone',
      'settings' => array(
        'size' => 15,
      ),
      'type' => 'phone_number',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-company-field_website'
  $field_instances['node-company-field_website'] = array(
    'bundle' => 'company',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Company website - enter the full URL (e.g. http://www.yourcompanyname.com)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_website',
    'label' => 'Company Website',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-company-field_zipcode'
  $field_instances['node-company-field_zipcode'] = array(
    'bundle' => 'company',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_zipcode',
    'label' => 'Zip Code',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-documentation-body'
  $field_instances['node-documentation-body'] = array(
    'bundle' => 'documentation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-hotsheet-body'
  $field_instances['node-hotsheet-body'] = array(
    'bundle' => 'hotsheet',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Hotsheet Message',
    'readmore_behaviour' => 'default',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 30,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-listing-body'
  $field_instances['node-listing-body'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your ad exactly as you wish it to appear. If you do not enter an override, the description from the MLS will be displayed instead.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 93,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 98,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 27,
      ),
      'listing_flyer1' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 71,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description Override',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-listing-field_accessibility'
  $field_instances['node-listing-field_accessibility'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 65,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_accessibility',
    'label' => 'Accessibility',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 60,
    ),
  );

  // Exported field_instance: 'node-listing-field_acreage'
  $field_instances['node-listing-field_acreage'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Lot size in acres; this is a searchable field, so it is required. Calculate acres by taking sqft (e.g. 100 x 100 = 1,000 sqft) divided by 43,560 = .02 acres',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 97,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 102,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 36,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 75,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_acreage',
    'label' => 'Acreage',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-listing-field_address'
  $field_instances['node-listing-field_address'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Exact street address (e.g. 555 Main St). Don\'t punctuate abbreviations like Rd or St',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address',
    'label' => 'Street Address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-listing-field_adtitle'
  $field_instances['node-listing-field_adtitle'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The default ad title is constructed using elements of the listing. If you override the default title, it will not be changed with additional MLS uploads.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 116,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 121,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 94,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_adtitle',
    'label' => 'Ad Title Override',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-listing-field_appliances'
  $field_instances['node-listing-field_appliances'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Included kitchen appliances',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 74,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 79,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_appliances',
    'label' => 'Kitchen Appliances',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 74,
    ),
  );

  // Exported field_instance: 'node-listing-field_area'
  $field_instances['node-listing-field_area'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'General area',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 76,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 81,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_area',
    'label' => 'Area',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-listing-field_basement'
  $field_instances['node-listing-field_basement'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Basement and/or foundation type and description',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 66,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_basement',
    'label' => 'Basement/Foundation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 61,
    ),
  );

  // Exported field_instance: 'node-listing-field_baths'
  $field_instances['node-listing-field_baths'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Number of bathrooms. A partial bathroom (e.g. a toilet + sink) may be listed as ".1" or ".5", depending on your MLS rules. For example, 2.5 bathrooms means two full baths (toilet, sink and shower/tub) and a partial bathroom.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 95,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 100,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 9,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 73,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_baths',
    'label' => 'Baths',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-listing-field_beds'
  $field_instances['node-listing-field_beds'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Number of beds. A partial bedroom might indicate a "potential" bedroom, or room without a closet. MLS rules may determine how you report this type of extra room.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 94,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 15,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 72,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_beds',
    'label' => 'Beds',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-listing-field_city'
  $field_instances['node-listing-field_city'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_city',
    'label' => 'City',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-listing-field_colistingagentid'
  $field_instances['node-listing-field_colistingagentid'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 30,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_colistingagentid',
    'label' => 'CoListing Agent',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-listing-field_construction'
  $field_instances['node-listing-field_construction'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Type of construction',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 62,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 67,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_construction',
    'label' => 'Construction',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 62,
    ),
  );

  // Exported field_instance: 'node-listing-field_contour'
  $field_instances['node-listing-field_contour'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Contour of the land (rolling hills, flat, etc.)',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 130,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contour',
    'label' => 'Contour',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-listing-field_cooling'
  $field_instances['node-listing-field_cooling'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Type of cooling system, if any',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 63,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 68,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cooling',
    'label' => 'Cooling',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 63,
    ),
  );

  // Exported field_instance: 'node-listing-field_county'
  $field_instances['node-listing-field_county'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 119,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 124,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 97,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_county',
    'label' => 'County',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 30,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-listing-field_diningroom'
  $field_instances['node-listing-field_diningroom'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Dining Room features',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 65,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 69,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_diningroom',
    'label' => 'Dining Room',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 66,
    ),
  );

  // Exported field_instance: 'node-listing-field_directions'
  $field_instances['node-listing-field_directions'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_directions',
    'label' => 'Directions',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-listing-field_expiredate'
  $field_instances['node-listing-field_expiredate'] = array(
    'bundle' => 'listing',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 122,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 127,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 100,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 100,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_expiredate',
    'label' => 'Expiration Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-listing-field_exterior'
  $field_instances['node-listing-field_exterior'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Exterior features',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 66,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 71,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_exterior',
    'label' => 'Exterior',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 68,
    ),
  );

  // Exported field_instance: 'node-listing-field_exteriordescription'
  $field_instances['node-listing-field_exteriordescription'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Description of the dwelling exterior',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 67,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 72,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_exteriordescription',
    'label' => 'Exterior Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-listing-field_familyroom'
  $field_instances['node-listing-field_familyroom'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Family Room features',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 68,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 73,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_familyroom',
    'label' => 'Family Room',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 69,
    ),
  );

  // Exported field_instance: 'node-listing-field_fireplacedesc'
  $field_instances['node-listing-field_fireplacedesc'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Description of fireplace(s)',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 69,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 74,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fireplacedesc',
    'label' => 'Fireplace Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-listing-field_fireplaces'
  $field_instances['node-listing-field_fireplaces'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fireplaces',
    'label' => 'Fireplaces',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-listing-field_flyer'
  $field_instances['node-listing-field_flyer'] = array(
    'bundle' => 'listing',
    'default_value' => array(
      0 => array(
        'tid' => 22,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 133,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_flyer',
    'label' => 'Printable Flyer',
    'readmore_behaviour' => 'default',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 79,
    ),
  );

  // Exported field_instance: 'node-listing-field_fuel'
  $field_instances['node-listing-field_fuel'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Description and type of fuel (oil, gas, etc.)',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 70,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 75,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fuel',
    'label' => 'Fuel',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 70,
    ),
  );

  // Exported field_instance: 'node-listing-field_garagespaces'
  $field_instances['node-listing-field_garagespaces'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Number of parking spaces',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 107,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 112,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 12,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 85,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_garagespaces',
    'label' => 'Garage Spaces',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-listing-field_garagetype'
  $field_instances['node-listing-field_garagetype'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Type of garage, if any (e.g. Attached, Detached)',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 106,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 111,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 84,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_garagetype',
    'label' => 'Garage Type',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 30,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-listing-field_geodata'
  $field_instances['node-listing-field_geodata'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Geo Data (Latitude and Longitude)',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 84,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 89,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 62,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_geodata',
    'label' => 'GeoData',
    'required' => 0,
    'settings' => array(
      'local_solr' => array(
        'enabled' => FALSE,
        'lat_field' => 'lat',
        'lng_field' => 'lng',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geofield',
      'settings' => array(
        'openlayers_map' => 'geofield_widget_map',
      ),
      'type' => 'geofield_latlon',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-listing-field_heat'
  $field_instances['node-listing-field_heat'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Heating description',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 71,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 76,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_heat',
    'label' => 'Heating',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 71,
    ),
  );

  // Exported field_instance: 'node-listing-field_hotwater'
  $field_instances['node-listing-field_hotwater'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Description of hot water (gas, electric, tankless, etc.)',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 72,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 77,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hotwater',
    'label' => 'Hot Water',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 72,
    ),
  );

  // Exported field_instance: 'node-listing-field_interior'
  $field_instances['node-listing-field_interior'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Interior features',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 73,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 78,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_interior',
    'label' => 'Interior',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 73,
    ),
  );

  // Exported field_instance: 'node-listing-field_internetaddress'
  $field_instances['node-listing-field_internetaddress'] = array(
    'bundle' => 'listing',
    'default_value' => array(
      0 => array(
        'value' => 'Yes',
      ),
    ),
    'deleted' => 0,
    'description' => 'Indicate whether or not the address will be displayed on the Internet. "Yes" displays the address; "No" suppresses the street address but still identifies city/state and zip code.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 77,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 82,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internetaddress',
    'label' => 'Internet Address',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 61,
    ),
  );

  // Exported field_instance: 'node-listing-field_levels'
  $field_instances['node-listing-field_levels'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Number of levels in the dwelling (e.g. 1 level, 2 levels, 3 levels, etc.)',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_levels',
    'label' => 'Levels',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-listing-field_listdate'
  $field_instances['node-listing-field_listdate'] = array(
    'bundle' => 'listing',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 123,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 128,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 101,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 101,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listdate',
    'label' => 'List Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-listing-field_listingagentid'
  $field_instances['node-listing-field_listingagentid'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter one or more Agent MLS ID\'s to define the listing and co-listing agents.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 115,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 120,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 93,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listingagentid',
    'label' => 'Listing Agent ID',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-listing-field_listprice'
  $field_instances['node-listing-field_listprice'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 121,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 125,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 9,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 98,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listprice',
    'label' => 'List Price',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-listing-field_livingroom'
  $field_instances['node-listing-field_livingroom'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Living Room features',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 75,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 80,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_livingroom',
    'label' => 'Living Room',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 75,
    ),
  );

  // Exported field_instance: 'node-listing-field_lotsize'
  $field_instances['node-listing-field_lotsize'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Descriptive Lot Size (e.g. 100 x 100, or Irregular)',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 103,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 33,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 76,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_lotsize',
    'label' => 'Lot Size',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-listing-field_maxprice'
  $field_instances['node-listing-field_maxprice'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the maximum acceptable price if "Range Pricing" is specified.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 23,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_maxprice',
    'label' => 'Maximum Price',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-listing-field_minprice'
  $field_instances['node-listing-field_minprice'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the minimum acceptable price if "Range Pricing" is specified.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 16,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_minprice',
    'label' => 'Minimum Price',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-listing-field_mlsno'
  $field_instances['node-listing-field_mlsno'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the listing is in the MLS, this is the MLS identifying number.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 101,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 105,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 78,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mlsno',
    'label' => 'MLS #',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-listing-field_neighborhood'
  $field_instances['node-listing-field_neighborhood'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 109,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 113,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 42,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 86,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_neighborhood',
    'label' => 'Neighborhood',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-listing-field_numberlots'
  $field_instances['node-listing-field_numberlots'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 63,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_numberlots',
    'label' => 'Number of Lots',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-listing-field_numberunits'
  $field_instances['node-listing-field_numberunits'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'For multi-family units, this is the total number of units listed ',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 64,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_numberunits',
    'label' => 'Number of Units',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-listing-field_offid'
  $field_instances['node-listing-field_offid'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter one or more Listing Office ID numbers (if known). Multiple listing office ID numbers would be appropriate if the listing is shared between two or more agents at different offices or branch offices.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 113,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 118,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 91,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_offid',
    'label' => 'Listing Office ID',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-listing-field_offmarketdate'
  $field_instances['node-listing-field_offmarketdate'] = array(
    'bundle' => 'listing',
    'deleted' => 0,
    'description' => 'Date this listing went off-market. This will include SOLD, WITHDRAWN and CANCELED status codes.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 132,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_offmarketdate',
    'label' => 'Off Market Date',
    'readmore_behaviour' => 'default',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-listing-field_originaladtitle'
  $field_instances['node-listing-field_originaladtitle'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_originaladtitle',
    'label' => 'Original Ad Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-listing-field_originaldescription'
  $field_instances['node-listing-field_originaldescription'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 118,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 123,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 28,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 96,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_originaldescription',
    'label' => 'Original Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-listing-field_photos'
  $field_instances['node-listing-field_photos'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Number of photos on file for this listing',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 129,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 102,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_photos',
    'label' => 'Photos',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 77,
    ),
  );

  // Exported field_instance: 'node-listing-field_present_use'
  $field_instances['node-listing-field_present_use'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Present use applies mainly to commercial buildings (e.g. Gas Station, Restaurant), although residential property listings could have "Rental" or "Vacant".',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 91,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 95,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 68,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 68,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_present_use',
    'label' => 'Present Use',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 76,
    ),
  );

  // Exported field_instance: 'node-listing-field_pricetype'
  $field_instances['node-listing-field_pricetype'] = array(
    'bundle' => 'listing',
    'default_value' => array(
      0 => array(
        'value' => 'List Price',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pricetype',
    'label' => 'Price Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-listing-field_propertytype'
  $field_instances['node-listing-field_propertytype'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 120,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 126,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_propertytype',
    'label' => 'Property Type',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 30,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-listing-field_proptype'
  $field_instances['node-listing-field_proptype'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 88,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 92,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 65,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 65,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_proptype',
    'label' => 'Property Category',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-listing-field_roof'
  $field_instances['node-listing-field_roof'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Roof type and description',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 79,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 83,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_roof',
    'label' => 'Roof',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-listing-field_rotatelisting'
  $field_instances['node-listing-field_rotatelisting'] = array(
    'bundle' => 'listing',
    'default_value' => array(
      0 => array(
        'value' => 'No',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 131,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rotatelisting',
    'label' => 'Rotate',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 78,
    ),
  );

  // Exported field_instance: 'node-listing-field_saleagentid'
  $field_instances['node-listing-field_saleagentid'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter one or more Agent MLS ID numbers that tie this listing to the selling agent.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 114,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 119,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 92,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_saleagentid',
    'label' => 'Selling Agent ID',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-listing-field_schoole'
  $field_instances['node-listing-field_schoole'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 108,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 114,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 87,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_schoole',
    'label' => 'Grade School',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-listing-field_schoolh'
  $field_instances['node-listing-field_schoolh'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 111,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 116,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 89,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_schoolh',
    'label' => 'High School',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-listing-field_schoolj'
  $field_instances['node-listing-field_schoolj'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 110,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 115,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 88,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_schoolj',
    'label' => 'Middle School',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-listing-field_sewer'
  $field_instances['node-listing-field_sewer'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A brief description of the sewer - e.g. city, septic tank + drain field',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 92,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 97,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 70,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 70,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sewer',
    'label' => 'Sewer',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-listing-field_shortsale'
  $field_instances['node-listing-field_shortsale'] = array(
    'bundle' => 'listing',
    'default_value' => array(
      0 => array(
        'value' => 'No',
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether or not this property is subject to short sale terms',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 81,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 86,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_shortsale',
    'label' => 'Short Sale',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-listing-field_slideshow'
  $field_instances['node-listing-field_slideshow'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 19,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slideshow',
    'label' => 'Slideshow URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'title' => 'value',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => 'Slideshow',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'node-listing-field_solddate'
  $field_instances['node-listing-field_solddate'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Date the listing was sold (closed)',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 103,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 108,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 37,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 81,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_solddate',
    'label' => 'Sold Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'node-listing-field_soldprice'
  $field_instances['node-listing-field_soldprice'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Actual sales price regardless of commissions or other seller terms',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 104,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 109,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 38,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 82,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_soldprice',
    'label' => 'Sold Price',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 66,
    ),
  );

  // Exported field_instance: 'node-listing-field_soldterms'
  $field_instances['node-listing-field_soldterms'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Terms of the sale -- owner carry, cash, convention, FHA, etc.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 105,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 110,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 83,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_soldterms',
    'label' => 'Sold Terms',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 67,
    ),
  );

  // Exported field_instance: 'node-listing-field_source'
  $field_instances['node-listing-field_source'] = array(
    'bundle' => 'listing',
    'default_value' => array(
      0 => array(
        'value' => 'Manual',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 29,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_source',
    'label' => 'Source',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-listing-field_sqft'
  $field_instances['node-listing-field_sqft'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Building square footage. For Residential properties, this is usually "habitable" square footage, so garage sqft and unfinished basement sqft would normally be omitted.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 96,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 101,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 11,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 74,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sqft',
    'label' => 'SqFt',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-listing-field_state'
  $field_instances['node-listing-field_state'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_state',
    'label' => 'State',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 3,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-listing-field_status'
  $field_instances['node-listing-field_status'] = array(
    'bundle' => 'listing',
    'default_value' => array(
      0 => array(
        'value' => 'Active',
      ),
    ),
    'deleted' => 0,
    'description' => 'The current status of this listing: Active = the listing is available for sale; Pending = the listing has a pending offer, but is generally  is available for backup offers; Sold = this listing has been closed; Deleted = this listing has been deleted and will be removed from the database at the next reorganization',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 98,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 104,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 77,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_status',
    'label' => 'Status',
    'readmore_behaviour' => 'default',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-listing-field_structures'
  $field_instances['node-listing-field_structures'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Description of existing structures, outbuildings, etc.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 64,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 70,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_structures',
    'label' => 'Structures',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 67,
    ),
  );

  // Exported field_instance: 'node-listing-field_style'
  $field_instances['node-listing-field_style'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 117,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 122,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'listing_flyer1' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 95,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_style',
    'label' => 'Style',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-listing-field_subdivision'
  $field_instances['node-listing-field_subdivision'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The name of the subdivision (if applicable)',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 62,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_subdivision',
    'label' => 'Subdivision',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-listing-field_taxes'
  $field_instances['node-listing-field_taxes'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Annual property tax amount',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 83,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 88,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_taxes',
    'label' => 'Taxes',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-listing-field_taxid'
  $field_instances['node-listing-field_taxid'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'County Tax ID',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 82,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 87,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_taxid',
    'label' => 'Taxid',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-listing-field_terms'
  $field_instances['node-listing-field_terms'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Sale terms, e.g. "Cash, Conventional, FHA"',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_terms',
    'label' => 'Terms',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-listing-field_utilities'
  $field_instances['node-listing-field_utilities'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Available utilities, such as city water & sewer, electricity, cable TV, DSL, etc.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 89,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 94,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 67,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 67,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_utilities',
    'label' => 'Utilities',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'node-listing-field_videotour'
  $field_instances['node-listing-field_videotour'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 20,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_videotour',
    'label' => 'Video Tour',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'title' => 'value',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => 'Video Tour',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'node-listing-field_view'
  $field_instances['node-listing-field_view'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'View from the property (city, lake, river, mountains, etc.)',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 112,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 117,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 27,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 90,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_view',
    'label' => 'View',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 30,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-listing-field_virtualtour'
  $field_instances['node-listing-field_virtualtour'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 21,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_virtualtour',
    'label' => 'Virtual Tour',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'title' => 'value',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => 'Virtual Tour',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'node-listing-field_water'
  $field_instances['node-listing-field_water'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Description of water source (e.g. Public, Well, etc.)',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 80,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 85,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_water',
    'label' => 'Water',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-listing-field_waterfront'
  $field_instances['node-listing-field_waterfront'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Type of waterfront, if any. "Frontage" means the property is on the water; "View" means the water is visible from the property; "Near" means water is nearby -- perhaps less than 1/2 mile.',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 87,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 93,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 66,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 66,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_waterfront',
    'label' => 'Waterfront',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-listing-field_waterfrontname'
  $field_instances['node-listing-field_waterfrontname'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If near a body of water, enter the name here (e.g. view of Willamette River, South Fork, Pacific Ocean etc.)',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 78,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 84,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_waterfrontname',
    'label' => 'WaterFront Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-listing-field_website'
  $field_instances['node-listing-field_website'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a valid website URL, including "http://". Example: http://www.somesite.com/1234567.html',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 17,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_website',
    'label' => 'Website URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'title' => 'value',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => 'Website',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 59,
    ),
  );

  // Exported field_instance: 'node-listing-field_yearbuilt'
  $field_instances['node-listing-field_yearbuilt'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 100,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 106,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 7,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 79,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_yearbuilt',
    'label' => 'Year Built',
    'required' => 0,
    'settings' => array(
      'max' => 2020,
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-listing-field_yearbuiltmod'
  $field_instances['node-listing-field_yearbuiltmod'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A modified to year built, generally denoting a remodel (e.g. "Remodel 2011")',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 102,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 107,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 80,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_yearbuiltmod',
    'label' => 'Year Built (Mod)',
    'readmore_behaviour' => 'default',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-listing-field_zipcode'
  $field_instances['node-listing-field_zipcode'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_zipcode',
    'label' => 'Zip Code',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-listing-field_zoning'
  $field_instances['node-listing-field_zoning'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Zoning (e.g. C2P, Residential, Commercial, etc.)',
    'display' => array(
      'classic_flyer' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 90,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 96,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 69,
      ),
      'listing_flyer1' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 69,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_zoning',
    'label' => 'Zoning',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 64,
    ),
  );

  // Exported field_instance: 'node-listing_statistics-field_date'
  $field_instances['node-listing_statistics-field_date'] = array(
    'bundle' => 'listing_statistics',
    'deleted' => 0,
    'description' => 'Date and time (Unix timestamp) for the page view',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'readmore_behaviour' => 'default',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-listing_statistics-field_referrer'
  $field_instances['node-listing_statistics-field_referrer'] = array(
    'bundle' => 'listing_statistics',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Referrer field loaded by rules',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_referrer',
    'label' => 'Referrer',
    'readmore_behaviour' => 'default',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-listing_statistics-field_view_type'
  $field_instances['node-listing_statistics-field_view_type'] = array(
    'bundle' => 'listing_statistics',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_view_type',
    'label' => 'Type of View',
    'readmore_behaviour' => 'default',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-open_house-body'
  $field_instances['node-open_house-body'] = array(
    'bundle' => 'open_house',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-open_house-field_foodserved'
  $field_instances['node-open_house-field_foodserved'] = array(
    'bundle' => 'open_house',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_foodserved',
    'label' => 'Food Served',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-open_house-field_listing'
  $field_instances['node-open_house-field_listing'] = array(
    'bundle' => 'open_house',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing',
    'label' => 'Listing',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-open_house-field_mlsno'
  $field_instances['node-open_house-field_mlsno'] = array(
    'bundle' => 'open_house',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mlsno',
    'label' => 'MLS#',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-open_house-field_openhousedate'
  $field_instances['node-open_house-field_openhousedate'] = array(
    'bundle' => 'open_house',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_openhousedate',
    'label' => 'Open House Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-open_house-field_openhousetime'
  $field_instances['node-open_house-field_openhousetime'] = array(
    'bundle' => 'open_house',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_openhousetime',
    'label' => 'Open House Times',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 30,
      ),
      'type' => 'text_textfield',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'taxonomy_term-flyers-field_flyer_image'
  $field_instances['taxonomy_term-flyers-field_flyer_image'] = array(
    'bundle' => 'flyers',
    'deleted' => 0,
    'description' => 'This is an example image of this Flyer Type.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_flyer_image',
    'label' => 'Flyer Image/Sample',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '350x350',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'taxonomy_term-flyers-field_flyer_label'
  $field_instances['taxonomy_term-flyers-field_flyer_label'] = array(
    'bundle' => 'flyers',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Flyer Label, used as the view mode for displaying custom flyers',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_flyer_label',
    'label' => 'Flyer Label/View Mode',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 15,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'taxonomy_term-flyers-field_required_images'
  $field_instances['taxonomy_term-flyers-field_required_images'] = array(
    'bundle' => 'flyers',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Number of Images required for this flyer. If the number of images are not available in the BSF database, the flyer will default to the classic flyer. For example, suppose the agent picks flyer "flyer2" as the default flyer, and it requires 5 pictures. If the listing has 4 pictures, it will default back to the classic flyer.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_required_images',
    'label' => 'Required Images',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 33,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A brief description of the sewer - e.g. city, septic tank + drain field');
  t('A modified to year built, generally denoting a remodel (e.g. "Remodel 2011")');
  t('Accessibility');
  t('Acreage');
  t('Actual sales price regardless of commissions or other seller terms');
  t('Ad Title Override');
  t('Address 1');
  t('Address 2');
  t('Agent Count');
  t('Annual property tax amount');
  t('Area');
  t('Available utilities, such as city water & sewer, electricity, cable TV, DSL, etc.');
  t('Basement and/or foundation type and description');
  t('Basement/Foundation');
  t('Baths');
  t('Beds');
  t('Body');
  t('Building square footage. For Residential properties, this is usually "habitable" square footage, so garage sqft and unfinished basement sqft would normally be omitted.');
  t('City');
  t('CoListing Agent');
  t('Company Email');
  t('Company Logo');
  t('Company Type');
  t('Company Website');
  t('Company email address');
  t('Company website - enter the full URL (e.g. http://www.yourcompanyname.com)');
  t('Construction');
  t('Contact/Principal Broker');
  t('Contour');
  t('Contour of the land (rolling hills, flat, etc.)');
  t('Cooling');
  t('County');
  t('County Tax ID');
  t('Date');
  t('Date and time (Unix timestamp) for the page view');
  t('Date the listing was sold (closed)');
  t('Date this listing went off-market. This will include SOLD, WITHDRAWN and CANCELED status codes.');
  t('Description Override');
  t('Description and type of fuel (oil, gas, etc.)');
  t('Description of existing structures, outbuildings, etc.');
  t('Description of fireplace(s)');
  t('Description of hot water (gas, electric, tankless, etc.)');
  t('Description of the dwelling exterior');
  t('Description of water source (e.g. Public, Well, etc.)');
  t('Descriptive Lot Size (e.g. 100 x 100, or Irregular)');
  t('Determines whether or not listings are downloaded using BSF. All agencies are set up with BSF, BSS (Sold) and BSP (Pending) credentials');
  t('Dining Room');
  t('Dining Room features');
  t('Directions');
  t('Enter a valid website URL, including "http://". Example: http://www.somesite.com/1234567.html');
  t('Enter one or more Agent MLS ID numbers that tie this listing to the selling agent.');
  t('Enter one or more Agent MLS ID\'s to define the listing and co-listing agents.');
  t('Enter one or more Listing Office ID numbers (if known). Multiple listing office ID numbers would be appropriate if the listing is shared between two or more agents at different offices or branch offices.');
  t('Enter your ad exactly as you wish it to appear. If you do not enter an override, the description from the MLS will be displayed instead.');
  t('Exact street address (e.g. 555 Main St). Don\'t punctuate abbreviations like Rd or St');
  t('Expiration Date');
  t('Exterior');
  t('Exterior Description');
  t('Exterior features');
  t('Family Room');
  t('Family Room features');
  t('Fax');
  t('Fireplace Description');
  t('Fireplaces');
  t('Flyer Image/Sample');
  t('Flyer Label, used as the view mode for displaying custom flyers');
  t('Flyer Label/View Mode');
  t('Food Served');
  t('For multi-family units, this is the total number of units listed ');
  t('Fuel');
  t('Garage Spaces');
  t('Garage Type');
  t('General area');
  t('Geo Data (Latitude and Longitude)');
  t('GeoData');
  t('Grade School');
  t('Heating');
  t('Heating description');
  t('High School');
  t('Hot Water');
  t('Hotsheet Message');
  t('If near a body of water, enter the name here (e.g. view of Willamette River, South Fork, Pacific Ocean etc.)');
  t('If the listing is in the MLS, this is the MLS identifying number.');
  t('Included kitchen appliances');
  t('Indicate whether or not the address will be displayed on the Internet. "Yes" displays the address; "No" suppresses the street address but still identifies city/state and zip code.');
  t('Interior');
  t('Interior features');
  t('Internet Address');
  t('Kitchen Appliances');
  t('Levels');
  t('List Date');
  t('List Price');
  t('Listing');
  t('Listing Agent ID');
  t('Listing Office ID');
  t('Listing Status');
  t('Living Room');
  t('Living Room features');
  t('Lot Size');
  t('Lot size in acres; this is a searchable field, so it is required. Calculate acres by taking sqft (e.g. 100 x 100 = 1,000 sqft) divided by 43,560 = .02 acres');
  t('MLS #');
  t('MLS Type');
  t('MLS#');
  t('Maximum Price');
  t('Middle School');
  t('Minimum Price');
  t('Neighborhood');
  t('Number of Images required for this flyer. If the number of images are not available in the BSF database, the flyer will default to the classic flyer. For example, suppose the agent picks flyer "flyer2" as the default flyer, and it requires 5 pictures. If the listing has 4 pictures, it will default back to the classic flyer.');
  t('Number of Lots');
  t('Number of Units');
  t('Number of bathrooms. A partial bathroom (e.g. a toilet + sink) may be listed as ".1" or ".5", depending on your MLS rules. For example, 2.5 bathrooms means two full baths (toilet, sink and shower/tub) and a partial bathroom.');
  t('Number of beds. A partial bedroom might indicate a "potential" bedroom, or room without a closet. MLS rules may determine how you report this type of extra room.');
  t('Number of levels in the dwelling (e.g. 1 level, 2 levels, 3 levels, etc.)');
  t('Number of parking spaces');
  t('Number of photos on file for this listing');
  t('Off Market Date');
  t('Open House Date');
  t('Open House Times');
  t('Original Ad Title');
  t('Original Description');
  t('Phone');
  t('Photos');
  t('Present Use');
  t('Present use applies mainly to commercial buildings (e.g. Gas Station, Restaurant), although residential property listings could have "Rental" or "Vacant".');
  t('Price Type');
  t('Printable Flyer');
  t('Property Category');
  t('Property Type');
  t('Referrer');
  t('Referrer field loaded by rules');
  t('Required Images');
  t('Roof');
  t('Roof type and description');
  t('Rotate');
  t('Sale terms, e.g. "Cash, Conventional, FHA"');
  t('Select the MLS Type/Types downloaded for this company. This field is checked on the RMLS agreement when they give permission to OIP to download data via BSF');
  t('Selling Agent ID');
  t('Sewer');
  t('Short Sale');
  t('Slideshow URL');
  t('Sold Date');
  t('Sold Price');
  t('Sold Terms');
  t('Source');
  t('SqFt');
  t('State');
  t('Status');
  t('Street Address');
  t('Structures');
  t('Style');
  t('Subdivision');
  t('Taxes');
  t('Taxid');
  t('Terms');
  t('Terms of the sale -- owner carry, cash, convention, FHA, etc.');
  t('The current status of this listing: Active = the listing is available for sale; Pending = the listing has a pending offer, but is generally  is available for backup offers; Sold = this listing has been closed; Deleted = this listing has been deleted and will be removed from the database at the next reorganization');
  t('The default ad title is constructed using elements of the listing. If you override the default title, it will not be changed with additional MLS uploads.');
  t('The name of the subdivision (if applicable)');
  t('This is an example image of this Flyer Type.');
  t('This is the maximum acceptable price if "Range Pricing" is specified.');
  t('This is the minimum acceptable price if "Range Pricing" is specified.');
  t('Toll Free');
  t('Type of View');
  t('Type of construction');
  t('Type of cooling system, if any');
  t('Type of garage, if any (e.g. Attached, Detached)');
  t('Type of waterfront, if any. "Frontage" means the property is on the water; "View" means the water is visible from the property; "Near" means water is nearby -- perhaps less than 1/2 mile.');
  t('Utilities');
  t('Video Tour');
  t('View');
  t('View from the property (city, lake, river, mountains, etc.)');
  t('Virtual Tour');
  t('Water');
  t('WaterFront Name');
  t('Waterfront');
  t('Website URL');
  t('Whether or not this property is subject to short sale terms');
  t('Year Built');
  t('Year Built (Mod)');
  t('Zip Code');
  t('Zoning');
  t('Zoning (e.g. C2P, Residential, Commercial, etc.)');

  return $field_instances;
}
