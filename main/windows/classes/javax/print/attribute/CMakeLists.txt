#machine generated

add_subdirectory("standard")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.print_51_SRCS)
file(GLOB windows-classes.javax.print_51_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.print_51_HEADERS}) 
list(LENGTH windows-classes.javax.print_51_SRCS windows-classes.javax.print_51_SRCS_LENGTH)
if(windows-classes.javax.print_51_SRCS_LENGTH)
	add_library(windows-classes.javax.print_51 OBJECT "${windows-classes.javax.print_51_SRCS}" "${windows-classes.javax.print_51_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.print_51)
endif()