add_library(ClassB SHARED ClassB.cxx ClassB.h)
target_link_libraries(ClassB Manager)
install(FILES ClassB.h DESTINATION ${CMAKE_INCLUDE_OUTPUT_DIRECTORY})
