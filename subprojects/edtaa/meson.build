project('edtaa','cpp')

edtaa_lib = static_library(
    'edtaa',
    'edtaa3func.cpp',
    include_directories: '.',
)

edtaa_dep = declare_dependency(
    include_directories: '.',
    link_with: edtaa_lib,
)

meson.override_dependency('edtaa', edtaa_dep)
