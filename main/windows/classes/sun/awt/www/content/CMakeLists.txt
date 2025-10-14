#machine generated

add_subdirectory("audio")
add_subdirectory("image")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.awt.www_86_SRCS)
file(GLOB windows-classes.sun.awt.www_86_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.awt.www_86_HEADERS}) 
list(LENGTH windows-classes.sun.awt.www_86_SRCS windows-classes.sun.awt.www_86_SRCS_LENGTH)
if(windows-classes.sun.awt.www_86_SRCS_LENGTH)
	add_library(windows-classes.sun.awt.www_86 OBJECT "${windows-classes.sun.awt.www_86_SRCS}" "${windows-classes.sun.awt.www_86_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.awt.www_86)
endif()