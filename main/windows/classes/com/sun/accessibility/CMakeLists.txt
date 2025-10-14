#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun.acce_0_SRCS)
file(GLOB windows-classes.com.sun.acce_0_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun.acce_0_HEADERS}) 
list(LENGTH windows-classes.com.sun.acce_0_SRCS windows-classes.com.sun.acce_0_SRCS_LENGTH)
if(windows-classes.com.sun.acce_0_SRCS_LENGTH)
	add_library(windows-classes.com.sun.acce_0 OBJECT "${windows-classes.com.sun.acce_0_SRCS}" "${windows-classes.com.sun.acce_0_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun.acce_0)
endif()