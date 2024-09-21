# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\image_acquisition_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\image_acquisition_autogen.dir\\ParseCache.txt"
  "image_acquisition_autogen"
  )
endif()
