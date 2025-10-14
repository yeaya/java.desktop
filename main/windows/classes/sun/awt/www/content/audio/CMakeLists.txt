#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.awt.www_87_SRCS)
file(GLOB windows-classes.sun.awt.www_87_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.awt.www_87_HEADERS}) 
list(LENGTH windows-classes.sun.awt.www_87_SRCS windows-classes.sun.awt.www_87_SRCS_LENGTH)
if(windows-classes.sun.awt.www_87_SRCS_LENGTH)
	add_library(windows-classes.sun.awt.www_87 OBJECT "${windows-classes.sun.awt.www_87_SRCS}" "${windows-classes.sun.awt.www_87_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.awt.www_87)
endif()