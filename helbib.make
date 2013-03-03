api = 2
core = 6.x

; Contrib modules.

projects[addthis][subdir] = contrib
projects[addthis][version] = 2.10

projects[eu-cookie-compliance][subdir] = contrib
projects[eu-cookie-compliance][version] = 1.8

projects[flag][subdir] = contrib
projects[flag][version] = 2.1

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

; Custom Ding-modules and themes.

projects[ding-library-hours][type] = module
projects[ding-library-hours][download][type] = git
projects[ding-library-hours][download][url] = https://github.com/kdb/ding-library-hours.git
projects[ding-library-hours][download][revision] = v1.1.0

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
