#machine generated

add_subdirectory("icons")
add_subdirectory("resources")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun.jav_25_SRCS)
file(GLOB windows-classes.com.sun.jav_25_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun.jav_25_HEADERS}) 
list(LENGTH windows-classes.com.sun.jav_25_SRCS windows-classes.com.sun.jav_25_SRCS_LENGTH)
if(windows-classes.com.sun.jav_25_SRCS_LENGTH)
	add_library(windows-classes.com.sun.jav_25 OBJECT "${windows-classes.com.sun.jav_25_SRCS}" "${windows-classes.com.sun.jav_25_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun.jav_25)
endif()