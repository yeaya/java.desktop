#machine generated

add_subdirectory("basic")
add_subdirectory("metal")
add_subdirectory("synth")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun.swi_30_SRCS)
file(GLOB windows-classes.com.sun.swi_30_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun.swi_30_HEADERS}) 
list(LENGTH windows-classes.com.sun.swi_30_SRCS windows-classes.com.sun.swi_30_SRCS_LENGTH)
if(windows-classes.com.sun.swi_30_SRCS_LENGTH)
	add_library(windows-classes.com.sun.swi_30 OBJECT "${windows-classes.com.sun.swi_30_SRCS}" "${windows-classes.com.sun.swi_30_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun.swi_30)
endif()