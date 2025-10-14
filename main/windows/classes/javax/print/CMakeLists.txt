#machine generated

add_subdirectory("attribute")
add_subdirectory("event")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.print_SRCS)
file(GLOB windows-classes.javax.print_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.print_HEADERS}) 
list(LENGTH windows-classes.javax.print_SRCS windows-classes.javax.print_SRCS_LENGTH)
if(windows-classes.javax.print_SRCS_LENGTH)
	add_library(windows-classes.javax.print OBJECT "${windows-classes.javax.print_SRCS}" "${windows-classes.javax.print_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.print)
endif()