project('dav1d','c',version:'1.5.3',default_options:['c_std=c11'])

dav1d_lib = static_library(
    'dav1d',
    'dav1d-amalgamated.c',
    include_directories: ['.','include'],
    dependencies: dependency('bx'),
)

dav1d_dep = declare_dependency(
    include_directories: ['.','include'],
    link_with: dav1d_lib
)

meson.override_dependency('dav1d', dav1d_dep)
