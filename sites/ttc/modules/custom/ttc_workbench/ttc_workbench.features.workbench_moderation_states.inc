<?php
/**
 * @file
 * ttc_workbench.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function ttc_workbench_workbench_moderation_export_states() {
  $items = array(
    'archived' => array(
      'name' => 'archived',
      'label' => 'Archived',
      'description' => 'Removed from public view',
      'weight' => 0,
    ),
    'draft' => array(
      'name' => 'draft',
      'label' => 'Draft',
      'description' => 'Work in progress',
      'weight' => -10,
    ),
    'needs_review' => array(
      'name' => 'needs_review',
      'label' => 'Needs Review',
      'description' => 'Ready for approval',
      'weight' => 0,
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'Published',
      'description' => 'Make this version live',
      'weight' => -10,
    ),
  );
  return $items;
}
