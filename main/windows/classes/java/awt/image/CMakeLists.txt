#machine generated

add_subdirectory("renderable")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.awt.image_SRCS)
file(GLOB windows-classes.java.awt.image_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.awt.image_HEADERS}) 
list(LENGTH windows-classes.java.awt.image_SRCS windows-classes.java.awt.image_SRCS_LENGTH)
if(windows-classes.java.awt.image_SRCS_LENGTH)
	add_library(windows-classes.java.awt.image OBJECT "${windows-classes.java.awt.image_SRCS}" "${windows-classes.java.awt.image_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.awt.image)
endif()