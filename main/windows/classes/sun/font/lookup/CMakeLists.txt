#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.font.lo_89_SRCS)
file(GLOB windows-classes.sun.font.lo_89_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.font.lo_89_HEADERS}) 
list(LENGTH windows-classes.sun.font.lo_89_SRCS windows-classes.sun.font.lo_89_SRCS_LENGTH)
if(windows-classes.sun.font.lo_89_SRCS_LENGTH)
	add_library(windows-classes.sun.font.lo_89 OBJECT "${windows-classes.sun.font.lo_89_SRCS}" "${windows-classes.sun.font.lo_89_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.font.lo_89)
endif()