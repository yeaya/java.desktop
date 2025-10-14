#machine generated

add_subdirectory("beancontext")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.beans_SRCS)
file(GLOB windows-classes.java.beans_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.beans_HEADERS}) 
list(LENGTH windows-classes.java.beans_SRCS windows-classes.java.beans_SRCS_LENGTH)
if(windows-classes.java.beans_SRCS_LENGTH)
	add_library(windows-classes.java.beans OBJECT "${windows-classes.java.beans_SRCS}" "${windows-classes.java.beans_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.beans)
endif()