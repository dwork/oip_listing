<?php
/**
 * @file
 * oip_listing.css_injector_rules.inc
 */

/**
 * Implements hook_css_injector_rule().
 */
function oip_listing_css_injector_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'Listing Description';
  $rule->admin_description = '';
  $rule->css = '#listing_description {
   margin-left:10px;
}';
  $rule->media = 'all';
  $rule->preprocess = 1;
  $rule->inline = 0;
  $rule->page_visibility = 0;
  $rule->page_visibility_pages = '';
  $export['Listing Description'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'Listing Details';
  $rule->admin_description = '';
  $rule->css = '#listing_details_left{
    float: left;
    margin-left: 10px;
    width: 30%;
}
#listing_details_right{
    float: right;
    width: 60%;
}

#listing_details_clear{
    clear:both;
}';
  $rule->media = 'all';
  $rule->preprocess = 1;
  $rule->inline = 0;
  $rule->page_visibility = 0;
  $rule->page_visibility_pages = '';
  $export['Listing Details'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'Listing Display Address';
  $rule->admin_description = '';
  $rule->css = '#listing_displayaddress {
  color:red;
  font-weight:bold;
}';
  $rule->media = 'all';
  $rule->preprocess = 1;
  $rule->inline = 0;
  $rule->page_visibility = 0;
  $rule->page_visibility_pages = '';
  $export['Listing Display Address'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'Listing Title';
  $rule->admin_description = '';
  $rule->css = '#listing_title {
  background-color:lightgray;
  font-weight:bold;
}';
  $rule->media = 'all';
  $rule->preprocess = 1;
  $rule->inline = 0;
  $rule->page_visibility = 0;
  $rule->page_visibility_pages = '';
  $export['Listing Title'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'Printable Classic Flyer CSS';
  $rule->admin_description = 'Printable Flyer';
  $rule->css = '.flyer_container {
  font-size: 11pt;
  font-family: serif;
}

.page-flyer .zone-content { width: 900px; }
.page-flyer .container-12 .grid-9 { width: 900px; border: 2px solid gray;}

.flyer_region_border {
  border: 2px solid gray;
  padding: 5px 5px 5px 5px;
}
 
.ds-2col-stacked-fluid > .group-left .field { width: 95% } 

.classic-left {
  font-size: 12pt;
  margin-top: 10px;
  float: left;
  margin-left: 10px;
  width: 35%;
}

.classic-right {
  font-size: 12pt;
  margin-top: 10px;
  float: left;
  margin-left: 10px;
  width: 55%;
}

.classic-agent-left {
  float: left:
  width: 500px;
  padding: 2px 2px 2px 2px;
  height: 135px;
  text-align: center;
}

.classic-agent-right {
  float: right;
  width: 100px;
  padding: 2px 2px 2px 12px;
}

.classic-agents-left {
  float: left;
  width: 100px;
  paddiing: 5px 5px 5px 5px;
}

.classic-agents-middle {
    text-align: center;
  display: inline-block;
  width: 70%;
}

.classic-agents-right {
  float: right;
  width: 100px;
  paddiing: 5px 5px 5px 5px;

}

.classic-heading {
   text-align: center;
   font-size: 1.4em;
}

.classic-title-left {
  float: left;
  width: 16%;
  font-size: 1.6em;
  font-weight: bold;
  text-align: center;
  border-bottom: 1px dark gray;
}

.classic-title-middle {
   float: left;
   font-size: 1.1em;
   text-align: center;
   width: 73%;
}


.classic-title-right {
   float: right;
   font-size: 1.1em;
   text-align: center;
   width: 10%;
}

.font16 {
  font-size: 1.5em;
}

.strong {
  font-weight: bold;
}

.clear {
   height: 0;
   font-size: 1px;
   margin: 0;
   padding: 0;
   line-height: 0;
   clear: both;
}

.classic_row_full {
  float: left;
  width: 99%;
  margin-left: 10px;
  margin-right: 10px;
  margin-bottom: 5px;
}

.classic_row_left {
  float: left;
  width: 500px;
  margin-left: 10px;
}

.classic_row_right {
  padding-left: 10px;
  float: right;
  width: 285px;
}

.classic_row_col1 {
  float: left;
  width: 70px;
}

.classic_row_col2 {
  float: right;
  width: 400px;
}

.classic_row_col3 {
  float: left;
  width: 70px;
}

.classic_row_col4 {
  float: right;
  width: 190px;
}
 
.flyer_disclaimer {
  clear: both;
  font-size: 8pt;
  border: 1px solid gray;
}';
  $rule->media = 'all';
  $rule->preprocess = 0;
  $rule->inline = 0;
  $rule->page_visibility = 1;
  $rule->page_visibility_pages = 'flyer/classic/*';
  $export['Printable Classic Flyer CSS'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'Theme';
  $rule->admin_description = '';
  $rule->css = '#page{

}

.page a{
text-decoration: none;
}

#zone-menu ul.nice-menu{

}


#zone-menu ul.nice-menu{
-webkit-border-radius: 10px;
-moz-border-radius: 10px;
border-radius: 10px;
}

#zone-menu ul.nice-menu li.last{
border: none;
}

#zone-menu a{
font-size: 1.4em;
}

.zone{
margin: 1em 0;
}

@media screen and (max-width: 981px){
#admin-menu {display: none;}
.admin-menu #page {margin-top: -30px;}
}

@media screen and (max-width: 521px){
#zone-menu ul.nice-menu li{
float: none;
}
}

.ds-2col-stacked-fluid > .group-left {
  float: left; /* LTR */
  width: 70%;
}

.ds-2col-stacked-fluid > .group-right {
  float: right; /* LTR */
  width: 30%;
}
';
  $rule->media = 'all';
  $rule->preprocess = 1;
  $rule->inline = 0;
  $rule->page_visibility = 0;
  $rule->page_visibility_pages = '';
  $export['Theme'] = $rule;

  return $export;
}
