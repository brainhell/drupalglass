; Drush Make file for the cms distribution
api = 2
core = 7.x

; Modules
; -------


projects[module_filter][subdir] = contrib
projects[module_filter][version] = "2.x-dev"

; CMS Core
; -------

projects[cms_core][subdir] = cms
projects[cms_core][version] = "1.x-dev"


projects[libraries][subdir] = contrib

projects[ctools][subdir] = contrib

projects[bean][subdir] = contrib

projects[block_class][subdir] = contrib

projects[elements][subdir] = contrib

projects[entity][subdir] = contrib

projects[entity_view_mode][subdir] = contrib

projects[features][subdir] = contrib
; Features 2.10 is buggy with wysiwyg feature: https://www.drupal.org/node/2723331
projects[features][version] = "2.9"
; Patch for UUID menu link export
projects[features][patch][] = "https://www.drupal.org/files/issues/features-menu_links_uuid-2353585-21-D7.patch"

projects[uuid][subdir] = contrib
; projects[uuid][version] = "1.x-dev"

projects[uuid_features][subdir] = contrib
projects[uuid_features][version] = "1.x-dev"
; ~update 19/07/2015 patch is committed projects[uuid_features][patch][] = "https://www.drupal.org/files/issues/uuid_features-2533316-1-EntityMalformedException-when-used-tog.patch"
; ~update 03/06/2015 patch is committed projects[uuid_features][patch][] = "https://www.drupal.org/files/issues/fix-packaged-files-2488804-3.patch"

projects[features_override][subdir] = contrib

projects[fences][subdir] = contrib
projects[fences][version] = "1.x-dev"

projects[file_entity][subdir] = contrib

projects[field_collection][subdir] = contrib

projects[field_formatter_class][subdir] = contrib

projects[field_formatter_settings][subdir] = contrib

projects[field_group][subdir] = contrib

projects[globalredirect][subdir] = contrib

projects[html5_tools][subdir] = contrib

projects[image_hover_effects][subdir] = contrib

projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = "3.0-alpha3"

projects[link][subdir] = contrib

projects[media][subdir] = contrib
projects[media][version] = "2.0-beta1"
; Media Browser Multi Select
projects[media][patch][] = "https://www.drupal.org/files/issues/allow_selecting_of-951004-136.patch"
; Fix display toggle
projects[media][patch][] = "https://www.drupal.org/files/issues/incorrect-logic-display-value-2545738-1.patch"

projects[menu_block][subdir] = contrib

projects[multiform][subdir] = contrib

projects[pathauto][subdir] = contrib

projects[plupload][subdir] = contrib

projects[smart_trim][subdir] = contrib

projects[strongarm][subdir] = contrib

projects[special_menu_items][subdir] = contrib

projects[token][subdir] = contrib

projects[views][subdir] = contrib

projects[views_bootstrap][subdir] = contrib
projects[views_bootstrap][version] = "3.x-dev"
projects[views_bootstrap][patch][] = "http://www.drupal.org/files/issues/views_bootstrap-thumbails-columns-per-device-size-2203111-40.patch"

projects[views_fieldsets][subdir] = contrib

projects[bootstrap][type] = theme
projects[glazed_free][type] = theme

libraries[plupload][download][type] = "get"
libraries[plupload][download][url] = "https://github.com/moxiecode/plupload/archive/v1.5.8.zip"
libraries[plupload][patch][] = "https://www.drupal.org/files/issues/plupload-1_5_8-rm_examples-1903850-21.patch"

; CMS Blog
; -------

projects[cms_blog][subdir] = cms
projects[cms_blog][version] = "1.x-dev"

projects[service_links][subdir] = contrib

projects[tagclouds][subdir] = contrib

; CMS Events
; -------

projects[cms_events][subdir] = cms
projects[cms_events][version] = "1.x-dev"

projects[addressfield][subdir] = contrib

projects[addressfield_tokens][subdir] = contrib

projects[date][subdir] = contrib

projects[registration][subdir] = contrib

; CMS News
; -------

projects[cms_news][subdir] = cms
projects[cms_news][version] = "1.x-dev"

; CMS Portfolio
; -------

projects[cms_portfolio][subdir] = cms
projects[cms_portfolio][version] = "1.x-dev"

projects[image_field_caption][subdir] = contrib
projects[image_field_caption][patch][] = "https://www.drupal.org/files/issues/views_strip_caption-2345635-8.patch"

; CMS WYSIWYG
; -------

projects[cms_wysiwyg][subdir] = cms
projects[cms_wysiwyg][version] = "1.x-dev"

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = "2.x-dev"

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.5.5/ckeditor_4.5.5_full.zip"
libraries[ckeditor][directory_name] = "ckeditor"
