#machine generated

add_subdirectory("lookup")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.font_SRCS)
file(GLOB windows-classes.sun.font_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.font_HEADERS}) 
list(LENGTH windows-classes.sun.font_SRCS windows-classes.sun.font_SRCS_LENGTH)
if(windows-classes.sun.font_SRCS_LENGTH)
	add_library(windows-classes.sun.font OBJECT "${windows-classes.sun.font_SRCS}" "${windows-classes.sun.font_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.font)
endif()