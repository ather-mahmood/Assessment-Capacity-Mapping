<?php
/**
 * @file
 * mira_district_org.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mira_district_org_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_assessment_coord|node|jar_org|form';
  $field_group->group_name = 'group_assessment_coord';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jar_org';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'Assessment Coordinator Details',
    'weight' => '12',
    'children' => array(
      0 => 'field_assess_name',
      1 => 'field_ass_telephone',
      2 => 'field_ass_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-assessment-coord field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_assessment_coord|node|jar_org|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|jar_org|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jar_org';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacts',
    'weight' => '4',
    'children' => array(
      0 => 'group_head_of_office',
      1 => 'group_assessment_coord',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact|node|jar_org|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_head_of_office|node|jar_org|form';
  $field_group->group_name = 'group_head_of_office';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jar_org';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'Head of Office Details',
    'weight' => '11',
    'children' => array(
      0 => 'field_head_of_org_name',
      1 => 'field_telephone',
      2 => 'field_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-head-of-office field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_head_of_office|node|jar_org|form'] = $field_group;

  return $export;
}
