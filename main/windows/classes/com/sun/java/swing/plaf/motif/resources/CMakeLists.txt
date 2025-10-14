#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun.jav_24_SRCS)
file(GLOB windows-classes.com.sun.jav_24_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun.jav_24_HEADERS}) 
list(LENGTH windows-classes.com.sun.jav_24_SRCS windows-classes.com.sun.jav_24_SRCS_LENGTH)
if(windows-classes.com.sun.jav_24_SRCS_LENGTH)
	add_library(windows-classes.com.sun.jav_24 OBJECT "${windows-classes.com.sun.jav_24_SRCS}" "${windows-classes.com.sun.jav_24_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun.jav_24)
endif()