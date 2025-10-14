#machine generated

add_subdirectory("swing")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun.java_SRCS)
file(GLOB windows-classes.com.sun.java_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun.java_HEADERS}) 
list(LENGTH windows-classes.com.sun.java_SRCS windows-classes.com.sun.java_SRCS_LENGTH)
if(windows-classes.com.sun.java_SRCS_LENGTH)
	add_library(windows-classes.com.sun.java OBJECT "${windows-classes.com.sun.java_SRCS}" "${windows-classes.com.sun.java_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun.java)
endif()