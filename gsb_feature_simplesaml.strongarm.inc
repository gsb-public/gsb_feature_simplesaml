<?php
/**
 * @file
 * gsb_feature_simplesaml.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_simplesaml_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesaml_auth_access';
  $strongarm->value = '0';
  $export['simplesaml_auth_access'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesaml_auth_authsource';
  $strongarm->value = 'default-sp';
  $export['simplesaml_auth_authsource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesaml_auth_domain';
  $strongarm->value = 'stanford.edu';
  $export['simplesaml_auth_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesaml_auth_exclude';
  $strongarm->value = 'services/*';
  $export['simplesaml_auth_exclude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesaml_auth_first_login_destination';
  $strongarm->value = '';
  $export['simplesaml_auth_first_login_destination'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesaml_auth_hide_email';
  $strongarm->value = 1;
  $export['simplesaml_auth_hide_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesaml_auth_hide_password';
  $strongarm->value = 1;
  $export['simplesaml_auth_hide_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesaml_auth_installdir';
  $strongarm->value = '/var/www/html/[acquia:site_name]/library/simplesamlphp';
  $export['simplesaml_auth_installdir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesaml_auth_logout_destination';
  $strongarm->value = '<front>';
  $export['simplesaml_auth_logout_destination'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesaml_auth_pages';
  $strongarm->value = 'admin
admin/*
user
12Twenty-student';
  $export['simplesaml_auth_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesaml_auth_username';
  $strongarm->value = 'urn:mace:dir:attribute-def:uid';
  $export['simplesaml_auth_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesaml_auth_user_register';
  $strongarm->value = 1;
  $export['simplesaml_auth_user_register'] = $strongarm;

  return $export;
}
