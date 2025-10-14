#machine generated

add_subdirectory("plugins")
add_subdirectory("spi")
add_subdirectory("stream")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun.imag_9_SRCS)
file(GLOB windows-classes.com.sun.imag_9_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun.imag_9_HEADERS}) 
list(LENGTH windows-classes.com.sun.imag_9_SRCS windows-classes.com.sun.imag_9_SRCS_LENGTH)
if(windows-classes.com.sun.imag_9_SRCS_LENGTH)
	add_library(windows-classes.com.sun.imag_9 OBJECT "${windows-classes.com.sun.imag_9_SRCS}" "${windows-classes.com.sun.imag_9_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun.imag_9)
endif()