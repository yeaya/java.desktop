#machine generated

add_subdirectory("html")
add_subdirectory("rtf")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.swing_75_SRCS)
file(GLOB windows-classes.javax.swing_75_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.swing_75_HEADERS}) 
list(LENGTH windows-classes.javax.swing_75_SRCS windows-classes.javax.swing_75_SRCS_LENGTH)
if(windows-classes.javax.swing_75_SRCS_LENGTH)
	add_library(windows-classes.javax.swing_75 OBJECT "${windows-classes.javax.swing_75_SRCS}" "${windows-classes.javax.swing_75_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.swing_75)
endif()