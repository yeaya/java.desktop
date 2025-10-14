#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.print.r_99_SRCS)
file(GLOB windows-classes.sun.print.r_99_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.print.r_99_HEADERS}) 
list(LENGTH windows-classes.sun.print.r_99_SRCS windows-classes.sun.print.r_99_SRCS_LENGTH)
if(windows-classes.sun.print.r_99_SRCS_LENGTH)
	add_library(windows-classes.sun.print.r_99 OBJECT "${windows-classes.sun.print.r_99_SRCS}" "${windows-classes.sun.print.r_99_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.print.r_99)
endif()