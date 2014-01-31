<?php
/**
 * @file
 * site_review_principal_investigators.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function site_review_principal_investigators_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|principal_investigator|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'principal_investigator';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_pi_name',
        1 => 'field_pi_institution',
        2 => 'field_pi_email',
        3 => 'field_pi_url',
      ),
      'right' => array(
        4 => 'field_pi_photo',
      ),
    ),
    'fields' => array(
      'field_pi_name' => 'left',
      'field_pi_institution' => 'left',
      'field_pi_email' => 'left',
      'field_pi_url' => 'left',
      'field_pi_photo' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|principal_investigator|default'] = $ds_layout;

  return $export;
}
