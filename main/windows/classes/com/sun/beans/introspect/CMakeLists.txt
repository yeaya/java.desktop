#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun.bean_7_SRCS)
file(GLOB windows-classes.com.sun.bean_7_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun.bean_7_HEADERS}) 
list(LENGTH windows-classes.com.sun.bean_7_SRCS windows-classes.com.sun.bean_7_SRCS_LENGTH)
if(windows-classes.com.sun.bean_7_SRCS_LENGTH)
	add_library(windows-classes.com.sun.bean_7 OBJECT "${windows-classes.com.sun.bean_7_SRCS}" "${windows-classes.com.sun.bean_7_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun.bean_7)
endif()