project('bimg', ['cpp', 'c'])
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
]
deps = []
foreach n : dep_names
    deps += dependency(n)
endforeach

bimg_inc = ['include', '3rdparty']

bimg_lib = static_library(
    'bimg',
    sources,
    include_directories: bimg_inc,
    dependencies: deps,
)

bimg_dep = declare_dependency(
    include_directories: bimg_inc,
    link_with: bimg_lib,
)

meson.override_dependency('bimg', bimg_dep)
