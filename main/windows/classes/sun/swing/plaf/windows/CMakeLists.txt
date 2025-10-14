#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.swing._101_SRCS)
file(GLOB windows-classes.sun.swing._101_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.swing._101_HEADERS}) 
list(LENGTH windows-classes.sun.swing._101_SRCS windows-classes.sun.swing._101_SRCS_LENGTH)
if(windows-classes.sun.swing._101_SRCS_LENGTH)
	add_library(windows-classes.sun.swing._101 OBJECT "${windows-classes.sun.swing._101_SRCS}" "${windows-classes.sun.swing._101_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.swing._101)
endif()