<?php
/**
 * @file
 * site_review_side_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function site_review_side_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-side-menu_2012-annual-report-pdf:http://mcmsitereview.lternet.edu/sites/default/files/MCMLTER_2012_Annual_Report.pdf
  $menu_links['menu-side-menu_2012-annual-report-pdf:http://mcmsitereview.lternet.edu/sites/default/files/MCMLTER_2012_Annual_Report.pdf'] = array(
    'menu_name' => 'menu-side-menu',
    'link_path' => 'http://mcmsitereview.lternet.edu/sites/default/files/MCMLTER_2012_Annual_Report.pdf',
    'router_path' => '',
    'link_title' => '2012 Annual Report (pdf)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-side-menu_2012-annual-report-pdf:http://mcmsitereview.lternet.edu/sites/default/files/MCMLTER_2012_Annual_Report.pdf',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-side-menu_clothing-list:node/78
  $menu_links['menu-side-menu_clothing-list:node/78'] = array(
    'menu_name' => 'menu-side-menu',
    'link_path' => 'node/78',
    'router_path' => 'node/%',
    'link_title' => 'Clothing List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-side-menu_clothing-list:node/78',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-side-menu_logistics:node/79
  $menu_links['menu-side-menu_logistics:node/79'] = array(
    'menu_name' => 'menu-side-menu',
    'link_path' => 'node/79',
    'router_path' => 'node/%',
    'link_title' => 'Logistics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-side-menu_logistics:node/79',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-side-menu_mcm-lter-site-review-booklet-pdf:http://mcmsitereview.lternet.edu/sites/default/files/MCM_LTER_Site_Review_Booklet.pdf
  $menu_links['menu-side-menu_mcm-lter-site-review-booklet-pdf:http://mcmsitereview.lternet.edu/sites/default/files/MCM_LTER_Site_Review_Booklet.pdf'] = array(
    'menu_name' => 'menu-side-menu',
    'link_path' => 'http://mcmsitereview.lternet.edu/sites/default/files/MCM_LTER_Site_Review_Booklet.pdf',
    'router_path' => '',
    'link_title' => 'MCM LTER Site Review Booklet (pdf)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-side-menu_mcm-lter-site-review-booklet-pdf:http://mcmsitereview.lternet.edu/sites/default/files/MCM_LTER_Site_Review_Booklet.pdf',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-side-menu_principal-investigators:pi
  $menu_links['menu-side-menu_principal-investigators:pi'] = array(
    'menu_name' => 'menu-side-menu',
    'link_path' => 'pi',
    'router_path' => 'pi',
    'link_title' => 'Principal Investigators',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-side-menu_principal-investigators:pi',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('2012 Annual Report (pdf)');
  t('Clothing List');
  t('Logistics');
  t('MCM LTER Site Review Booklet (pdf)');
  t('Principal Investigators');


  return $menu_links;
}
