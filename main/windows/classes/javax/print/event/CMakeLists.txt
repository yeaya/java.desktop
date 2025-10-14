#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.print_53_SRCS)
file(GLOB windows-classes.javax.print_53_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.print_53_HEADERS}) 
list(LENGTH windows-classes.javax.print_53_SRCS windows-classes.javax.print_53_SRCS_LENGTH)
if(windows-classes.javax.print_53_SRCS_LENGTH)
	add_library(windows-classes.javax.print_53 OBJECT "${windows-classes.javax.print_53_SRCS}" "${windows-classes.javax.print_53_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.print_53)
endif()