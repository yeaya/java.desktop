#machine generated

add_subdirectory("bmp")
add_subdirectory("common")
add_subdirectory("gif")
add_subdirectory("jpeg")
add_subdirectory("png")
add_subdirectory("tiff")
add_subdirectory("wbmp")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.com.sun.ima_10_SRCS)
file(GLOB windows-classes.com.sun.ima_10_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.com.sun.ima_10_HEADERS}) 
list(LENGTH windows-classes.com.sun.ima_10_SRCS windows-classes.com.sun.ima_10_SRCS_LENGTH)
if(windows-classes.com.sun.ima_10_SRCS_LENGTH)
	add_library(windows-classes.com.sun.ima_10 OBJECT "${windows-classes.com.sun.ima_10_SRCS}" "${windows-classes.com.sun.ima_10_HEADERS}")
	jcpp_enable_bigobj(windows-classes.com.sun.ima_10)
endif()