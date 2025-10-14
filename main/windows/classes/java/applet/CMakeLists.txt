#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.applet_SRCS)
file(GLOB windows-classes.java.applet_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.applet_HEADERS}) 
list(LENGTH windows-classes.java.applet_SRCS windows-classes.java.applet_SRCS_LENGTH)
if(windows-classes.java.applet_SRCS_LENGTH)
	add_library(windows-classes.java.applet OBJECT "${windows-classes.java.applet_SRCS}" "${windows-classes.java.applet_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.applet)
endif()