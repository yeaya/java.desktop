#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.image_48_SRCS)
file(GLOB windows-classes.javax.image_48_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.image_48_HEADERS}) 
list(LENGTH windows-classes.javax.image_48_SRCS windows-classes.javax.image_48_SRCS_LENGTH)
if(windows-classes.javax.image_48_SRCS_LENGTH)
	add_library(windows-classes.javax.image_48 OBJECT "${windows-classes.javax.image_48_SRCS}" "${windows-classes.javax.image_48_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.image_48)
endif()