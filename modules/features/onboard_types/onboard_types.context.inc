<?php
/**
 * @file
 * onboard_types.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function onboard_types_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clerks';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-manage-my-city' => array(
          'module' => 'menu',
          'delta' => 'menu-manage-my-city',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['clerks'] = $context;

  return $export;
}