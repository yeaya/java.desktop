#machine generated

add_subdirectory("motif")
add_subdirectory("windows")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun.jav_21_SRCS)
file(GLOB windows-classes.com.sun.jav_21_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun.jav_21_HEADERS}) 
list(LENGTH windows-classes.com.sun.jav_21_SRCS windows-classes.com.sun.jav_21_SRCS_LENGTH)
if(windows-classes.com.sun.jav_21_SRCS_LENGTH)
	add_library(windows-classes.com.sun.jav_21 OBJECT "${windows-classes.com.sun.jav_21_SRCS}" "${windows-classes.com.sun.jav_21_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun.jav_21)
endif()