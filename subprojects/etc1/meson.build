project('etc1','cpp')

etc1_lib = static_library(
    'etc1',
    'etc1.cpp',
    include_directories: '.',
)

etc1_dep = declare_dependency(
    include_directories: '.',
    link_with: etc1_lib,
)

meson.override_dependency('etc1', etc1_dep)
