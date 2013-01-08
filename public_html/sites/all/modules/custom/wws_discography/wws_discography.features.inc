<?php
/**
 * @file
 * wws_discography.features.inc
 */

/**
 * Implements hook_views_api().
 */
function wws_discography_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function wws_discography_node_info() {
  $items = array(
    'album' => array(
      'name' => t('album'),
      'base' => 'node_content',
      'description' => t('Music Album'),
      'has_title' => '1',
      'title_label' => t('Album Title'),
      'help' => '',
    ),
  );
  return $items;
}
