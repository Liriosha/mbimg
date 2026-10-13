project('nvtt', 'cpp')

nvtt_lib = static_library(
    'nvtt',
    [
        'bc6h/zoh.cpp',
        'bc6h/zohone.cpp',
        'bc6h/zohtwo.cpp',
        'bc6h/zoh_utils.cpp',
        'bc7/avpcl.cpp',
        'bc7/avpcl_mode0.cpp',
        'bc7/avpcl_mode1.cpp',
        'bc7/avpcl_mode2.cpp',
        'bc7/avpcl_mode3.cpp',
        'bc7/avpcl_mode4.cpp',
        'bc7/avpcl_mode5.cpp',
        'bc7/avpcl_mode6.cpp',
        'bc7/avpcl_mode7.cpp',
        'bc7/avpcl_utils.cpp',
        'nvmath/fitting.cpp',
        'nvtt.cpp'
    ],
    include_directories: '.',
    dependencies: dependency('bx'),
    override_options: ['unity=off'],
)

nvtt_dep = declare_dependency(
    include_directories: '.',
    link_with: nvtt_lib,
    dependencies: dependency('bx')
)

meson.override_dependency('nvtt', nvtt_dep)
