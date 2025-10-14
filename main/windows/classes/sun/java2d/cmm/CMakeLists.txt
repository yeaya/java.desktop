#machine generated

add_subdirectory("lcms")
add_subdirectory("profiles")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.java2d.cmm_SRCS)
file(GLOB windows-classes.sun.java2d.cmm_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.java2d.cmm_HEADERS}) 
list(LENGTH windows-classes.sun.java2d.cmm_SRCS windows-classes.sun.java2d.cmm_SRCS_LENGTH)
if(windows-classes.sun.java2d.cmm_SRCS_LENGTH)
	add_library(windows-classes.sun.java2d.cmm OBJECT "${windows-classes.sun.java2d.cmm_SRCS}" "${windows-classes.sun.java2d.cmm_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.java2d.cmm)
endif()