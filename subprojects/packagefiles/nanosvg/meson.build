project('nanosvg', 'c')

nanosvg_dep = declare_dependency(
    include_directories: include_directories('./src'),
)

meson.override_dependency('nanosvg', nanosvg_dep)
