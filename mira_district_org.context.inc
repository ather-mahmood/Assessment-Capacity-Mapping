<?php
/**
 * @file
 * mira_district_org.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mira_district_org_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'jar_organizations';
  $context->description = '';
  $context->tag = 'JAR';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'jar_org_indexed:page' => 'jar_org_indexed:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-00zC4SrWRO0Bfa4t4Qmn4J5eElqJyfIn' => array(
          'module' => 'facetapi',
          'delta' => '00zC4SrWRO0Bfa4t4Qmn4J5eElqJyfIn',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('JAR');
  $export['jar_organizations'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'office_details';
  $context->description = '';
  $context->tag = 'JAR';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'office-details' => 'office-details',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-jar_org_office-block_1' => array(
          'module' => 'views',
          'delta' => 'jar_org_office-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-jar_org_office-jar_org_off' => array(
          'module' => 'views',
          'delta' => 'jar_org_office-jar_org_off',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-Zhq2U0cDKnSRf0Hxr5IZIeskcFdvDAeg' => array(
          'module' => 'facetapi',
          'delta' => 'Zhq2U0cDKnSRf0Hxr5IZIeskcFdvDAeg',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-PQzlfcG11mdrQzvmssmS59QKS0XamUG0' => array(
          'module' => 'facetapi',
          'delta' => 'PQzlfcG11mdrQzvmssmS59QKS0XamUG0',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('JAR');
  $export['office_details'] = $context;

  return $export;
}
