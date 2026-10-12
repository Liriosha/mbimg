project('etcpak', 'cpp')

etcpak_lib = static_library(
    'etcpak',
    [
        'bc7enc.cpp',
        'Bitmap.cpp',
        'BitmapDownsampled.cpp',
        'BlockData.cpp',
        'ColorSpace.cpp',
        'DataProvider.cpp',
        'Debug.cpp',
        'Decode.cpp',
        'Dither.cpp',
        'Error.cpp',
        'mmap.cpp',
        'ProcessDxtc.cpp',
        'ProcessRGB.cpp',
        'System.cpp',
        'Tables.cpp',
        'TaskDispatch.cpp',
        'TextureHeader.cpp',
        'Timing.cpp',
    ],
    include_directories: '.',
)

etcpak_dep = declare_dependency(include_directories: '.', link_with: etcpak_lib)

meson.override_dependency('etcpak', etcpak_dep)
