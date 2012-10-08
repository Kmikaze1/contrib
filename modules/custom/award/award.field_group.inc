<?php
/**
 * @file
 * award.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function award_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_award_eligibility|node|award|form';
  $field_group->group_name = 'group_award_eligibility';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'award';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Eligibility information',
    'weight' => '3',
    'children' => array(
      0 => 'field_award_students',
      1 => 'field_award_study_level',
      2 => 'field_award_year_level',
      3 => 'field_award_travel_support',
      4 => 'field_award_citizenship',
      5 => 'field_award_financial_need',
      6 => 'field_award_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Eligibility information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Control eligibility for this award.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_award_eligibility|node|award|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_award_tags|node|award|form';
  $field_group->group_name = 'group_award_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'award';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Award Tags',
    'weight' => '13',
    'children' => array(
      0 => 'field_award_research_area',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Award Tags',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'These tags and categories are used to display awards and link them to programs and feature profiles.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_award_tags|node|award|form'] = $field_group;

  return $export;
}