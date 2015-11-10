<?php
/**
 * @file
 * ex_areau.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ex_areau_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ex_areau_node_info() {
  $items = array(
    'detail_full_width' => array(
      'name' => t('Detail - Full Width'),
      'base' => 'node_content',
      'description' => t('Een segment waar de tekst op normale positie staat.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'detail_text_top' => array(
      'name' => t('Detail - Text Top'),
      'base' => 'node_content',
      'description' => t('Een segment waar de tekst rechtsboven is uitgelijnd.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'item' => array(
      'name' => t('Item'),
      'base' => 'node_content',
      'description' => t('Een content type om de algemene onderdelen van Projecten, Interieur en Kunst & Vorm op te vangen.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'menu' => array(
      'name' => t('Menu - Basis'),
      'base' => 'node_content',
      'description' => t('Het content type dat alle inhoud waarop men kan doorklikken van het uitgebreide menu op de voorpagina beheert.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'menu_openhuis' => array(
      'name' => t('Menu - Open Huis'),
      'base' => 'node_content',
      'description' => t('Het content type dat specifiek het "Open Huis" / "Iconen" gedeelte beheert.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
