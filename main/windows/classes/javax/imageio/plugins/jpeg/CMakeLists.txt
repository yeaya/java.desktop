#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.image_47_SRCS)
file(GLOB windows-classes.javax.image_47_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.image_47_HEADERS}) 
list(LENGTH windows-classes.javax.image_47_SRCS windows-classes.javax.image_47_SRCS_LENGTH)
if(windows-classes.javax.image_47_SRCS_LENGTH)
	add_library(windows-classes.javax.image_47 OBJECT "${windows-classes.javax.image_47_SRCS}" "${windows-classes.javax.image_47_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.image_47)
endif()