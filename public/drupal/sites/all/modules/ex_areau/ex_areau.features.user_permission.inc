<?php
/**
 * @file
 * ex_areau.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ex_areau_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'access statistics'.
  $permissions['access statistics'] = array(
    'name' => 'access statistics',
    'roles' => array(),
    'module' => 'statistics',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
    'module' => 'block',
  );

  // Exported permission: 'administer breadcrumbs'.
  $permissions['administer breadcrumbs'] = array(
    'name' => 'administer breadcrumbs',
    'roles' => array(),
    'module' => 'disable_breadcrumbs',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(),
    'module' => 'image',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
    'module' => 'menu',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer statistics'.
  $permissions['administer statistics'] = array(
    'name' => 'administer statistics',
    'roles' => array(),
    'module' => 'statistics',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'create detail_full_width content'.
  $permissions['create detail_full_width content'] = array(
    'name' => 'create detail_full_width content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create detail_text_top content'.
  $permissions['create detail_text_top content'] = array(
    'name' => 'create detail_text_top content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create item content'.
  $permissions['create item content'] = array(
    'name' => 'create item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create menu content'.
  $permissions['create menu content'] = array(
    'name' => 'create menu content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create menu_openhuis content'.
  $permissions['create menu_openhuis content'] = array(
    'name' => 'create menu_openhuis content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: 'delete any detail_full_width content'.
  $permissions['delete any detail_full_width content'] = array(
    'name' => 'delete any detail_full_width content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any detail_text_top content'.
  $permissions['delete any detail_text_top content'] = array(
    'name' => 'delete any detail_text_top content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any item content'.
  $permissions['delete any item content'] = array(
    'name' => 'delete any item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any menu content'.
  $permissions['delete any menu content'] = array(
    'name' => 'delete any menu content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any menu_openhuis content'.
  $permissions['delete any menu_openhuis content'] = array(
    'name' => 'delete any menu_openhuis content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own detail_full_width content'.
  $permissions['delete own detail_full_width content'] = array(
    'name' => 'delete own detail_full_width content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own detail_text_top content'.
  $permissions['delete own detail_text_top content'] = array(
    'name' => 'delete own detail_text_top content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own item content'.
  $permissions['delete own item content'] = array(
    'name' => 'delete own item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own menu content'.
  $permissions['delete own menu content'] = array(
    'name' => 'delete own menu content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own menu_openhuis content'.
  $permissions['delete own menu_openhuis content'] = array(
    'name' => 'delete own menu_openhuis content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in type'.
  $permissions['delete terms in type'] = array(
    'name' => 'delete terms in type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'disable node breadcrumbs'.
  $permissions['disable node breadcrumbs'] = array(
    'name' => 'disable node breadcrumbs',
    'roles' => array(),
    'module' => 'disable_breadcrumbs',
  );

  // Exported permission: 'edit any detail_full_width content'.
  $permissions['edit any detail_full_width content'] = array(
    'name' => 'edit any detail_full_width content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any detail_text_top content'.
  $permissions['edit any detail_text_top content'] = array(
    'name' => 'edit any detail_text_top content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any item content'.
  $permissions['edit any item content'] = array(
    'name' => 'edit any item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any menu content'.
  $permissions['edit any menu content'] = array(
    'name' => 'edit any menu content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any menu_openhuis content'.
  $permissions['edit any menu_openhuis content'] = array(
    'name' => 'edit any menu_openhuis content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own detail_full_width content'.
  $permissions['edit own detail_full_width content'] = array(
    'name' => 'edit own detail_full_width content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own detail_text_top content'.
  $permissions['edit own detail_text_top content'] = array(
    'name' => 'edit own detail_text_top content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own item content'.
  $permissions['edit own item content'] = array(
    'name' => 'edit own item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own menu content'.
  $permissions['edit own menu content'] = array(
    'name' => 'edit own menu content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own menu_openhuis content'.
  $permissions['edit own menu_openhuis content'] = array(
    'name' => 'edit own menu_openhuis content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in type'.
  $permissions['edit terms in type'] = array(
    'name' => 'edit terms in type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(),
    'module' => 'php',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(),
    'module' => 'ctools',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view post access counter'.
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(),
    'module' => 'statistics',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(),
    'module' => 'system',
  );

  return $permissions;
}
