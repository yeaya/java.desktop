#machine generated

add_subdirectory("charsets")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.swing_78_SRCS)
file(GLOB windows-classes.javax.swing_78_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.swing_78_HEADERS}) 
list(LENGTH windows-classes.javax.swing_78_SRCS windows-classes.javax.swing_78_SRCS_LENGTH)
if(windows-classes.javax.swing_78_SRCS_LENGTH)
	add_library(windows-classes.javax.swing_78 OBJECT "${windows-classes.javax.swing_78_SRCS}" "${windows-classes.javax.swing_78_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.swing_78)
endif()