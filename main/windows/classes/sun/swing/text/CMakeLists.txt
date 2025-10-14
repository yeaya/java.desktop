#machine generated

add_subdirectory("html")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.swing.text_SRCS)
file(GLOB windows-classes.sun.swing.text_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.swing.text_HEADERS}) 
list(LENGTH windows-classes.sun.swing.text_SRCS windows-classes.sun.swing.text_SRCS_LENGTH)
if(windows-classes.sun.swing.text_SRCS_LENGTH)
	add_library(windows-classes.sun.swing.text OBJECT "${windows-classes.sun.swing.text_SRCS}" "${windows-classes.sun.swing.text_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.swing.text)
endif()