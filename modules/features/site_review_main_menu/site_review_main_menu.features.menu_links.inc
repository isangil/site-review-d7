<?php
/**
 * @file
 * site_review_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function site_review_main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_accomplishments:node/88
  $menu_links['main-menu_accomplishments:node/88'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/88',
    'router_path' => 'node/%',
    'link_title' => 'Accomplishments',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_accomplishments:node/88',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_agenda:agenda
  $menu_links['main-menu_agenda:agenda'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'agenda',
    'router_path' => 'agenda',
    'link_title' => 'Agenda',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_agenda:agenda',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_bibliography:biblio
  $menu_links['main-menu_bibliography:biblio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'biblio',
    'router_path' => 'biblio',
    'link_title' => 'Bibliography',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_bibliography:biblio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_outreach:outreach-list
  $menu_links['main-menu_outreach:outreach-list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'outreach-list',
    'router_path' => 'outreach-list',
    'link_title' => 'Outreach',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_outreach:outreach-list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_research-overview:research-overview
  $menu_links['main-menu_research-overview:research-overview'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'research-overview',
    'router_path' => 'research-overview',
    'link_title' => 'Research Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_research-overview:research-overview',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Accomplishments');
  t('Agenda');
  t('Bibliography');
  t('Home');
  t('Outreach');
  t('Research Overview');


  return $menu_links;
}
