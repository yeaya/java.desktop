#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.java2d._90_SRCS)
file(GLOB windows-classes.sun.java2d._90_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.java2d._90_HEADERS}) 
list(LENGTH windows-classes.sun.java2d._90_SRCS windows-classes.sun.java2d._90_SRCS_LENGTH)
if(windows-classes.sun.java2d._90_SRCS_LENGTH)
	add_library(windows-classes.sun.java2d._90 OBJECT "${windows-classes.sun.java2d._90_SRCS}" "${windows-classes.sun.java2d._90_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.java2d._90)
endif()