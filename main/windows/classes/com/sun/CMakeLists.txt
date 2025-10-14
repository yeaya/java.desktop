#machine generated

add_subdirectory("accessibility")
add_subdirectory("beans")
add_subdirectory("imageio")
add_subdirectory("java")
add_subdirectory("media")
add_subdirectory("swing")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun_SRCS)
file(GLOB windows-classes.com.sun_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun_HEADERS}) 
list(LENGTH windows-classes.com.sun_SRCS windows-classes.com.sun_SRCS_LENGTH)
if(windows-classes.com.sun_SRCS_LENGTH)
	add_library(windows-classes.com.sun OBJECT "${windows-classes.com.sun_SRCS}" "${windows-classes.com.sun_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun)
endif()