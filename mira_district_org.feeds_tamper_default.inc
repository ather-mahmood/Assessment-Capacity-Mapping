<?php
/**
 * @file
 * mira_district_org.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function mira_district_org_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'csv_jar_org-operational_presence-explode';
  $feeds_tamper->importer = 'csv_jar_org';
  $feeds_tamper->source = 'Operational Presence';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['csv_jar_org-operational_presence-explode'] = $feeds_tamper;

  return $export;
}
