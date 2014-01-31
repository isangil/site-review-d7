<?php

/**
 * @file
 * Enables modules and site configuration for a Site Review site installation.
 */

/**
 * Implements hook_date_format_types().
 */
function site_review_date_format_types() {
  return array(
    'iso_8601' => t('ISO 8601'),
    'year' => t('Year'),
  );
}

/**
 * Implements hook_date_formats().
 */
function site_review_date_formats() {
  return array(
    array(
      'type' => 'iso_8601',
      'format' => 'Y-m-d\TH:i:sO',
      'locales' => array(),
    ),
    array(
      'type' => 'year',
      'format' => 'Y',
      'locales' => array(),
    ),
  );
}

/**
 * Preprocess the install page variables to add our logo.
 */
function site_review_process_maintenance_page(&$variables) {
  $variables['logo'] = drupal_get_path('profile', 'site_review') . '/logo.png';
}

/**
 * Implements hook_entity_info().
 */
function site_review_entity_info() {
  $info = array();

  // Expose the biblio_contributors_data table as an entity base table so that
  // we can make entity references to biblio authors.
  if (module_exists('biblio')) {
    $info['biblio_contributor'] = array(
      'label' => t('Biblio authors'),
      'base table' => 'biblio_contributor_data',
      'entity keys' => array(
        'id' => 'cid',
        'label' => 'name',
      ),
    );
  }

  return $info;
}

/**
 * Implements hook_preprocess_HOOK().
 *
 * Fix ECK entities to not display a title if they do not have title properies.
 */
function site_review_preprocess_entity(&$variables) {
  $entity_type = $variables['elements']['#entity_type'];
  $info = entity_get_info($entity_type);
  if (strpos($info['base table'], 'eck') !== FALSE && empty($info['entity keys']['label'])) {
    $variables['page'] = TRUE;
  }
}

/**
 * Implements hook_field_widget_WIDGET_TYPE_form_alter().
 *
 * Tweak the email widget to use an HTML5 input element.
 */
function site_review_field_widget_email_textfield_form_alter(&$element, &$form_state, $context) {
  $element['email']['#type'] = 'emailfield';
}

/**
 * Implements hook_field_widget_WIDGET_TYPE_form_alter().
 *
 * Tweak the number widget to use an HTML5 input element.
 */
function site_review_field_widget_number_form_alter(&$element, &$form_state, $context) {
  if ($context['field']['type'] == 'number_integer') {
    $element['value']['#type'] = 'numberfield';
    if (drupal_strlen($context['instance']['settings']['min'])) {
      $element['value']['#min'] = $context['instance']['settings']['min'];
    }
    if (drupal_strlen($context['instance']['settings']['max'])) {
      $element['value']['#max'] = $context['instance']['settings']['max'];
    }
  }
}
