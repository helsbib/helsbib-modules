api = 2
core = 6.x

; Contrib modules.

projects[addthis][subdir] = contrib
projects[addthis][version] = 2.10

projects[eu-cookie-compliance][subdir] = contrib
projects[eu-cookie-compliance][version] = 1.8

projects[flag][subdir] = contrib
projects[flag][version] = 2.0

projects[memcache][subdir] = contrib
projects[memcache][version] = 1.10

projects[node_export][subdir] = contrib
projects[node_export][version] = 2.21

projects[scheduler][subdir] = contrib
projects[scheduler][version] = 1.8

projects[securepages][subdir] = contrib
projects[securepages][version] = 1.8
projects[securepages][patch][] = http://drupal.org/files/issues/globalbase_url_6.x-1.8.patch

projects[tinymce_node_picker][subdir] = contrib
projects[tinymce_node_picker][version] = 2.1

; Ding mobile.

projects[ding-mobile][type] = module
projects[ding-mobile][download][type] = git
projects[ding-mobile][download][url] = https://github.com/helsbib/ding-mobile.git

projects[mobile_tools][subdir] = contrib
projects[mobile_tools][version] = 2.7

projects[browscap][subdir] = contrib
projects[browscap][version] = 1.5

projects[alternator][type] = theme
projects[alternator][download][type] = git
projects[alternator][download][url] = http://github.com/helsbib/alternator.git
;projects[alternator][download][revision] = v1.0


; Custom Ding-modules and themes.

projects[elsinore][type] = theme
projects[elsinore][download][type] = git
projects[elsinore][download][url] = https://github.com/helsbib/elsinore.git

projects[melsinore][type] = theme
projects[melsinore][download][type] = git
projects[melsinore][download][url] = https://github.com/helsbib/melsinore.git

projects[ting_local_bibliography][type] = module
projects[ting_local_bibliography][download][type] = git
projects[ting_local_bibliography][download][url] = https://github.com/helsbib/ting-local-bibliography
projects[ting_local_bibliography][download][revision] = v1.0.1
