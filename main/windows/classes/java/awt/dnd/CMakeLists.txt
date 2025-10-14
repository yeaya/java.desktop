#machine generated

add_subdirectory("peer")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.awt.dnd_SRCS)
file(GLOB windows-classes.java.awt.dnd_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.awt.dnd_HEADERS}) 
list(LENGTH windows-classes.java.awt.dnd_SRCS windows-classes.java.awt.dnd_SRCS_LENGTH)
if(windows-classes.java.awt.dnd_SRCS_LENGTH)
	add_library(windows-classes.java.awt.dnd OBJECT "${windows-classes.java.awt.dnd_SRCS}" "${windows-classes.java.awt.dnd_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.awt.dnd)
endif()