#machine generated

add_subdirectory("cmm")
add_subdirectory("d3d")
add_subdirectory("loops")
add_subdirectory("marlin")
add_subdirectory("opengl")
add_subdirectory("pipe")
add_subdirectory("windows")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.java2d_SRCS)
file(GLOB windows-classes.sun.java2d_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.java2d_HEADERS}) 
list(LENGTH windows-classes.sun.java2d_SRCS windows-classes.sun.java2d_SRCS_LENGTH)
if(windows-classes.sun.java2d_SRCS_LENGTH)
	add_library(windows-classes.sun.java2d OBJECT "${windows-classes.sun.java2d_SRCS}" "${windows-classes.sun.java2d_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.java2d)
endif()