#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.swing_61_SRCS)
file(GLOB windows-classes.javax.swing_61_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.swing_61_HEADERS}) 
list(LENGTH windows-classes.javax.swing_61_SRCS windows-classes.javax.swing_61_SRCS_LENGTH)
if(windows-classes.javax.swing_61_SRCS_LENGTH)
	add_library(windows-classes.javax.swing_61 OBJECT "${windows-classes.javax.swing_61_SRCS}" "${windows-classes.javax.swing_61_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.swing_61)
endif()