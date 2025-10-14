#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.awt.de_37_SRCS)
file(GLOB windows-classes.java.awt.de_37_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.awt.de_37_HEADERS}) 
list(LENGTH windows-classes.java.awt.de_37_SRCS windows-classes.java.awt.de_37_SRCS_LENGTH)
if(windows-classes.java.awt.de_37_SRCS_LENGTH)
	add_library(windows-classes.java.awt.de_37 OBJECT "${windows-classes.java.awt.de_37_SRCS}" "${windows-classes.java.awt.de_37_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.awt.de_37)
endif()