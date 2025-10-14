#machine generated

add_subdirectory("accessibility")
add_subdirectory("imageio")
add_subdirectory("print")
add_subdirectory("sound")
add_subdirectory("swing")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax_SRCS)
file(GLOB windows-classes.javax_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax_HEADERS}) 
list(LENGTH windows-classes.javax_SRCS windows-classes.javax_SRCS_LENGTH)
if(windows-classes.javax_SRCS_LENGTH)
	add_library(windows-classes.javax OBJECT "${windows-classes.javax_SRCS}" "${windows-classes.javax_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax)
endif()