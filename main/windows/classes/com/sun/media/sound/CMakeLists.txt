#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun.med_28_SRCS)
file(GLOB windows-classes.com.sun.med_28_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun.med_28_HEADERS}) 
list(LENGTH windows-classes.com.sun.med_28_SRCS windows-classes.com.sun.med_28_SRCS_LENGTH)
if(windows-classes.com.sun.med_28_SRCS_LENGTH)
	add_library(windows-classes.com.sun.med_28 OBJECT "${windows-classes.com.sun.med_28_SRCS}" "${windows-classes.com.sun.med_28_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun.med_28)
endif()