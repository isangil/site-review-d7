<?php

/**
 * Implements hook_token_info().
 */
function deims_token_info() {

  $info['tokens']['site']['station-acronym'] = array(
    'name' => t('Station acronym'),
    'description' => '',
  );


  return $info;
}

/**
 * Implements hook_tokens().
 */
function deims_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $langcode = !empty($options['lanuage']) ? $options['language']->language : NULL;
  $sanitize = !empty($options['sanitize']);
  $replacements = array();

  if ($type == 'site') {
    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'station-acronym':
          $acronym = variable_get('station_acronym', 'STATION');
          $replacements[$original] = $sanitize ? check_plain($acronym) : $acronym;
          break;
      }
    }
  }

  return $replacements;
}
