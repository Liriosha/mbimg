project('libavif', ['c','cpp'])

libavif_lib = static_library(
    'libavif',
    [
        'src/alpha.c',
        'src/avif.c',
        # 'src/codec_aom.c',
        # 'src/codec_avm.c',
        'src/codec_dav1d.c',
        # 'src/codec_libgav1.c',
        # 'src/codec_rav1e.c',
        # 'src/codec_svt.c',
        'src/colr.c',
        'src/colrconvert.c',
        # 'src/compliance.cc',
        'src/diag.c',
        'src/exif.c',
        'src/gainmap.c',
        'src/io.c',
        'src/mem.c',
        'src/obu.c',
        'src/properties.c',
        'src/rawdata.c',
        'src/read.c',
        'src/reformat.c',
        'src/reformat_libsharpyuv.c',
        'src/reformat_libyuv.c',
        'src/sampletransform.c',
        'src/scale.c',
        'src/stream.c',
        'src/utils.c',
        'src/write.c',
        'third_party/iccjpeg/iccjpeg.c',
        'third_party/libyuv/source/planar_functions.c',
        'third_party/libyuv/source/row_common.c',
        'third_party/libyuv/source/scale.c',
        'third_party/libyuv/source/scale_any.c',
        'third_party/libyuv/source/scale_common.c',
    ],
    include_directories: [
        'include',
        'third_party/iccjpeg',
        'third_party/libyuv/include',
    ],
    override_options:['unity=off'],
    dependencies: dependency('dav1d')
)

libavif_dep = declare_dependency(
    include_directories: ['third_party/iccjpeg', 'third_party/libyuv/include'],
    link_with: libavif_lib,
    dependencies: dependency('dav1d')
)

meson.override_dependency('libavif', libavif_dep)


