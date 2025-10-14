#machine generated

add_subdirectory("resources")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun.swi_35_SRCS)
file(GLOB windows-classes.com.sun.swi_35_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun.swi_35_HEADERS}) 
list(LENGTH windows-classes.com.sun.swi_35_SRCS windows-classes.com.sun.swi_35_SRCS_LENGTH)
if(windows-classes.com.sun.swi_35_SRCS_LENGTH)
	add_library(windows-classes.com.sun.swi_35 OBJECT "${windows-classes.com.sun.swi_35_SRCS}" "${windows-classes.com.sun.swi_35_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun.swi_35)
endif()