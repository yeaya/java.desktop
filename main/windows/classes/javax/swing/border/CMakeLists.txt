#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.swing_60_SRCS)
file(GLOB windows-classes.javax.swing_60_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.swing_60_HEADERS}) 
list(LENGTH windows-classes.javax.swing_60_SRCS windows-classes.javax.swing_60_SRCS_LENGTH)
if(windows-classes.javax.swing_60_SRCS_LENGTH)
	add_library(windows-classes.javax.swing_60 OBJECT "${windows-classes.javax.swing_60_SRCS}" "${windows-classes.javax.swing_60_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.swing_60)
endif()