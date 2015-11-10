<?php
/**
 * @file
 * ex_areau.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ex_areau_taxonomy_default_vocabularies() {
  return array(
    'type' => array(
      'name' => 'Type',
      'machine_name' => 'type',
      'description' => 'A vocabulary designed to categorize list views.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
