#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.swing_72_SRCS)
file(GLOB windows-classes.javax.swing_72_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.swing_72_HEADERS}) 
list(LENGTH windows-classes.javax.swing_72_SRCS windows-classes.javax.swing_72_SRCS_LENGTH)
if(windows-classes.javax.swing_72_SRCS_LENGTH)
	add_library(windows-classes.javax.swing_72 OBJECT "${windows-classes.javax.swing_72_SRCS}" "${windows-classes.javax.swing_72_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.swing_72)
endif()