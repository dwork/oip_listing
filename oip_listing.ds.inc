<?php
/**
 * @file
 * oip_listing.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function oip_listing_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|agent_information-block-fields|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'agent_information-block-fields';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_fax' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_phone' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_tollfree' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_cell' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_website' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'php' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'picture' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_licensed' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing_1' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'php_1' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|agent_information-block-fields|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|agent_information-block_1-fields|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'agent_information-block_1-fields';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_fax' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_phone' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_tollfree' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_cell' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_website' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'php' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'picture' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_licensed' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nothing_1' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'php_1' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|agent_information-block_1-fields|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|listing|classic_flyer';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'listing';
  $ds_fieldsetting->view_mode = 'classic_flyer';
  $ds_fieldsetting->settings = array(
    'acres_classic' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'agents_classic' => array(
      'weight' => '22',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'bathrooms_classic_res_multi_' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'bedrooms_classic_res_multi_' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'classic_listing_description' => array(
      'weight' => '21',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'classic_multiple_pics_exist' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'contour_classic' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'flyer_heading_classic_' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'flyer_picture_440px_w_o_gallery' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'flyer_title_address_classic_' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'listing_id_classic' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'lot_size_classic' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'rmls_disclaimer' => array(
      'weight' => '23',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'row1_classic_res_multi_' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'row2_classic_com_' => array(
      'weight' => '17',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'row2_classic_res_mul_com_' => array(
      'weight' => '16',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'row3_classic_res_mul_' => array(
      'weight' => '18',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'sqft_classic_res_multi_' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'taxes' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'terms_classic' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'utilities_classic' => array(
      'weight' => '19',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'yr_build_classic_res_multi_' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'zone_classic' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|listing|classic_flyer'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|listing|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'listing';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'directions_geography' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'directions_title' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'display_address' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'features' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'flyer_picture_440px_' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'geography' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'listing_description' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'listing_title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'neighborhood_title_details' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'oip_links' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'property_details_title_' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'property_features_title_' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'rmls_disclaimer' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|listing|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function oip_listing_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'acres_classic';
  $ds_field->label = 'Classic - acres';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  $wrapper = entity_metadata_wrapper(\'node\',$entity);
  $acreage = $wrapper->field_acreage->value();
  if (isset($acreage)) {
    if ($acreage <> 0) {
       print "<div class=\'classic-left strong\'>Acres:</div>";
       print "<div class=classic-right>$acreage</div>"; 
       print "<div class=clear></div>";
    }
  }

?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['acres_classic'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'agents_classic';
  $ds_field->label = 'Classic - Agents';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
if ($pathwrapper = file_stream_wrapper_get_instance_by_uri(\'public://\')) {
  $publicpath = $pathwrapper->getExternalUrl();
}

// Get the primary agent entity
$wrapper = entity_metadata_wrapper(\'node\',$entity);
$agentid =$wrapper->field_listingagentid->value(); 
$agent1 = get_agent($publicpath, $agentid);
// Which format? Team or individual
$coagent = $wrapper->field_colistingagentid->value(); 
$bothagents = (!empty($coagent[0]) ? 1 : 0);
if ($bothagents) {
  $agent2 = get_agent($publicpath,$coagent);
  show_both ($agent1, $agent2); 
} else {
  show_one($agent1);
}

//----------------------------------------- functions --------------------------------------//
function show_one ($agent1) {
  if (isset($agent1->pic) && strlen($agent1->pic)>0) {
    print "<div class=classic-agent-right><img src=\'$agent1->pic\' height=135></div>";
  }
  if (strlen($agent1->weburl) == 0) {
     print "<BR>";
  } 
 print "<div class=classic-agent-left>Reach $agent1->first by email at <a href=\'mailto:$agent1->myemail\'>$agent1->myemail</a><BR>";
  if (strlen($agent1->weburl) > 0) {
    print "Be sure to visit <a href=$agent1->weburl target=_new>$agent1->weburl</a>";
  }
  print "<HR>";
  if (strlen($agent1->companylogo)>0) {
    print "<img src=$agent1->companylogo align=left>";
  }
  print "<strong>$agent1->fullname</strong><BR>$agent1->companyname<BR>$agent1->phone $agent1->cell<BR>$agent1->fax $agent1->tollfree";
  print "</div>";

}

function show_both ($agent1, $agent2) {
  $uwrapper1 = entity_metadata_wrapper(\'user\',$agent1);
  $first1 = $agent1->first;
  if (!empty($agent1->myemail)) {
 	 $email1 = "<a href=mailto:$agent1->myemail>$agent1->myemail</a>";
  }
  if (!empty($agent1->weburl)) {
  	 $url1 = "or visit <a href=$agent1->weburl target=_new>$agent1->weburl</a>";
  } else {
  	 $url1 = \'\';
  }
   $uwrapper2 = entity_metadata_wrapper(\'user\',$agent2);
  $first2 = $agent2->first;
  $email2 = "<a href=mailto:$agent2->myemail>$agent2->myemail</a>";
  if (!empty($agent2->weburl)) {
  	 $url2 = "or visit <a href=$agent2->weburl target=_new>$agent2->weburl</a>";
  } else {
  	 $url2 = \'\';
  }
  print "<div class=classic-agents-left><img src=\'$agent1->pic\'></div>";
  print "<div class=classic-agents-middle><center>";
  
  print "Reach $first1 by email $email1 $url1<BR>Reach $first2 by email $email2 $url2";
  print "<HR>";

  if ($agent1->companyname = $agent2->companyname) {  
	print "<strong>$agent1->fullname</strong> $agent1->phone<BR>";
  	print "<strong>$agent2->fullname</strong> $agent2->phone<BR>";  
  	print "$agent1->companyname<BR>";
  } else {
	print "<strong>$agent1->fullname</strong> $agent1->phone<BR>";
  	print "$agent1->companyname<BR>";
  	print "<strong>$agent2->fullname</strong> $agent2->phone<BR>";  
  	print "$agent2->companyname<BR>";
  }
  print "</center></div>";
  print "<div class=classic-agents-right><img src=\'$agent2->pic\'></div>";
}


function get_agent($path,$agentid) {
  $query = new EntityFieldQuery();
  $query->entityCondition(\'entity_type\', \'user\')
    ->fieldCondition(\'field_agentid\', \'value\', $agentid, \'=\');
  $result = $query->execute();
  if (isset($result[\'user\'])) {
    $uid = current(array_keys($result[\'user\']));
    $agent1 = user_load($uid);
  }
  $uwrapper = entity_metadata_wrapper(\'user\',$agent1);

  // Set up the fields we use 
  $agent1->myemail = $uwrapper->field_email->value();
  if (empty($agent1->myemail)) {
     $agent1->myemail = $agent1->mail;
  } 
  $agent1->first = $uwrapper->field_firstname->value();
  $agent1->middle = $uwrapper->field_middlename->value();
  $agent1->last = $uwrapper->field_lastname->value();
  $agent1->title = $uwrapper->field_title->value();
  $agent1->fullname = $agent1->first.\' \'.$agent1->last.\', \'.$agent1->title;
  // Phone numbers
  if (isset($agent1->field_phone[\'und\'][0][\'number\'])) {
     $agent1->phone = \'Direct: \' . formatPhone($agent1->field_phone[\'und\'][0][\'number\']);
  } else {
     $agent1->phone = \'\';
  }
  if (isset($agent1->field_fax[\'und\'])) {
    $agent1->fax = \'Fax: \' . formatPhone($agent1->field_fax[\'und\'][0][\'number\']);
  } else {
    $agent1->fax = \'\';
  }
  if (isset($agent1->field_cell[\'und\'][0][\'number\'])) {
     $agent1->cell = \'Cell: \' . formatPhone($agent1->field_cell[\'und\'][0][\'number\']);
  } else {
     $agent1->cell = \'\';
  }
  if (isset($agent1->field_tollfree[\'und\'][0][\'number\'])) {
     $agent1->tollfree = \'800: \' . formatPhone($agent1->field_tollfree[\'und\'][0][\'number\']);
  } else {
     $agent1->tollfree = \'\';
  }

  if (isset($agent1->field_website[\'und\'][0][\'url\'])) {
     $agent1->weburl = $agent1->field_website[\'und\'][0][\'url\'];
  } else {
     $agent1->weburl = \'\';
  }
  if (isset($agent1->picture->filename)) {
    $agent1->pic = $path.\'pictures/\'.$agent1->picture->filename;
  } else {
     $agent1->pic = \'\';
  }
  // get company logo
  if (isset($agent1->field_agency[\'und\'][0][\'target_id\'])) {
    $company = node_load($agent1->field_agency[\'und\'][0][\'target_id\']);
    $agent1->companyname = $company->title;
    if (isset($company->field_company_logo[\'und\'][0][\'filename\'])) {
      $agent1->companylogo = $path.$company->field_company_logo[\'und\'][0][\'filename\'];
    } else {
      $agent1->companylogo =\'\';
    }
  } else {
    $agent1->companylogo = \'\';
  }
  return $agent1;
}

/**
* Converts phone numbers to the formatting standard
*
* @param   String   $num   A unformatted phone number
* @return  String   Returns the formatted phone number
*/
function formatPhone($num)  {
  $num = preg_replace(\'/[^0-9]/\', \'\', $num);
  $len = strlen($num);
  if($len == 7) 
     $num = preg_replace(\'/([0-9]{3})([0-9]{4})/\', \'$1-$2\', $num);
  elseif($len == 10)
     $num = preg_replace(\'/([0-9]{3})([0-9]{3})([0-9]{4})/\', \'($1) $2-$3\', $num);
 return $num;
}
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['agents_classic'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'bathrooms_classic_res_multi_';
  $ds_field->label = 'Classic - Bathrooms (Res/Multi)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  function bathrooms ($entity) {
    $wrapper = entity_metadata_wrapper(\'node\',$entity);
    $baths = $wrapper->field_baths->value(); 
    print "<div class=\'classic-left strong\'>Bathrooms:</div>";
    print "<div class=classic-right>$baths</div>"; 
    print "<div class=clear></div>";
  }

  $wrapper = entity_metadata_wrapper(\'node\',$entity);
  $type  =  $wrapper->field_proptype->value()->name;

  if (in_array($type, array(\'MultiFamily\',\'Residential\'))) {            
    if ($wrapper->field_baths->value() <> 0  and $wrapper->field_baths->value()<>\' \') {
      bathrooms ($entity);
    }
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['bathrooms_classic_res_multi_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'bedrooms_classic_res_multi_';
  $ds_field->label = 'Classic - Bedrooms (res/multi)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  function bedrooms ($entity) {
    $wrapper = entity_metadata_wrapper(\'node\',$entity);
    $beds = $entity->field_beds[\'und\'][0][\'value\']; 
    print "<div class=\'classic-left strong\'>Bedrooms:</div>";
    print "<div class=classic-right>$beds</div>"; 
    print "<div class=clear></div>";
  }
  $wrapper = entity_metadata_wrapper(\'node\',$entity);
  $type  =  $wrapper->field_proptype->value()->name;
  if (in_array($type, array(\'MultiFamily\',\'Residential\'))) {            
    if ($wrapper->field_beds->value()<>0 and $wrapper->field_beds->value()<>\' \') {
        bedrooms($entity);
    }
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['bedrooms_classic_res_multi_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'classic_listing_description';
  $ds_field->label = 'Classic - listing description';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
   $wrapper = entity_metadata_wrapper(\'node\',$entity);
   $ary = field_fetch_field_values(\'node\',$entity,\'body\'); 
   if (isset($ary[0])) {
      $ad = $ary[0];
   } else {
      $ad = \'\';
   }
    // For some reason, safe_value marksup the paragraph with <p> ... </p>, so we want to strip that off
    if (substr($ad,0,3) == \'<p>\') {
      $ad = substr($ad,3,strlen($ad)-8);
    }
    print "<div class=classic_row_full>$ad</div>";
    print "<HR>";
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['classic_listing_description'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'classic_multiple_pics_exist';
  $ds_field->label = 'Classic - multiple pics exist';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
   $wrapper = entity_metadata_wrapper(\'node\',$entity);
   $listingid = $wrapper->field_mlsno->value();
   $pic_count = $wrapper->field_photos->value();
   if ($pic_count>1) {
      echo "<BR><a href=/listingid>See Listing for Multiple Pictures</a>";
   }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['classic_multiple_pics_exist'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'contour_classic';
  $ds_field->label = 'Classic - Contour (land)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  function contour ($wrapper) {
   $contour = $wrapper->field_contour->value();
   if (strlen(trim($contour))==0) {
      $contour = \'---\';
    }
    print "<div class=\'classic-left strong\'>Contour:</div>";
    print "<div class=classic-right>$contour</div>"; 
    print "<div class=clear></div>";
  }

  $wrapper = entity_metadata_wrapper(\'node\',$entity);
  $type  =  $wrapper->field_proptype->value()->name;
  if (in_array($type, array(\'Land\'))) {            
     contour($wrapper);
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['contour_classic'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'directions_geography';
  $ds_field->label = 'Directions';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
    $ary = field_fetch_field_values(\'node\',$entity,\'field_directions\'); $dir = $ary[0];
    // For some reason, safe_value marksup the paragraph with <p> ... </p>, so we want to strip that off
    if (substr($dir,0,3) == \'<p>\') {
      $directions = substr($dir,3,strlen($ad)-8);
    }
    print "<div class=flyer_region_border>$dir</div>";
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['directions_geography'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'directions_title';
  $ds_field->label = 'Directions and Geography (title)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div id=listing_title>
  Directions & Geography
</div>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['directions_title'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'display_address';
  $ds_field->label = 'Display Address';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div id=listing_displayaddress>
  <?php 
  $ary = field_fetch_field_values(\'node\',$entity,\'field_internetaddress\'); $showaddress = $ary[0];
  print "$".number_format($entity->field_listprice[\'und\'][0][\'value\']) . " &nbsp; &nbsp; ";
  if ($showaddress==\'No\') {
    print "( Call Agent for Address )";
  } else {
    print  $entity->field_address[\'und\'][0][\'value\'];
  }
  print  \' \' . $entity->field_city[\'und\'][0][\'value\'] . \' \' . $entity->field_state[\'und\'][0][\'value\'] . \' \' . $entity->field_zipcode[\'und\'][0][\'value\']; ?>
</div>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['display_address'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'features';
  $ds_field->label = 'Features';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  // rets_show_feature is in rets_bsf.includes.inc
  rets_show_feature ($entity,\'Dining Room\',\'field_diningroom\');
  rets_show_feature ($entity,\'Living Room\',\'field_livingroom\');
  rets_show_feature ($entity,\'Accessibility\',\'field_accessibility\');
  rets_show_feature ($entity,\'Basement\',\'field_basement\');
  rets_show_feature ($entity,\'Construction\',\'field_construction\');
  rets_show_feature ($entity,\'Cooling\',\'field_cooling\');
  rets_show_feature ($entity,\'Heating\',\'field_heat\');
  rets_show_feature ($entity,\'Zoning\',\'field_zoning\');
  rets_show_feature ($entity,\'Utilities\',\'field_utilities\');
  rets_show_feature ($entity,\'Structures\',\'field_structures\');
  rets_show_feature ($entity,\'Exterior\',\'field_exterior\');
  rets_show_feature ($entity,\'Family Room\',\'field_familyroom\');
  rets_show_feature ($entity,\'Fuel\',\'field_fuel\');
  rets_show_feature ($entity,\'Hot Water\',\'field_hotwater\');
  rets_show_feature ($entity,\'Interior\',\'field_interior\');
  rets_show_feature ($entity,\'Appliances\',\'field_appliances\');
  rets_show_feature ($entity,\'Present Use\',\'field_present_use\');
?>
',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['features'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'flyer_heading_classic_';
  $ds_field->label = 'Flyer Heading (Classic)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '  <?php
      $ary = field_fetch_field_values(\'node\',$entity,\'field_status\'); $status = $ary[0];
      switch ($status) {
         case \'Active\': 
            $img = \'For%20Sale.png\';
            break;
         case \'Bumpable Buyer\': 
            $img = \'For%20Sale.png\';
            break;
         case \'SOLD\':
            $img = \'Sold.png\';
            break;
         case \'Pending\':
            $img = \'Pending.png\';
            break;
         default:
            $img = \'OffMarket.png\';
            break;
        }
    // print "<img src=\'/sites/default/files/$img\' height=\'45\' align=\'right\'>";
  ?>
  <div class="classic-heading">
    <div class="strong">Oregon Internet Properties LLC</div>
    <?php print "http://oip.net/$entity->title"; ?>
  </div>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['flyer_heading_classic_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'flyer_picture_400px_w_o_gallery';
  $ds_field->label = 'Flyer Picture 400px w/o gallery';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
// Pulls listing picture from OIPRETS
$ch = curl_init();
 $timeout = 0; // set to zero for no timeout
// curl_setopt ($ch, CURLOPT_URL, "http://www.oiprets.com/rets_idx/idxphotos.php?debug=0&id=$entity->title&w=400");
 curl_setopt ($ch, CURLOPT_URL, "http://www.oiprets.com/bsfphotos.php?debug=0&id=$entity->title&w=400");
 curl_setopt ($ch, CURLOPT_RETURNTRANSFER, 1);
 curl_setopt ($ch, CURLOPT_CONNECTTIMEOUT, $timeout);
 $file_contents = curl_exec($ch);
 curl_close($ch);
print "<a href=/$entity->title border=0 align=left>$file_contents</a>";
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['flyer_picture_400px_w_o_gallery'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'flyer_picture_440px_';
  $ds_field->label = 'Flyer Picture (95%) w/gallery';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
// Pulls listing picture from OIPRETS
$ch = curl_init();
 $timeout = 0; // set to zero for no timeout
// curl_setopt ($ch, CURLOPT_URL, "http://www.oiprets.com/htbin/bsfphoto.cgi?debug=0&id=$entity->title&w=95%&h=NONE&show=all");
 curl_setopt ($ch, CURLOPT_URL, "http://www.oiprets.com/bsfphotos.php?debug=0&id=$entity->title&w=95%&h=NONE&show=all");
 curl_setopt ($ch, CURLOPT_RETURNTRANSFER, 1);
 curl_setopt ($ch, CURLOPT_CONNECTTIMEOUT, $timeout);
 $file_contents = curl_exec($ch);
 curl_close($ch);
print "<a href=/$entity->title border=0 align=left>$file_contents</a>";
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['flyer_picture_440px_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'flyer_picture_440px_w_o_gallery';
  $ds_field->label = 'Flyer picture 100% w/o gallery';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
// Pulls listing picture from OIPRETS
$ch = curl_init();
 $timeout = 0; // set to zero for no timeout
// curl_setopt ($ch, CURLOPT_URL, "http://www.oiprets.com/htbin/bsfphoto.cgi?debug=0&id=$entity->title&w=100%&h=NONE");
 curl_setopt ($ch, CURLOPT_URL, "http://www.oiprets.com/bsfphotos.php?debug=0&id=$entity->title&w=100%&h=NONE");
 curl_setopt ($ch, CURLOPT_RETURNTRANSFER, 1);
 curl_setopt ($ch, CURLOPT_CONNECTTIMEOUT, $timeout);
 $file_contents = curl_exec($ch);
 curl_close($ch);
print "<a href=/$entity->title border=0 align=left>$file_contents</a>";
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['flyer_picture_440px_w_o_gallery'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'flyer_title_address_classic_';
  $ds_field->label = 'Flyer Title & Address (classic)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class=clear></div>
<HR>
<div class="classic-title-left"><?php $price = number_format($entity->field_listprice[\'und\'][0][\'value\']); print "$ ".$price; ?></div>
<div class="classic-title-middle">
    <div class="strong font16">[node:field_adtitle]</div>
    <?php
       $ary = field_fetch_field_values(\'node\',$entity,\'field_internetaddress\'); $showaddress = $ary[0];
       if ($showaddress == \'No\') {
          print "(Call Agent)";
       } else {
          print $entity->field_address[\'und\'][0][\'value\'];
       }
    ?>
    • [node:field_state], [node:field_city] • [node:field_zipcode]
 </div>
<div classic-title-right>
   <img src="/sites/default/files/oiplogo_0.gif" height=\'55\' align="left">
</div>
<div class=clear></div>
<HR>
',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['flyer_title_address_classic_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'geography';
  $ds_field->label = 'Geography';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
    if (isset($entity->field_geodata[\'und\'][0])) {
       print "Lat: ".$entity->field_geodata[\'und\'][0][\'lat\']." Lon: ".$entity->field_geodata[\'und\'][0][\'lon\'];
    }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['geography'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'listing_description';
  $ds_field->label = 'Listing Description';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  
   $ary = field_fetch_field_values(\'node\',$entity,\'body\'); 
   if (isset($ary[0])) {
      $ad = $ary[0];
   } else {
      $ad = \'\';
   }
    // For some reason, safe_value marksup the paragraph with <p> ... </p>, so we want to strip that off
    if (substr($ad,0,3) == \'<p>\') {
      $ad = substr($ad,3,strlen($ad)-8);
    }
    print "<div class=flyer_region_border>$ad</div>";
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['listing_description'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'listing_id_classic';
  $ds_field->label = 'Classic - Listing ID';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  $wrapper=entity_metadata_wrapper(\'node\',$entity);
  $listingid = $wrapper->field_mlsno->value();
  print "<div class=\'classic-left strong\'>Listing ID:</div>";
  print "<div class=classic-right><a href=/$listingid>$listingid</a></div>"; 
  print "<div class=clear></div>";
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['listing_id_classic'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'listing_title';
  $ds_field->label = 'Listing Title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div id=listing_title>
<?php
  // Use the override if entered, otherwise use the original
  $ary = field_fetch_field_values(\'node\', $entity, \'field_adtitle\');  $adtitle = $ary[0];
  if (strlen($adtitle) == 0) {
     $ary = field_fetch_field_values(\'node\', $entity, \'field_originaladtitle\');  $adtitle = $ary[0];
  }
  print $adtitle . "<BR>";
?>
</div>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['listing_title'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'lot_size_classic';
  $ds_field->label = 'Classic - Lot Size';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  function lotsize ($wrapper) {
     $lotsize = $wrapper->field_lotsize->value(); 
    print "<div class=\'classic-left strong\'>Lot Size:</div>";
    print "<div class=classic-right>$lotsize</div>"; 
    print "<div class=clear></div>";
  }

  $wrapper = entity_metadata_wrapper(\'node\',$entity);
  $type  =  $wrapper->field_proptype->value()->name;
//  if (in_array($type, array(\'MultiFamily\',\'Residential\'))) {            
  if ($wrapper->field_lotsize->value() <> 0 and $wrapper->field_lotsize->value() <> \' \') {
    lotsize ($wrapper);
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['lot_size_classic'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'neighborhood_title_details';
  $ds_field->label = 'Neighborhood-Schools';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div id=listing_title>
  Neighborhood & Schools
</div>
<div id=listing_details_left>
<?php 
   $ary = field_fetch_field_values(\'node\',$entity,\'field_neighborhood\'); if (!empty($ary)) {$neighborhood = $ary[0]; } else { $neighborhood = \'\'; }
   $ary = field_fetch_field_values(\'node\',$entity,\'field_schoole\');  if (!empty($ary)) {$schoole = $ary[0]; } else { $schoole = \'\'; }
   $ary = field_fetch_field_values(\'node\',$entity,\'field_schoolj\');  if (!empty($ary)) {$schoolj = $ary[0]; } else { $schoolj = \'\'; }
   $ary = field_fetch_field_values(\'node\',$entity,\'field_schoolh\');  if (!empty($ary)) {$schoolh = $ary[0]; } else { $schoolh = \'\'; }
   $ary = field_fetch_field_values(\'node\',$entity,\'field_view\');  if (!empty($ary)) {$view = $ary[0]; } else { $view = \'\'; }
   $ary = field_fetch_field_values(\'node\',$entity,\'field_subdivision\');  if (!empty($ary)) {$subdivision = $ary[0]; } else { $subdivision = \'\'; }
   $ary = field_fetch_field_values(\'node\',$entity,\'field_area\');  if (!empty($ary)) {$area = $ary[0]; } else { $area = \'\'; }
   $ary = field_fetch_field_values(\'node\',$entity,\'field_waterfront\'); if (!empty($ary)) { $waterfront = $ary[0]; } else { $waterfront = \'\'; }
   $ary = field_fetch_field_values(\'node\',$entity,\'field_waterfrontname\'); if (!empty($ary)) { $waterfrontname = $ary[0]; } else { $waterfrontname = \'\'; }

   if ($neighborhood<>0) {        print "Neighborhood<BR>";      }
   if ($area<>0) {        print "Area<BR>";      }
   if (!empty($subdivison)) {        print "Subdivision<BR>";     }
   if (!empty($waterfront)) {        print "Waterfront<BR>";     }
   if (!empty($waterfrontname)) {       print " &nbsp; &nbsp; \'\' &nbsp; &nbsp; Name:<BR>";    }
   if (!empty($schoole) || !empty($schoolj) || !empty($schoolh)) {       print "Schools:<BR>";    }
?>
</div>

<div id=listing_details_right>
<?php 
   if ($neighborhood<>0) {        print $neighborhood."<BR>";     }
   if ($area<>0) {   print $area."<BR>";     }
   if (!empty($subdivision)) {      print $subdivision."<BR>";    }
   if (!empty($waterfront)) {      print $waterfront."<BR>";    }
   if (!empty($waterfrontname)) {     print $waterfrontname."<BR>";   }
   if (!empty($schoole)) { print "Elem: ".$schoole.\' &nbsp; \'; }
   if (!empty($schoolj)) { print "Middle/Jr: ".$schoolj.\' &nbsp; \'; }
   if (!empty($schoolh)) { print "High: ".$schoolh.\' &nbsp; \';  }

?>
</div>

<div id=listing_details_clear></div>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['neighborhood_title_details'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'oip_links';
  $ds_field->label = 'OIP Links';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php 
  global $user;   // Logged in user
  $this_user = user_load($user->uid);
  $administrator = ($user->uid==1);
  if (!$administrator) {
     foreach ($this_user->roles as $role) {        // Not the superuser, so see if this is an administrator
       if ($role==\'administrator\') {
          $administrator = TRUE;
       }
     } 
  }
  
// Get the default flyer (\'class\') $tid for reference if errors

  $classic_tid = oip_tweaks_gettid(\'flyers\',\'Classic Flyer\');
  $wrapper = entity_metadata_wrapper(\'node\',$entity);

  // Get this user\'s node
   $agentid = \'\';
   if (isset($wrapper->field_listingagentid)) {
     $agentid = $wrapper->field_listingagentid->value();
   }

  // Retrieve the default flyer type from the agent\'s user 
  if ($entity->uid == 1) {         // node is owned by admin, so default to \'classic\' flyer (no choice)
    $default_tid = $classic_tid;
    $pcount = 1;
  } else {
    $agent = user_load($entity->uid);                                            // owner of this listing
    if (isset($agent->field_default_flyer[\'und\'][0][\'tid\'])) {
      $default_tid = $agent->field_default_flyer[\'und\'][0][\'tid\'];      // Taxonomy id for user\'s printable flyer selection
    } else {
      $default_tid = $classic_tid;
    }
  
  //  $flyer=$wrapper->field_flyer->value()->field_flyer_label[\'und\'][0][\'safe_value\'];
 
   // Basic membership can only use the default (classic) flyer
    $editflyer = FALSE;
    foreach ($agent->roles as $role) {
       if ($role==\'basic membership\') {
           unset ($flyer);
       } 
       if ($role==\'gold membership\' or $role==\'platinum membership\') {
           $editflyer=TRUE;
       }
    }
  
    // Next, get the flyer type from the listing. If #pics on the listing is < #pics on the flyer, use the default flyer
    if (empty($flyer)) {
        $tid = $default_tid;
        $term = taxonomy_term_load($tid);
        $flyer = str_replace(\' \', \'\', $term->name);
    } else {
        $tid = $wrapper->field_flyer->value()->tid;
    }
    $pcount = field_fetch_field_values(\'node\',$entity,\'field_photos\');    // number of photos for this listing
    $email = $agent->mail;    // email address
  }
  // Status
 $ary = field_fetch_field_values(\'node\', $entity, \'field_status\'); $status = $ary[0];
 switch ($status) {
  case \'Active\':
     $desc = \'For Sale\';
     break;
  case \'Pending\':
     $desc = \'For Sale (pending)\';
     break;
  case \'Bumpable Buyer\':
     $desc = \'For Sale\';
     break;
  case \'SOLD\':
     $desc = \'Sold\';
     break;
  case \'Expired\':
     $desc = \'Expired\';
     break;
  case \'Canceled\':
     $desc = \'Canceled\';
     break;
  case \'Withdrawn\':
     $desc = \'Withdrawn\';
     break;
  case \'Short Sale Pending\':
     $desc = \'Short Sale Pending\';
     break;
  default;
     $desc = \'Sold\';
     break;
  }
  print "<div id=listing_displayaddress>";
  print "Status: ". $desc."</div><br /><br />";

  // If this is administrator or the owner of this listing & the role is one of the two upgraded realtors, display link to edit 
  $MyListing = (($user->uid==$entity->uid and $editflyer) or $administrator);
  if ($MyListing) {
     print "Edit Printable Flyer & Highlights<BR><BR>";
  }

  // Next, get the flyer taxonomy record and see how many images it requires. 
  $taxonomy = taxonomy_term_load($tid);
  $flyer = $taxonomy->field_flyer_label[\'und\'][0][\'value\'];
  if (!isset($taxonomy->field_required_images[\'und\'][0][\'value\'])) {
     $icount = 0;
  } else {
     $icount = $taxonomy->field_required_images[\'und\'][0][\'value\'];
  }
  if ($pcount<$icount) {
    $flyer = \'classic\';
  }
  print "<a href=/flyer/$flyer/$entity->title target=_new>Printable Flyer</a><BR><BR>"; 
?>

<?php 
   global $user;               // Logged in user, whoever it might be
   $uid = $user->uid;
   if (  $uid>0 ) {
       print "<a href=\'/forward?path=node/$entity->nid\' target=\'_blank\'>Send to a Friend</a><BR><BR>"; 
   } else {
       print "<a href=\'/user/login\'>Login to Send to a Friend</a><BR><BR>";
   }
?> 

<?php print "<a href=\'mailto:$email?Subject=More Information on listing $entity->title\'>More Information</a>"; ?><BR><BR>

<?php 
  $ary = field_fetch_field_values(\'node\',$entity,\'field_internetaddress\'); $showaddress = $ary[0];
  if ($showaddress != \'No\' && isset($entity->field_geodata[\'und\'][0][\'lat\']) ) {
    print \'<a href="/listing-map/\'.$entity->title.\'">Map</a>\'."<BR><BR>";
  }
?>

<?php
  if (isset($entity->field_virtualtour[\'und\'][0])) {
     print \'<a href="\'.$entity->field_virtualtour[\'und\'][0][\'url\'].\'" target="_blank">Virtual Tour</a>\'." <BR><BR>";
  }
?>

<?php
  if (isset($entity->field_videotour[\'und\'][0])) {
     print \'<a href="\'.$entity->field_videotour[\'und\'][0][\'url\'].\'" target="_blank">Video Tour</a>\'." <BR><BR>";
  }
?>

<?php
  if (isset($entity->field_website[\'und\'][0])) {
     print \'<a href="\'.$entity->field_website[\'und\'][0][\'url\'].\'" target="_blank">Website</a>\'." <BR><BR>";
  }
?>
 
<?php
   // Save/Unsave listing with flag module
   if (module_exists(\'flag\')) {
     print  flag_create_link(\'listings\', $entity->uid);
   }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['oip_links'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'price';
  $ds_field->label = 'Price (unused)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  function listprice ($entity) {
    $listprice = number_format($entity->field_listprice[\'und\'][0][\'value\']);
    print "<div class=classic-left>Price:</div>";
    print "<div class=classic-right>$ $listprice</div>"; 
    print "<div class=clear></div>";
  }
  listprice ($entity);
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['price'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'property_details_title_';
  $ds_field->label = 'Property Details (title & dtls)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div id=listing_title>
  Property Details
</div>
<table>
<tr valign="top"><td width="50%">
<div id=listing_details_left>
Property Type:<BR>
<?php 
  $ary = field_fetch_field_values(\'node\',$entity,\'field_proptype\'); if (!empty($ary)) {$proptype = $ary[0]; } else { $proptype = \'\'; }
  $ary = field_fetch_field_values(\'node\',$entity,\'field_style\');  if (!empty($ary)) {$style = $ary[0]; } else { $style = \'\'; }
  $ary = field_fetch_field_values(\'node\',$entity,\'field_sqft\');  if (!empty($ary)) {$sqft = $ary[0]; } else { $sqft = \'\'; }
  $ary = field_fetch_field_values(\'node\',$entity,\'field_beds\');  if (!empty($ary)) {$beds = $ary[0]; } else { $beds = \'\'; }
  $ary = field_fetch_field_values(\'node\',$entity,\'field_baths\');  if (!empty($ary)) {$baths = $ary[0]; } else { $baths = \'\'; }
  $ary = field_fetch_field_values(\'node\',$entity,\'field_acreage\');  if (!empty($ary)) {$acres = $ary[0]; } else { $acres = \'\'; }
  $ary = field_fetch_field_values(\'node\',$entity,\'field_lotsize\');  if (!empty($ary)) {$lotsize = $ary[0]; } else { $lotsize = \'\'; }
  $ary = field_fetch_field_values(\'node\',$entity,\'field_terms\'); if (!empty($ary)) { $terms = $ary[0]; } else { $terms = \'\'; }
  $ary = field_fetch_field_values(\'node\',$entity,\'field_taxes\'); if (!empty($ary)) { $taxes = $ary[0]; } else { $taxes = \'\'; }
  $ary = field_fetch_field_values(\'node\',$entity,\'field_garagetype\'); if (!empty($ary)) { $garagetype = $ary[0]; } else { $garagetype = \'\'; }
  $ary = field_fetch_field_values(\'node\',$entity,\'field_garagespaces\'); if (!empty($ary)) { $garagespaces = $ary[0]; } else { $garagespaces = \'\'; }
  $ary = field_fetch_field_values(\'node\',$entity,\'field_yearbuilt\'); if (!empty($ary)) { $yearbuilt = $ary[0]; } else { $yearbuilt = \'\'; }
  $ary = field_fetch_field_values(\'node\',$entity,\'field_yearbuiltmod\'); if (!empty($ary)) { $yearbuiltmod = $ary[0]; } else {$yearbuildmod = \'\'; }

  $ary = field_fetch_field_values(\'node\',$entity,\'field_roof\'); if (!empty($ary)) { $roof = $ary[0]; } else { $roof = \'\'; }
  $ary = field_fetch_field_values(\'node\',$entity,\'field_water\'); if (!empty($ary)) { $water = $ary[0]; } else { $water = \'\'; }
  $ary = field_fetch_field_values(\'node\',$entity,\'field_sewer\'); if (!empty($ary)) { $sewer = $ary[0]; } else { $sewer = \'\'; }
 
  switch ($proptype->tid) {
    case 3:
      break;
    case 6: 
      print "Bedrooms<BR>Bathrooms<BR>"; 
      break;
  } 
   if ($sqft<>0) {        print "Sq Ft<BR>";      }
   if ($acres<>0) {        print "Acreage<BR>";      }
   if (!empty($lotsize)) {        print "Lot Size<BR>";     }
   if (!empty($roof)) {        print "Roof<BR>";     }
  if (!empty($style)) {       print "Style:<BR>";    }
?>
</div>

<div id=listing_details_right>
<?php 
  print $proptype->name."<BR>";

  switch ($proptype->tid) {
    case 3:
      break;
    case 6: 
      print "$beds<BR>$baths<BR>"; 
      break;
  } 
   if ($sqft<>0) {        print "$sqft<BR>";     }
   if ($acres<>0) {   print $acres."<BR>";     }
   if (!empty($lotsize)) {      print "$lotsize<BR>";    }
   if (!empty($roof)) {      print $roof."<BR>";    }
  if (!empty($style)) {     print $style."<BR>";   }
?>
</div>

</td><td width="50%">
   <div id=listing_details_left>
      <?php  if (!empty($taxes)) { print "Taxes<BR>"; }  ?>
      <?php  if (!empty($garagetype)) { print "Garage Type<BR>"; }  ?>
      <?php  if (!empty($garagespaces)) { print " &nbsp; &nbsp;  \' \' &nbsp;   Spaces<BR>"; }  ?>
      <?php  if (!empty($yearbuilt)) { print "Year Built<BR>"; }  ?>
      <?php  if (!empty($water)) { print "Water<BR>"; }  ?>
      <?php  if (!empty($sewer)) { print "Sewer<BR>"; }  ?>
      <?php  if (!empty($terms)) { print "Terms<BR>"; }  ?>
   </div>
   <div id=listing_details_right>
      <?php  if (!empty($taxes)) { print $taxes."<BR>"; }  ?>
      <?php  if (!empty($garagetype)) { print $garagetype."<BR>"; }  ?>
      <?php  if (!empty($garagespaces)) { print $garagespaces."<BR>"; }  ?>
      <?php  if (!empty($yearbuilt)) { 
            print $yearbuilt;
            if (!empty($yearbuiltmod)) {  print \' \'.$yearbuiltmod; }
            print "<BR>"; 
          }
     ?>
      <?php  if (!empty($water)) { print $water."<BR>"; }  ?>
      <?php  if (!empty($sewer)) { print $sewer."<BR>"; }  ?>
     <?php  if (!empty($terms)) { print $terms."<BR>"; }  ?>
    </div>
</td>
</tr></table>
<div id=listing_details_clear></div>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['property_details_title_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'property_features_title_';
  $ds_field->label = 'Property Features (title)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div id=listing_title>
Property Featulres
</div>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['property_features_title_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'rmls_disclaimer';
  $ds_field->label = 'RMLS Disclaimer';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="flyer_disclaimer"><img src="/sites/default/files/mlslogo.gif" align="left"><img src="/sites/default/files/ehologo.gif" align="right">
Licensed to sell Real Estate in the State of Oregon. Information deemed reliable but not guaranteed and should be independently verified. Listings on this website are updated daily. Data relating to real estate for sale on this web site comes substantially from the RMLS(tm) of Portland, Oregon. Listing data is copyright © 2009-<?php print date(\'Y\'); ?> RMLS(tm), Portland, Oregon. Some properties which appear for sale on this web site may subsequently have sold or may no longer be available. Neither listing party(s) nor this service or its members shall be held liable for typographical errors, misinformation or misprints. ©1995 - <?php print date(\'Y\'); ?> Oregon Internet Properties LLC.</div>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['rmls_disclaimer'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'row1_classic_res_multi_';
  $ds_field->label = 'Classic - Row1 (res/multi)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php 
  function row1 ($wrapper) {
    $exterior = $wrapper->field_exteriordescription->value();
     $taxes = number_format( $wrapper->field_taxes->value() );
    print "<HR>";
    print "  <div class=classic_row_left>";
    print "    <div class=\'classic_row_col1 strong\'>Exterior:</div>";
    print "    <div class=classic_row_col2>$exterior</div>";
    print "  </div>";
    print "  <div class=classic_row_right>";
    print "    <div class=\'classic_row_col3 strong\'>Taxes:</div><div class=classic_row_col4>$ $taxes</div>";
    print "  </div>";
    print "  <div class=clear></div>";
    print "<HR>";
  }

  $wrapper = entity_metadata_wrapper(\'node\',$entity);
  $type  =  $wrapper->field_proptype->value()->name;
  if (!in_array($type, array(\'Land\'))) {            
     row1 ($wrapper);
  }
?>
',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['row1_classic_res_multi_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'row2_classic_com_';
  $ds_field->label = 'Classic - Row2 (commercial)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php 
  function row2a ($wrapper) {
    $present_use = $wrapper->field_present_use->value();
    $roof = $wrapper->field_roof->value();
     print "  <div class=classic_row_left>";
    print "    <div class=\'classic_row_col1 strong\'>Present Use:</div>";
    print "    <div class=classic_row_col2>$present_use</div>";
    print "  </div>";
    print "  <div class=classic_row_right>";
    print "    <div class=\'classic_row_col3 strong\'>Roof:</div><div class=classic_row_col4>$roof</div>";
    print "  </div>";
    print "  <div class=clear></div>";
    print "<HR>";
 }

  $wrapper = entity_metadata_wrapper(\'node\',$entity);
  $type  =  $wrapper->field_proptype->value()->name;
  if (!in_array($type, array(\'MultiFamily\',\'Residential\',\'Land\'))) {            
    row2a($wrapper);
  }
?>
',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['row2_classic_com_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'row2_classic_res_mul_com_';
  $ds_field->label = 'Classic - Row2 (res/mul)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php 
  function row2 ($wrapper) {
    $style = $wrapper->field_style->value()[\'value\'];
 
   $garageno = $wrapper->field_garagespaces->value();
    $garagetype = $wrapper->field_garagetype->value();
    if (strlen(trim($garagetype)) > 10) {
        $ary = explode(\',\',$garagetype);
        $garagetype = $ary[0];
    }
    
    print "  <div class=classic_row_left>";
    print "    <div class=\'classic_row_col1 strong\'>Style:</div>";
    print "    <div class=classic_row_col2>$style</div>";
    print "  </div>";
    print "  <div class=classic_row_right>";
    print "    <div class=\'classic_row_col3 strong\'>Garage:</div><div class=classic_row_col4>$garageno $garagetype</div>";
    print "  </div>";
    print "  <div class=clear></div>";
    print "<HR>";
  }

  $wrapper = entity_metadata_wrapper(\'node\',$entity);
  $type  =  $wrapper->field_proptype->value()->name;
  if (in_array($type, array(\'MultiFamily\',\'Residential\'))) {            
    row2($wrapper);
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['row2_classic_res_mul_com_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'row3_classic_res_mul_';
  $ds_field->label = 'Classic - Row3 (res/mul)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php 
  function row3 ($wrapper) {
     $schoole = $wrapper->field_schoole->value();
    if (!empty($schoole)) {  $schoole = \'Elem: \' . $schoole; }
    $schoolj = $wrapper->field_schoolj->value();
    if (!empty($schoolj)) {  $schoolj = \'Mid: \' . $schoolj; }
    $schoolh = $wrapper->field_schoolh->value();
    if (!empty($schoolh)) {  $schoolh = \'High: \' . $schoolh; }
    $heat = $wrapper->field_heat->value();

     print "  <div class=classic_row_left>";
    print "    <div class=\'classic_row_col1 strong\'>Schools:</div>";
    print "    <div class=classic_row_col2>$schoolh; $schoolj; $schoole</div>";
    print "  </div>";
    print "  <div class=classic_row_right>";
    print "    <div class=\'classic_row_col3 strong\'>Heat:</div><div class=classic_row_col4>$heat</div>";
    print "  </div>";
    print "  <div class=clear></div>";
    print "<HR>";
  }

  $wrapper = entity_metadata_wrapper(\'node\',$entity);
  $type  =  $wrapper->field_proptype->value()->name;
  if (in_array($type, array(\'MultiFamily\',\'Residential\'))) {            
    row3($wrapper);
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['row3_classic_res_mul_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'send_to_a_friend';
  $ds_field->label = 'Send to a Friend';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'forward|form',
    'block_render' => '1',
  );
  $export['send_to_a_friend'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'sqft_classic_res_multi_';
  $ds_field->label = 'Classic (res/multi) - Square Feet';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  $wrapper = entity_metadata_wrapper(\'node\',$entity);
  $type  =  $wrapper->field_proptype->value()->name;
  if (!in_array($type, array(\'Land\'))) {          // all but land  
     $sqft = number_format( $wrapper->field_sqft->value() ); 
     print "<div class=\'classic-left strong\'>Square Feet:</div>";
     print "<div class=classic-right>$sqft</div>"; 
     print "<div class=clear></div>";
}
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['sqft_classic_res_multi_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'taxes';
  $ds_field->label = 'Classic - Taxes (land)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  $wrapper = entity_metadata_wrapper(\'node\',$entity);
  $type  =  $wrapper->field_proptype->value()->name;
  if (in_array($type, array(\'Land\'))) {            
      $taxes = number_format( $wrapper->field_taxes->value() );
      print "<div class=\'classic-left strong\'>Taxes:</div>";
      print "<div class=classic-right>$ $taxes</div>"; 
      print "<div class=clear></div>";
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['taxes'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'terms_classic';
  $ds_field->label = 'Terms - classic';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<BR><BR><strong>Terms: </strong>[node:field_terms]
',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['terms_classic'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'utilities_classic';
  $ds_field->label = 'Classic - Schools/Utilities (land)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  $wrapper = entity_metadata_wrapper(\'node\',$entity);
  $type  =  $wrapper->field_proptype->value()->name;
  if (in_array($type, array(\'Land\'))) { 
    $schoole = $wrapper->field_schoole->value();
    if (!empty($schoole)) {  $schoole = \'Elem: \' . $schoole; }
    $schoolj = $wrapper->field_schoolj->value();
    if (!empty($schoolj)) {  $schoolj = \'Mid: \' . $schoolj; }
    $schoolh = $wrapper->field_schoolh->value();
    if (!empty($schoolh)) {  $schoolh = \'High: \' . $schoolh; }
    $utilities = $wrapper->field_utilities->value();
    print "<HR>";
    print "  <div class=classic_row_left>";
    print "    <div class=\'classic_row_col1 strong\'>Schools:</div>";
    print "    <div class=classic_row_col2>$schoolh; $schoolj; $schoole</div>";
    print "  </div>";
    print "  <div class=classic_row_right>";
    print "    <div class=\'classic_row_col3 strong\'>Utilities:</div><div class=classic_row_col4>$utilities</div>";
    print "  </div>";
    print "  <div class=clear></div>";
    print "<HR>";
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['utilities_classic'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'yr_build_classic_res_multi_';
  $ds_field->label = 'Classic - Yr Built (res/multi)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  $wrapper = entity_metadata_wrapper(\'node\',$entity);
  $type  =  $wrapper->field_proptype->value()->name;
  if (!in_array($type, array(\'Land\'))) {            
     $built = $wrapper->field_yearbuilt->value(); 
     $mod = $wrapper->field_yearbuiltmod->value(); 
     print "<div class=\'classic-left strong\'>Year Built:</div>";
     print "<div class=classic-right>$built $mod</div>"; 
     print "<div class=clear></div>";
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['yr_build_classic_res_multi_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'zone_classic';
  $ds_field->label = 'Classic - Zone (land)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  $wrapper = entity_metadata_wrapper(\'node\',$entity);
  $type  =  $wrapper->field_proptype->value()->name;
  if (in_array($type, array(\'Land\'))) {            
     $zoning = $wrapper->field_zoning->value();
     print "<div class=\'classic-left strong\'>Zoned:</div>";
     print "<div class=classic-right>$zoning</div>"; 
     print "<div class=clear></div>";
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['zone_classic'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function oip_listing_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|agent_information-block-fields|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'agent_information-block-fields';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'nothing_1',
        1 => 'field_title',
        2 => 'php_1',
        3 => 'picture',
        4 => 'php',
        5 => 'field_phone',
        6 => 'field_cell',
        7 => 'field_fax',
        8 => 'field_tollfree',
        9 => 'field_website',
        10 => 'field_licensed',
      ),
    ),
    'fields' => array(
      'nothing_1' => 'ds_content',
      'field_title' => 'ds_content',
      'php_1' => 'ds_content',
      'picture' => 'ds_content',
      'php' => 'ds_content',
      'field_phone' => 'ds_content',
      'field_cell' => 'ds_content',
      'field_fax' => 'ds_content',
      'field_tollfree' => 'ds_content',
      'field_website' => 'ds_content',
      'field_licensed' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['ds_views|agent_information-block-fields|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|agent_information-block_1-fields|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'agent_information-block_1-fields';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'field_title',
        1 => 'nothing_1',
        2 => 'php_1',
      ),
      'left' => array(
        0 => 'picture',
      ),
      'right' => array(
        0 => 'field_phone',
        1 => 'field_cell',
        2 => 'field_tollfree',
        3 => 'field_fax',
        4 => 'field_website',
      ),
      'footer' => array(
        0 => 'field_licensed',
        1 => 'php',
      ),
    ),
    'fields' => array(
      'field_title' => 'header',
      'nothing_1' => 'header',
      'php_1' => 'header',
      'picture' => 'left',
      'field_phone' => 'right',
      'field_cell' => 'right',
      'field_tollfree' => 'right',
      'field_fax' => 'right',
      'field_website' => 'right',
      'field_licensed' => 'footer',
      'php' => 'footer',
    ),
    'classes' => array(),
  );
  $export['ds_views|agent_information-block_1-fields|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|listing|classic_flyer';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'listing';
  $ds_layout->view_mode = 'classic_flyer';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'regions' => array(
      'header' => array(
        0 => 'flyer_heading_classic_',
        1 => 'flyer_title_address_classic_',
      ),
      'left' => array(
        0 => 'flyer_picture_440px_w_o_gallery',
      ),
      'right' => array(
        0 => 'bedrooms_classic_res_multi_',
        1 => 'bathrooms_classic_res_multi_',
        2 => 'sqft_classic_res_multi_',
        3 => 'yr_build_classic_res_multi_',
        4 => 'lot_size_classic',
        5 => 'acres_classic',
        6 => 'zone_classic',
        7 => 'contour_classic',
        8 => 'taxes',
        9 => 'listing_id_classic',
        10 => 'terms_classic',
        11 => 'classic_multiple_pics_exist',
      ),
      'footer' => array(
        0 => 'row1_classic_res_multi_',
        1 => 'row2_classic_res_mul_com_',
        2 => 'row2_classic_com_',
        3 => 'row3_classic_res_mul_',
        4 => 'utilities_classic',
        5 => 'classic_listing_description',
        6 => 'agents_classic',
        7 => 'rmls_disclaimer',
      ),
    ),
    'fields' => array(
      'flyer_heading_classic_' => 'header',
      'flyer_title_address_classic_' => 'header',
      'flyer_picture_440px_w_o_gallery' => 'left',
      'bedrooms_classic_res_multi_' => 'right',
      'bathrooms_classic_res_multi_' => 'right',
      'sqft_classic_res_multi_' => 'right',
      'yr_build_classic_res_multi_' => 'right',
      'lot_size_classic' => 'right',
      'acres_classic' => 'right',
      'zone_classic' => 'right',
      'contour_classic' => 'right',
      'taxes' => 'right',
      'listing_id_classic' => 'right',
      'terms_classic' => 'right',
      'classic_multiple_pics_exist' => 'right',
      'row1_classic_res_multi_' => 'footer',
      'row2_classic_res_mul_com_' => 'footer',
      'row2_classic_com_' => 'footer',
      'row3_classic_res_mul_' => 'footer',
      'utilities_classic' => 'footer',
      'classic_listing_description' => 'footer',
      'agents_classic' => 'footer',
      'rmls_disclaimer' => 'footer',
    ),
  );
  $export['node|listing|classic_flyer'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|listing|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'listing';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'display_address',
      ),
      'left' => array(
        0 => 'flyer_picture_440px_',
      ),
      'right' => array(
        0 => 'oip_links',
      ),
      'footer' => array(
        0 => 'listing_title',
        1 => 'listing_description',
        2 => 'property_details_title_',
        3 => 'neighborhood_title_details',
        4 => 'directions_title',
        5 => 'directions_geography',
        6 => 'geography',
        7 => 'property_features_title_',
        8 => 'features',
        9 => 'rmls_disclaimer',
      ),
    ),
    'fields' => array(
      'display_address' => 'header',
      'flyer_picture_440px_' => 'left',
      'oip_links' => 'right',
      'listing_title' => 'footer',
      'listing_description' => 'footer',
      'property_details_title_' => 'footer',
      'neighborhood_title_details' => 'footer',
      'directions_title' => 'footer',
      'directions_geography' => 'footer',
      'geography' => 'footer',
      'property_features_title_' => 'footer',
      'features' => 'footer',
      'rmls_disclaimer' => 'footer',
    ),
    'classes' => array(),
  );
  $export['node|listing|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|listing|listing_flyer1';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'listing';
  $ds_layout->view_mode = 'listing_flyer1';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'footer' => array(
        0 => 'listing_title',
        1 => 'property_details_title_',
        2 => 'property_features_title_',
        3 => 'listing_description',
        4 => 'directions_title',
      ),
      'header' => array(
        0 => 'field_city',
        1 => 'field_address',
      ),
      'left' => array(
        0 => 'flyer_picture_440px_',
      ),
      'right' => array(
        0 => 'field_zipcode',
      ),
    ),
    'fields' => array(
      'listing_title' => 'footer',
      'property_details_title_' => 'footer',
      'property_features_title_' => 'footer',
      'listing_description' => 'footer',
      'field_city' => 'header',
      'directions_title' => 'footer',
      'flyer_picture_440px_' => 'left',
      'field_zipcode' => 'right',
      'field_address' => 'header',
    ),
    'classes' => array(),
  );
  $export['node|listing|listing_flyer1'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function oip_listing_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'classic_flyer';
  $ds_view_mode->label = 'Classic Flyer';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['classic_flyer'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'listing_flyer1';
  $ds_view_mode->label = 'Listing Flyer1';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['listing_flyer1'] = $ds_view_mode;

  return $export;
}
