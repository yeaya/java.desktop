#machine generated

add_subdirectory("sound")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun.media_SRCS)
file(GLOB windows-classes.com.sun.media_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun.media_HEADERS}) 
list(LENGTH windows-classes.com.sun.media_SRCS windows-classes.com.sun.media_SRCS_LENGTH)
if(windows-classes.com.sun.media_SRCS_LENGTH)
	add_library(windows-classes.com.sun.media OBJECT "${windows-classes.com.sun.media_SRCS}" "${windows-classes.com.sun.media_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun.media)
endif()