#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.beans._41_SRCS)
file(GLOB windows-classes.java.beans._41_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.beans._41_HEADERS}) 
list(LENGTH windows-classes.java.beans._41_SRCS windows-classes.java.beans._41_SRCS_LENGTH)
if(windows-classes.java.beans._41_SRCS_LENGTH)
	add_library(windows-classes.java.beans._41 OBJECT "${windows-classes.java.beans._41_SRCS}" "${windows-classes.java.beans._41_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.beans._41)
endif()