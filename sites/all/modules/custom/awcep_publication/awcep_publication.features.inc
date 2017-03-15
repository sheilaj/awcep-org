<?php
/**
 * @file
 * awcep_publication.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function awcep_publication_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function awcep_publication_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function awcep_publication_image_default_styles() {
  $styles = array();

  // Exported image style: announcement.
  $styles['announcement'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'announcement',
  );

  // Exported image style: fact.
  $styles['fact'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'fact',
  );

  // Exported image style: page.
  $styles['page'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'page',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function awcep_publication_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('Announcement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'awcep_publication' => array(
      'name' => t('AWCEP publication'),
      'base' => 'node_content',
      'description' => t('AWCEP publication or presentation. These items will be listed on the "AWCEP publications" page. Privacy settings will be respected; a private item will only show up on the list for authorised users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'fact' => array(
      'name' => t('Fact'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'link' => array(
      'name' => t('Link - no longer used'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
