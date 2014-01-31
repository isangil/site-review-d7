<?php
/**
 * @file
 * site_review_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function site_review_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function site_review_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function site_review_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An event in time'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
  );
  return $items;
}
