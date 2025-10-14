#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.awt.event_SRCS)
file(GLOB windows-classes.java.awt.event_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.awt.event_HEADERS}) 
list(LENGTH windows-classes.java.awt.event_SRCS windows-classes.java.awt.event_SRCS_LENGTH)
if(windows-classes.java.awt.event_SRCS_LENGTH)
	add_library(windows-classes.java.awt.event OBJECT "${windows-classes.java.awt.event_SRCS}" "${windows-classes.java.awt.event_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.awt.event)
endif()