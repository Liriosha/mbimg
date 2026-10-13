project('astc-encoder', 'cpp')

astc_lib = static_library(
    'astc-encoder',
    [
        'Source/astcenc_averages_and_directions.cpp',
        'Source/astcenc_block_sizes.cpp',
        'Source/astcenc_color_quantize.cpp',
        'Source/astcenc_color_unquantize.cpp',
        'Source/astcenc_compress_symbolic.cpp',
        'Source/astcenc_compute_variance.cpp',
        'Source/astcenc_decompress_symbolic.cpp',
        'Source/astcenc_diagnostic_trace.cpp',
        'Source/astcenc_entry.cpp',
        'Source/astcenc_find_best_partitioning.cpp',
        'Source/astcenc_ideal_endpoints_and_weights.cpp',
        'Source/astcenc_image.cpp',
        'Source/astcenc_integer_sequence.cpp',
        'Source/astcenc_mathlib.cpp',
        'Source/astcenc_mathlib_softfloat.cpp',
        'Source/astcenc_partition_tables.cpp',
        'Source/astcenc_percentile_tables.cpp',
        'Source/astcenc_pick_best_endpoint_format.cpp',
        'Source/astcenc_quantization.cpp',
        'Source/astcenc_symbolic_physical.cpp',
        'Source/astcenc_weight_align.cpp',
        'Source/astcenc_weight_quant_xfer_tables.cpp',
    ],
    include_directories: 'Source',
    override_options:['unity=off']
)

astc_dep = declare_dependency(include_directories: 'Source', link_with: astc_lib)

meson.override_dependency('astc-encoder', astc_dep)
