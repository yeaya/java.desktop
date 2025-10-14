#machine generated

add_subdirectory("resources")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.print_SRCS)
file(GLOB windows-classes.sun.print_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.print_HEADERS}) 
list(LENGTH windows-classes.sun.print_SRCS windows-classes.sun.print_SRCS_LENGTH)
if(windows-classes.sun.print_SRCS_LENGTH)
	add_library(windows-classes.sun.print OBJECT "${windows-classes.sun.print_SRCS}" "${windows-classes.sun.print_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.print)
endif()