api = "2"
core = "7.x"

; -----------------------------------------------------------------------------
; Contributed modules
; -----------------------------------------------------------------------------

projects[addressfield][version] = "1.0-beta5"
projects[addressfield][subdir] = "contrib"

projects[admin_menu][version] = "3.0-rc4"
projects[admin_menu][subdir] = "contrib"

projects[admin_select][version] = "1.3"
projects[admin_select][subdir] = "contrib"

projects[biblio][version] = "1.0-rc7"
projects[biblio][subdir] = "contrib"

projects[ctools][version] = "1.3"
projects[ctools][subdir] = "contrib"

projects[date][version] = "2.7"
projects[date][subdir] = "contrib"

projects[ds][version] = "2.6"
projects[ds][subdir] = "contrib"

projects[eck][version] = "2.0-rc2"
projects[eck][subdir] = "contrib"
; Add entity access alter for ECK entities.
; @see https://drupal.org/node/1969394
projects[eck][patch][] = "http://drupal.org/files/1969394-eck-entity-access-alter.patch"

projects[elements][version] = "1.x-dev"
projects[elements][subdir] = "contrib"

projects[email][version] = "1.2"
projects[email][subdir] = "contrib"

projects[entity][version] = "1.1"
projects[entity][subdir] = "contrib"
; Fix for entity_metadata_no_hook_node_access() and new entity objects (required to work with inline_entity_form).
; @see https://drupal.org/node/1780646
projects[entity][patch][] = "http://drupal.org/files/entity-entity_access-1780646-107.patch"

projects[entityreference][version] = "1.0"
projects[entityreference][subdir] = "contrib"
; Allow the 'Default' view mode to be selected in formatters
; @see https://drupal.org/node/2035699
projects[entityreference][patch][] = "http://drupal.org/files/2035699-formatter-default-view-mode.patch"

projects[entity_view_mode][version] = "1.0-rc1"
projects[entity_view_mode][subdir] = "contrib"

projects[features][version] = "2.0"
projects[features][subdir] = "contrib"

projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][subdir] = "contrib"

projects[field_referenced_delete][version] = "1.0-rc4"
projects[field_referenced_delete][subdir] = "contrib"

projects[field_validation][version] = "2.3"
projects[field_validation][subdir] = "contrib"

projects[file_download_count][version] = "1.0-rc1"
projects[file_download_count][subdir] = "contrib"

; Dave Reid maintains this, ok to use dev for now.
projects[file_entity][version] = "2.x-dev"
projects[file_entity][subdir] = "contrib"

projects[filefield_sources][version] = "1.8"
projects[filefield_sources][subdir] = "contrib"
; Ensure files that already exist in the files directory are left alone.
; @see https://drupal.org/node/1492374
projects[filefield_sources][patch][] = "http://drupal.org/files/1492374-ffs-attach-file-same-path.patch"
; Only show files with relevant extensions in the attach select list.
; @see https://drupal.org/node/2006436
projects[filefield_sources][patch][] = "http://drupal.org/files/2006436-file-attach-extension-filter.patch"
; Show the actual attach upload path using drupal_realpath()
; @see https://drupal.org/node/2033269
projects[filefield_sources][patch][] = "http://drupal.org/files/2033269-attach-realpath.patch"

; @todo Change to 1.3 release when available.
projects[field_group][version] = "1.x-dev"
projects[field_group][subdir] = "contrib"

projects[flag][version] = "3.0-rc1"
projects[flag][subdir] = "contrib"

projects[flexslider][version] = "2.0-alpha1"
projects[flexslider][subdir] = "contrib"

projects[geofield][version] = "1.2"
projects[geofield][subdir] = "contrib"

projects[geophp][version] = "1.7"
projects[geophp][subdir] = "contrib"

projects[helper][version] = "1.1"
projects[helper][subdir] = "contrib"

projects[libraries][version] = "2.1"
projects[libraries][subdir] = "contrib"

projects[link][version] = "1.1"
projects[link][subdir] = "contrib"

projects[media][version] = "2.x-dev"
projects[media][subdir] = "contrib"

projects[menu_block][version] = "2.3"
projects[menu_block][subdir] = "contrib"

projects[module_filter][version] = "1.7"
projects[module_filter][subdir] = "contrib"

projects[name][version] = "1.9"
projects[name][subdir] = "contrib"

projects[noggin][version] = "1.1"
projects[noggin][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[pathauto_persist][version] = "1.3"
projects[pathauto_persist][subdir] = "contrib"

projects[print][version] = "2.x-dev"
projects[print][subdir] = "contrib"

projects[rules][version] = "2.3"
projects[rules][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[superfish][version] = "1.9"
projects[superfish][subdir] = "contrib"

projects[taxonomy_csv][version] = "5.10"
projects[taxonomy_csv][subdir] = "contrib"

projects[term_reference_tree][version] = "1.10"
projects[term_reference_tree][subdir] = "contrib"
; Add filtering to the widget
; @see https://drupal.org/node/2007164
projects[term_reference_tree][patch][] = "http://drupal.org/files/2007164-filter.patch"

projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[token_field][version] = "1.x-dev"
projects[token_field][subdir] = "contrib"

projects[token_formatters][version] = "1.2"
projects[token_formatters][subdir] = "contrib"

; @todo Change this to 1.1 once that version is released.
projects[url][version] = "1.x"
projects[url][subdir] = "contrib"

projects[views][version] = "3.8"
projects[views][subdir] = "contrib"

projects[views_bulk_operations][version] = "3.1" 
projects[views_bulk_operations][subdir] = "contrib"

projects[views_content_cache][version] = "3.0-alpha3"
projects[views_content_cache][subdir] = "contrib"

projects[wysiwyg][version] = "2.x-dev"
projects[wysiwyg][subdir] = "contrib"

projects[wysiwyg_linebreaks][version] = "1.5"
projects[wysiwyg_linebreaks][subdir] = "contrib"

; -----------------------------------------------------------------------------
; Contributed themes
; -----------------------------------------------------------------------------

projects[adaptivetheme][version] = "3.x-dev"
projects[adaptivetheme][subdir] = "contrib"

projects[pixture_reloaded][version] = "3.x-dev"
projects[pixture_reloaded][subdir] = "contrib"

projects[shiny][version] = "1.4"
projects[shiny][subdir] = "contrib"

; -----------------------------------------------------------------------------
; Libraries
; -----------------------------------------------------------------------------

libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6.1/ckeditor_3.6.6.1.zip"
libraries[ckeditor][directory_name] = "ckeditor"

libraries[flexslider][download][type] = "get"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider/archive/master.zip"
libraries[flexslider][download][subtree] = "FlexSlider-master"
libraries[flexslider][directory_name] = "flexslider"

libraries[superfish][download][type] = "get"
libraries[superfish][download][url] = "https://github.com/mehrpadin/Superfish-for-Drupal/archive/1.x.zip"
libraries[superfish][download][subtree] = "Superfish-for-Drupal-1.x"
libraries[superfish][directory_name] = "superfish"

libraries[jquery-ui-timepicker][download][type] = "get"
libraries[jquery-ui-timepicker][download][url] = "https://github.com/trentrichardson/jQuery-Timepicker-Addon/archive/v1.3.1.zip"
libraries[jquery-ui-timepicker][download][subtree] = "jQuery-Timepicker-Addon-1.3.1"
libraries[jquery-ui-timepicker][directory_name] = "jquery-ui-timepicker"
