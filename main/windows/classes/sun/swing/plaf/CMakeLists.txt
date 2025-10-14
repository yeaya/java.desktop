#machine generated

add_subdirectory("synth")
add_subdirectory("windows")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.swing.plaf_SRCS)
file(GLOB windows-classes.sun.swing.plaf_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.swing.plaf_HEADERS}) 
list(LENGTH windows-classes.sun.swing.plaf_SRCS windows-classes.sun.swing.plaf_SRCS_LENGTH)
if(windows-classes.sun.swing.plaf_SRCS_LENGTH)
	add_library(windows-classes.sun.swing.plaf OBJECT "${windows-classes.sun.swing.plaf_SRCS}" "${windows-classes.sun.swing.plaf_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.swing.plaf)
endif()