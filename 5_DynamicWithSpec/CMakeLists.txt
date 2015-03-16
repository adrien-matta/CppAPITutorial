cmake_minimum_required (VERSION 2.6)
project (PlugIn)
set (RS_VERSION_MAJOR 1)
set (RS_VERSION_MINOR 0)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -undefined dynamic_lookup")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -undefined dynamic_lookup")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib )
set(CMAKE_INCLUDE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/include )

# Link executable against the local lib
link_directories( ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

# Allow inclusion of project headers
#include_directories(${CMAKE_INCLUDE_OUTPUT_DIRECTORY})

# add lib
set(SUB_DIRECTORY Manager ClassA ClassB User)

set(INCLUDE_DIRECTORIES "")
# Macro that add the sub dir and the include file install path
foreach(subdir ${SUB_DIRECTORY})
  # add the subdirectory
  add_subdirectory(${subdir}) 
  # Allow inclusion of project headers
  include_directories(${subdir})
endforeach(subdir)

# add the executable
add_executable (main main.cxx)
# link library rules
target_link_libraries(main Manager)
