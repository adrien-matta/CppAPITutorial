add_library(Manager SHARED Manager.cxx Manager.h Base.cxx Base.h Factory.h Factory.cxx)
install(FILES Manager.h Base.h Factory.h DESTINATION ${CMAKE_INCLUDE_OUTPUT_DIRECTORY})
