<?php
/**
 * @file
 * oip_listing.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function oip_listing_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Mortgage Calculator Widget';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'mortgage_calculator';
  $fe_block_boxes->body = '<!-- MORTGAGE LOAN CALCULATOR BEGIN -->
<script type="text/javascript">
mlcalc_default_calculator = \'loan\';
mlcalc_currency_code = \'usd\';
mlcalc_amortization = \'year_nc\';
mlcalc_purchase_price = \'300,000\';
mlcalc_down_payment = \'10\';
mlcalc_mortgage_term = \'30\';
mlcalc_interest_rate = \'4.5\';
mlcalc_property_tax = \'3,000\';
mlcalc_property_insurance = \'1,500\';
mlcalc_pmi = \'0.52\';
mlcalc_loan_amount = \'150,000\';
mlcalc_loan_term = \'15\';
</script>
<script type="text/javascript">if(typeof jQuery == "undefined"){document.write(unescape("%3Cscript src=\'" + (document.location.protocol == \'https:\' ? \'https:\' : \'http:\') + "//ajax.googleapis.com/ajax/libs/jquery/1.7.1/jquery.min.js\' type=\'text/javascript\'%3E%3C/script%3E"));mlcalc_jquery_noconflict=1;};</script><div style="font-weight:normal;font-size:9px;font-family:Tahoma;padding:0;margin:0;border:0;text-align:center;background:transparent;color:#EEEEEE;width:150px;" class="mlcalc_d3d3LmFtb3J0aXphdGlvbi1jYWxjLmNvbQ== mlcalc_ua_VUEtODE4MzUxOC0x" id="mlcalcWidgetHolder"><script type="text/javascript">document.write(unescape("%3Cscript src=\'" + (document.location.protocol == \'https:\' ? \'https://ssl.mlcalc.com\' : \'http://cdn.mlcalc.com\') + "/widget-narrow.js\' type=\'text/javascript\'%3E%3C/script%3E"));</script><a href="http://www.amortization-calc.com/" style="font-weight:normal;font-size:9px;font-family:Tahoma;color:#EEEEEE;text-decoration:none;" class="panelItem">Amortization Schedule</a> <a href="http://www.mlcalc.com/mortgage-calculator/" style="font-weight:normal;font-size:9px;font-family:Tahoma;color:#EEEEEE;text-decoration:none;" class="panelItem secondaryLink">Mortgage Calculator</a></div>
<!-- MORTGAGE LOAN CALCULATOR END -->
';

  $export['mortgage_calculator'] = $fe_block_boxes;

  return $export;
}
