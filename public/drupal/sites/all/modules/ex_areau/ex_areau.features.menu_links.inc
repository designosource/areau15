<?php
/**
 * @file
 * ex_areau.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ex_areau_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_contact:http://areau.be/#last.
  $menu_links['main-menu_contact:http://areau.be/#last'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://areau.be/#last',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact:http://areau.be/#last',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_interieur:Interieur.
  $menu_links['main-menu_interieur:Interieur'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Interieur',
    'router_path' => 'interieur',
    'link_title' => 'Interieur',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_interieur:Interieur',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_kunst--vorm:Kunst.
  $menu_links['main-menu_kunst--vorm:Kunst'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Kunst',
    'router_path' => 'kunst',
    'link_title' => 'Kunst + Vorm',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_kunst--vorm:Kunst',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_ons-verhaal:ons-verhaal.
  $menu_links['main-menu_ons-verhaal:ons-verhaal'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ons-verhaal',
    'router_path' => 'ons-verhaal',
    'link_title' => 'Ons Verhaal',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_ons-verhaal:ons-verhaal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_open-huis:http://areau.be/#last.
  $menu_links['main-menu_open-huis:http://areau.be/#last'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://areau.be/#last',
    'router_path' => '',
    'link_title' => 'Open Huis',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_open-huis:http://areau.be/#last',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_projecten:Projecten.
  $menu_links['main-menu_projecten:Projecten'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Projecten',
    'router_path' => 'projecten',
    'link_title' => 'Projecten',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_projecten:Projecten',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: management_backup-and-migrate:admin/config/system/backup_migrate.
  $menu_links['management_backup-and-migrate:admin/config/system/backup_migrate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/backup_migrate',
    'router_path' => 'admin/config/system/backup_migrate',
    'link_title' => 'Backup and Migrate',
    'options' => array(
      'attributes' => array(
        'title' => 'Backup/restore your database and files or migrate data to or from another Drupal site.',
      ),
      'identifier' => 'management_backup-and-migrate:admin/config/system/backup_migrate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_disable-breadcrumbs:admin/appearance/disable_breadcrumbs.
  $menu_links['management_disable-breadcrumbs:admin/appearance/disable_breadcrumbs'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/appearance/disable_breadcrumbs',
    'router_path' => 'admin/appearance/disable_breadcrumbs',
    'link_title' => 'Disable breadcrumbs',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for Disable breadcrumbs',
      ),
      'identifier' => 'management_disable-breadcrumbs:admin/appearance/disable_breadcrumbs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_appearance:admin/appearance',
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu.
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_management:admin/structure/menu/manage/management.
  $menu_links['management_management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(
      'identifier' => 'management_management:admin/structure/menu/manage/management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_navigation:admin/structure/menu/manage/navigation.
  $menu_links['management_navigation:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu.
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Backup and Migrate');
  t('Contact');
  t('Disable breadcrumbs');
  t('Interieur');
  t('Kunst + Vorm');
  t('Main menu');
  t('Management');
  t('Navigation');
  t('Ons Verhaal');
  t('Open Huis');
  t('Projecten');
  t('User menu');

  return $menu_links;
}
