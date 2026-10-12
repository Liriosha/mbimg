project('libsquish','cpp')

libsquish_lib = static_library('squish',[
'lib/src/alpha.cpp',
'lib/src/clusterfit.cpp',
'lib/src/colourblock.cpp',
'lib/src/colourfit.cpp',
'lib/src/colourset.cpp',
'lib/src/maths.cpp',
'lib/src/rangefit.cpp',
'lib/src/singlecolourfit.cpp',
'lib/src/squish.cpp'
],include_directories:['lib/include','_old/make'])

libsquish_dep = declare_dependency(
    include_directories: ['lib/include','_old/make'],
    link_with: libsquish_lib
)

meson.override_dependency('libsquish',libsquish_dep)
