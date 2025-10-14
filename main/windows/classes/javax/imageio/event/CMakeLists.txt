#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.image_43_SRCS)
file(GLOB windows-classes.javax.image_43_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.image_43_HEADERS}) 
list(LENGTH windows-classes.javax.image_43_SRCS windows-classes.javax.image_43_SRCS_LENGTH)
if(windows-classes.javax.image_43_SRCS_LENGTH)
	add_library(windows-classes.javax.image_43 OBJECT "${windows-classes.javax.image_43_SRCS}" "${windows-classes.javax.image_43_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.image_43)
endif()