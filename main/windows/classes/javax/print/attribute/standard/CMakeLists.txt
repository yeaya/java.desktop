#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.print_52_SRCS)
file(GLOB windows-classes.javax.print_52_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.print_52_HEADERS}) 
list(LENGTH windows-classes.javax.print_52_SRCS windows-classes.javax.print_52_SRCS_LENGTH)
if(windows-classes.javax.print_52_SRCS_LENGTH)
	add_library(windows-classes.javax.print_52 OBJECT "${windows-classes.javax.print_52_SRCS}" "${windows-classes.javax.print_52_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.print_52)
endif()