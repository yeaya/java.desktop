#machine generated

add_subdirectory("decoder")
add_subdirectory("editors")
add_subdirectory("finder")
add_subdirectory("infos")
add_subdirectory("introspect")
add_subdirectory("util")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun.beans_SRCS)
file(GLOB windows-classes.com.sun.beans_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun.beans_HEADERS}) 
list(LENGTH windows-classes.com.sun.beans_SRCS windows-classes.com.sun.beans_SRCS_LENGTH)
if(windows-classes.com.sun.beans_SRCS_LENGTH)
	add_library(windows-classes.com.sun.beans OBJECT "${windows-classes.com.sun.beans_SRCS}" "${windows-classes.com.sun.beans_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun.beans)
endif()