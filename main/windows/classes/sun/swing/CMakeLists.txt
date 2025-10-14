#machine generated

add_subdirectory("icon")
add_subdirectory("plaf")
add_subdirectory("table")
add_subdirectory("text")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.swing_SRCS)
file(GLOB windows-classes.sun.swing_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.swing_HEADERS}) 
list(LENGTH windows-classes.sun.swing_SRCS windows-classes.sun.swing_SRCS_LENGTH)
if(windows-classes.sun.swing_SRCS_LENGTH)
	add_library(windows-classes.sun.swing OBJECT "${windows-classes.sun.swing_SRCS}" "${windows-classes.sun.swing_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.swing)
endif()