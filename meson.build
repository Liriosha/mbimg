project('bimg',['cpp','c'])
cc = meson.get_compiler('cpp')
fs = import('fs')
sources = []
foreach s : fs.read('sources.txt').strip().split('\n')
    sources += files('src/' + s + '.cpp')
endforeach
dep_names = ['stb','bx','dav1d','libsquish','miniz','tinyexr','lodepng','astc-encoder','simplewebp','nanosvg','iqa','pvrtc','etcpak','libavif']
deps = []
foreach n : dep_names
deps += dependency(n)
endforeach

bimg_lib = static_library(
  'bimg',
  sources,
  include_directories: ['include','3rdparty'],
  dependencies: deps
)

