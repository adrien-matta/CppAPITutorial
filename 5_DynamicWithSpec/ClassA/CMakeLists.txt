add_library(ClassA SHARED ClassA.cxx ClassA.h)
target_link_libraries(ClassA Manager)
install(FILES ClassA.h DESTINATION ${CMAKE_INCLUDE_OUTPUT_DIRECTORY})
