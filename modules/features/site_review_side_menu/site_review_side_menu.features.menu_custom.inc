<?php
/**
 * @file
 * site_review_side_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function site_review_side_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-side-menu.
  $menus['menu-side-menu'] = array(
    'menu_name' => 'menu-side-menu',
    'title' => 'Side Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Side Menu');


  return $menus;
}
