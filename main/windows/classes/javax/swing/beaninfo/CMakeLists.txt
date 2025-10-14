#machine generated

add_subdirectory("images")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.swing_58_SRCS)
file(GLOB windows-classes.javax.swing_58_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.swing_58_HEADERS}) 
list(LENGTH windows-classes.javax.swing_58_SRCS windows-classes.javax.swing_58_SRCS_LENGTH)
if(windows-classes.javax.swing_58_SRCS_LENGTH)
	add_library(windows-classes.javax.swing_58 OBJECT "${windows-classes.javax.swing_58_SRCS}" "${windows-classes.javax.swing_58_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.swing_58)
endif()