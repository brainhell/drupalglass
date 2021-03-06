<?php
$form['glazed_settings']['custom_css'] = array(
  '#title' => t('Custom CSS & Javascript'),
  '#type' => 'fieldset',
  '#description' => t("Sometimes you don't need a subtheme and some custom CSS is enough to get the design you want. This CSS will be attached after the theme and allows you to customize your site without needing the additional complexity of a subtheme."),
  '#collapsible' => TRUE,
  '#collapsed' => TRUE,
   '#weight' => 4,
);

$form['glazed_settings']['custom_css']['custom_css_site'] = array(
  '#type' => 'textarea',
  '#title' => t('Sitewide CSS'),
  '#default_value' =>  theme_get_setting('custom_css_site'),
  '#rows' => 15,
);

$form['glazed_settings']['custom_css']['custom_javascript_site'] = array(
  '#type' => 'textarea',
  '#title' => t('Sitewide Javascript'),
  '#default_value' =>  theme_get_setting('custom_javascript_site'),
  '#rows' => 15,
);

$form['glazed_settings']['custom_css']['stlink'] = array(
  '#type' => 'checkbox',
  '#description' => t('SooperThemes attribution homeopage link in footer.'),
  '#title' => t('SooperThemes Link'),
  '#default_value' => ((theme_get_setting('stlink') !== null)) ? theme_get_setting('stlink') : 0,
);
