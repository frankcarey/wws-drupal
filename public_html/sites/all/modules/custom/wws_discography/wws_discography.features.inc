<?php
/**
 * @file
 * wws_discography.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wws_discography_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}

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
      'name' => t('Album'),
      'base' => 'node_content',
      'description' => t('Music Album'),
      'has_title' => '1',
      'title_label' => t('Album Title'),
      'help' => '',
    ),
    'tracks' => array(
      'name' => t('Tracks'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Track Title'),
      'help' => '',
    ),
  );
  return $items;
}
