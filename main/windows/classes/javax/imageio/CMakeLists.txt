#machine generated

add_subdirectory("event")
add_subdirectory("metadata")
add_subdirectory("plugins")
add_subdirectory("spi")
add_subdirectory("stream")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.imageio_SRCS)
file(GLOB windows-classes.javax.imageio_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.imageio_HEADERS}) 
list(LENGTH windows-classes.javax.imageio_SRCS windows-classes.javax.imageio_SRCS_LENGTH)
if(windows-classes.javax.imageio_SRCS_LENGTH)
	add_library(windows-classes.javax.imageio OBJECT "${windows-classes.javax.imageio_SRCS}" "${windows-classes.javax.imageio_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.imageio)
endif()