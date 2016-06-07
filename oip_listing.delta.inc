<?php
/**
 * @file
 * oip_listing.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function oip_listing_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'printable_flyers';
  $delta->name = 'Printable_Flyers';
  $delta->description = 'OIP Printable Flyers';
  $delta->theme = 'oip';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_oip_settings' => array(
      'alpha_responsive' => 0,
      'alpha_css' => array(
        'alpha-reset.css' => 0,
        'alpha-mobile.css' => 0,
        'alpha-alpha.css' => 0,
        'omega-text.css' => 0,
        'omega-branding.css' => 0,
        'omega-menu.css' => 0,
        'omega-forms.css' => 0,
        'omega-visuals.css' => 0,
        'global.css' => 0,
      ),
      'alpha_region_sidebar_first_zone' => NULL,
      'alpha_region_sidebar_first_equal_height_element' => FALSE,
      'alpha_region_preface_first_zone' => NULL,
      'alpha_region_preface_first_equal_height_element' => FALSE,
      'alpha_region_user_first_zone' => NULL,
      'alpha_region_user_first_equal_height_element' => FALSE,
      'alpha_region_postscript_first_zone' => NULL,
      'alpha_region_postscript_first_equal_height_element' => FALSE,
      'alpha_region_header_first_zone' => NULL,
      'alpha_region_header_first_equal_height_element' => FALSE,
      'alpha_region_menu_zone' => NULL,
      'alpha_region_menu_equal_height_element' => FALSE,
      'alpha_region_branding_zone' => NULL,
      'alpha_region_branding_equal_height_element' => FALSE,
      'alpha_region_preface_second_zone' => NULL,
      'alpha_region_preface_second_equal_height_element' => FALSE,
      'alpha_region_postscript_second_zone' => NULL,
      'alpha_region_postscript_second_equal_height_element' => FALSE,
      'alpha_region_user_second_zone' => NULL,
      'alpha_region_user_second_equal_height_element' => FALSE,
      'alpha_region_header_second_zone' => NULL,
      'alpha_region_header_second_equal_height_element' => FALSE,
      'alpha_region_preface_third_zone' => NULL,
      'alpha_region_preface_third_equal_height_element' => FALSE,
      'alpha_region_postscript_third_zone' => NULL,
      'alpha_region_postscript_third_equal_height_element' => FALSE,
      'alpha_region_postscript_fourth_zone' => NULL,
      'alpha_region_postscript_fourth_equal_height_element' => FALSE,
    ),
    'color_oip_files' => NULL,
    'color_oip_logo' => NULL,
    'color_oip_palette' => NULL,
    'color_oip_stylesheets' => NULL,
    'color_oip_screenshot' => NULL,
  );
  $export['printable_flyers'] = $delta;

  return $export;
}
