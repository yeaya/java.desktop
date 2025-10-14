#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.awt.dnd_SRCS)
file(GLOB windows-classes.sun.awt.dnd_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.awt.dnd_HEADERS}) 
list(LENGTH windows-classes.sun.awt.dnd_SRCS windows-classes.sun.awt.dnd_SRCS_LENGTH)
if(windows-classes.sun.awt.dnd_SRCS_LENGTH)
	add_library(windows-classes.sun.awt.dnd OBJECT "${windows-classes.sun.awt.dnd_SRCS}" "${windows-classes.sun.awt.dnd_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.awt.dnd)
endif()