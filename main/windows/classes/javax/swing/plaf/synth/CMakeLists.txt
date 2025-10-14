#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.swing_73_SRCS)
file(GLOB windows-classes.javax.swing_73_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.swing_73_HEADERS}) 
list(LENGTH windows-classes.javax.swing_73_SRCS windows-classes.javax.swing_73_SRCS_LENGTH)
if(windows-classes.javax.swing_73_SRCS_LENGTH)
	add_library(windows-classes.javax.swing_73 OBJECT "${windows-classes.javax.swing_73_SRCS}" "${windows-classes.javax.swing_73_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.swing_73)
endif()