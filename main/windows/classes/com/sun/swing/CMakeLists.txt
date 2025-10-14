#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun.swing_SRCS)
file(GLOB windows-classes.com.sun.swing_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun.swing_HEADERS}) 
list(LENGTH windows-classes.com.sun.swing_SRCS windows-classes.com.sun.swing_SRCS_LENGTH)
if(windows-classes.com.sun.swing_SRCS_LENGTH)
	add_library(windows-classes.com.sun.swing OBJECT "${windows-classes.com.sun.swing_SRCS}" "${windows-classes.com.sun.swing_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun.swing)
endif()