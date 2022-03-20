cmake_minimum_required(VERSION 3.15)

project(dxvk-faked3d9 LANGUAGES C)

add_library(d3d9 SHARED d3d9_main.c)

set_target_properties(d3d9 PROPERTIES
  PREFIX ""
  OUTPUT_NAME "d3d9"
  SUFFIX ".dll"
)

if(MSVC)
  target_link_options(d3d9 PRIVATE /DEF:${CMAKE_CURRENT_SOURCE_DIR}/d3d9.def)
else()
  target_link_options(d3d9 PRIVATE -Wl,--enable-stdcall-fixup ${CMAKE_CURRENT_SOURCE_DIR}/d3d9.def)
endif()
