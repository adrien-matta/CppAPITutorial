add_library(User SHARED User.cxx User.h)
target_link_libraries(User Manager)
install(FILES User.h DESTINATION ${CMAKE_INCLUDE_OUTPUT_DIRECTORY})
