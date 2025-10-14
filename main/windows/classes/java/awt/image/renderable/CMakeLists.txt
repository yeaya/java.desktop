#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.awt.im_40_SRCS)
file(GLOB windows-classes.java.awt.im_40_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.awt.im_40_HEADERS}) 
list(LENGTH windows-classes.java.awt.im_40_SRCS windows-classes.java.awt.im_40_SRCS_LENGTH)
if(windows-classes.java.awt.im_40_SRCS_LENGTH)
	add_library(windows-classes.java.awt.im_40 OBJECT "${windows-classes.java.awt.im_40_SRCS}" "${windows-classes.java.awt.im_40_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.awt.im_40)
endif()