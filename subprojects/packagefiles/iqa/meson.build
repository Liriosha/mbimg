project('iqa','c')

iqa_lib = static_library('iqa',
[
'source/convolve.c',
'source/decimate.c',
'source/math_utils.c',
'source/ms_ssim.c',
'source/mse.c',
'source/psnr.c',
'source/ssim.c'
]
,include_directories:'include')

iqa_dep = declare_dependency(
    include_directories: 'include',
    link_with: iqa_lib
)

meson.override_dependency('iqa',iqa_dep)
