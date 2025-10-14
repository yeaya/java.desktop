#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.java2d._92_SRCS)
file(GLOB windows-classes.sun.java2d._92_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.java2d._92_HEADERS}) 
list(LENGTH windows-classes.sun.java2d._92_SRCS windows-classes.sun.java2d._92_SRCS_LENGTH)
if(windows-classes.sun.java2d._92_SRCS_LENGTH)
	add_library(windows-classes.sun.java2d._92 OBJECT "${windows-classes.sun.java2d._92_SRCS}" "${windows-classes.sun.java2d._92_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.java2d._92)
endif()