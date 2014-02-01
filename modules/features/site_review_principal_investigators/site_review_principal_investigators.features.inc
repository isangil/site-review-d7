<?php
/**
 * @file
 * site_review_principal_investigators.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function site_review_principal_investigators_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function site_review_principal_investigators_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function site_review_principal_investigators_node_info() {
  $items = array(
    'principal_investigator' => array(
      'name' => t('Principal Investigator'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
