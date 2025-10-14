#machine generated

add_subdirectory("hw")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.java2d._96_SRCS)
file(GLOB windows-classes.sun.java2d._96_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.java2d._96_HEADERS}) 
list(LENGTH windows-classes.sun.java2d._96_SRCS windows-classes.sun.java2d._96_SRCS_LENGTH)
if(windows-classes.sun.java2d._96_SRCS_LENGTH)
	add_library(windows-classes.sun.java2d._96 OBJECT "${windows-classes.sun.java2d._96_SRCS}" "${windows-classes.sun.java2d._96_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.java2d._96)
endif()