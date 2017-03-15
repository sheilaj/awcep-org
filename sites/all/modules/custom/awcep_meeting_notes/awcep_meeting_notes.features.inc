<?php
/**
 * @file
 * awcep_meeting_notes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function awcep_meeting_notes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function awcep_meeting_notes_node_info() {
  $items = array(
    'meeting_notes' => array(
      'name' => t('Meeting notes'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
