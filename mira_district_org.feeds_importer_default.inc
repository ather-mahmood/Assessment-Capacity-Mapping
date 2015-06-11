<?php
/**
 * @file
 * mira_district_org.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function mira_district_org_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_jar_org';
  $feeds_importer->config = array(
    'name' => 'CSV Import JAR Organization',
    'description' => 'Import organization name, Acronym, and contact details.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Organization Name',
            'target' => 'field_organization_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Acronym',
            'target' => 'field_acronym',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Operational Presence',
            'target' => 'field_operational_presence',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Head of Organization Name',
            'target' => 'field_head_of_org_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Telephone',
            'target' => 'field_ass_telephone',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Email',
            'target' => 'field_ass_email',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Assessment Focal Person Name',
            'target' => 'field_assess_name',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Telephone',
            'target' => 'field_telephone',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Email',
            'target' => 'field_email',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'jar_org',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_jar_org'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_office_details';
  $feeds_importer->config = array(
    'name' => 'CSV Office Details',
    'description' => 'CSV import for Office Details Content Type for JAR Organizations',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Organization',
            'target' => 'field_organization:label',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Office Type',
            'target' => 'field_office_type',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'No. PDAs/Android',
            'target' => 'field_no_pdas_android',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Staf Male',
            'target' => 'field_staf_male',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Staff Female',
            'target' => 'field_staff_female',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'No. of vehicles',
            'target' => 'field_no_of_vehicles',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'City',
            'target' => 'field_address:locality',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'District',
            'target' => 'field_district',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'office_details',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_office_details'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'locations';
  $feeds_importer->config = array(
    'name' => 'Locations',
    'description' => 'To import locations',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Pcode',
            'target' => 'field_pcode',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'WKT',
            'target' => 'field_wkt:wkt',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Parent',
            'target' => 'parent',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'location',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['locations'] = $feeds_importer;

  return $export;
}
