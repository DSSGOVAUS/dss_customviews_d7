<?php
/* Implements hook_views_default_views() */
function dss_customviews_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'dss_customviews'). '/views', '/.inc/');
  foreach ($files as $filepath => $file) {
    require $filepath;
    if (isset($view)) {
      $views[$view->name] = $view;
    }
  }
  return $views;
}
