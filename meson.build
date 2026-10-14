project('bimg', ['cpp', 'c'], default_options: ['unity=on', 'cpp_std=c++20', 'c_std=c11'])
add_project_arguments('-funsigned-char', language: 'cpp')

if host_machine.system() == 'Linux'
    add_project_arguments('-fPIC', language: 'cpp')
endif

cc = meson.get_compiler('cpp')
fs = import('fs')
sources = []
foreach s : fs.read('sources.txt').strip().split('\n')
    sources += files('src/' + s + '.cpp')
endforeach
dep_names = [
    'stb',
    'bx',
    'dav1d',
    'libsquish',
    'miniz',
    'tinyexr',
    'lodepng',
    'astc-encoder',
    'simplewebp',
    'nanosvg',
    'iqa',
    'pvrtc',
    'etcpak',
    'libavif',
    'nvtt',
    'etc1',
    'edtaa',
]
deps = []
foreach n : dep_names
    deps += dependency(n)
endforeach

bimg_lib = static_library(
    'bimg',
    sources,
    include_directories: 'include',
    dependencies: deps,
)

bimg_dep = declare_dependency(
    include_directories: 'include',
    link_with: bimg_lib,
)

meson.override_dependency('bimg', bimg_dep)
