project('lodepng', ['c', 'cpp'])

lodepng_lib = static_library(
    'lodepng',
    ['lodepng.cpp'],
    include_directories: '.',
)

lodepng_dep = declare_dependency(
    include_directories: '.',
    link_with: lodepng_lib,
)

meson.override_dependency('lodepng', lodepng_dep)
