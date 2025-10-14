#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.swing._102_SRCS)
file(GLOB windows-classes.sun.swing._102_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.swing._102_HEADERS}) 
list(LENGTH windows-classes.sun.swing._102_SRCS windows-classes.sun.swing._102_SRCS_LENGTH)
if(windows-classes.sun.swing._102_SRCS_LENGTH)
	add_library(windows-classes.sun.swing._102 OBJECT "${windows-classes.sun.swing._102_SRCS}" "${windows-classes.sun.swing._102_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.swing._102)
endif()