#machine generated

add_subdirectory("icons")
add_subdirectory("sounds")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.swing_67_SRCS)
file(GLOB windows-classes.javax.swing_67_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.swing_67_HEADERS}) 
list(LENGTH windows-classes.javax.swing_67_SRCS windows-classes.javax.swing_67_SRCS_LENGTH)
if(windows-classes.javax.swing_67_SRCS_LENGTH)
	add_library(windows-classes.javax.swing_67 OBJECT "${windows-classes.javax.swing_67_SRCS}" "${windows-classes.javax.swing_67_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.swing_67)
endif()