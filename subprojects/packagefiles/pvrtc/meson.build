project('pvrtc','cpp')

pvrtc_lib = static_library('pvrtc',[
'BitScale.cpp',
'MortonTable.cpp',
'PvrTcDecoder.cpp',
'PvrTcPacket.cpp',
'PvrTcEncoder.cpp'
],include_directories:'.')

pvrtc_dep = declare_dependency(
    include_directories: '.',
    link_with: pvrtc_lib
)

meson.override_dependency('pvrtc',pvrtc_dep)
