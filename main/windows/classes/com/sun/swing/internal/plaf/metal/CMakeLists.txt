#machine generated

add_subdirectory("resources")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun.swi_33_SRCS)
file(GLOB windows-classes.com.sun.swi_33_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun.swi_33_HEADERS}) 
list(LENGTH windows-classes.com.sun.swi_33_SRCS windows-classes.com.sun.swi_33_SRCS_LENGTH)
if(windows-classes.com.sun.swi_33_SRCS_LENGTH)
	add_library(windows-classes.com.sun.swi_33 OBJECT "${windows-classes.com.sun.swi_33_SRCS}" "${windows-classes.com.sun.swi_33_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun.swi_33)
endif()