#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.awt.print_SRCS)
file(GLOB windows-classes.java.awt.print_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.awt.print_HEADERS}) 
list(LENGTH windows-classes.java.awt.print_SRCS windows-classes.java.awt.print_SRCS_LENGTH)
if(windows-classes.java.awt.print_SRCS_LENGTH)
	add_library(windows-classes.java.awt.print OBJECT "${windows-classes.java.awt.print_SRCS}" "${windows-classes.java.awt.print_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.awt.print)
endif()