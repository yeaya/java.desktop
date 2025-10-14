#machine generated

add_subdirectory("opengl")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.common.java2d_SRCS)
file(GLOB windows-native.common.java2d_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.common.java2d_HEADERS}) 
list(LENGTH windows-native.common.java2d_SRCS windows-native.common.java2d_SRCS_LENGTH)
if(windows-native.common.java2d_SRCS_LENGTH)
	add_library(windows-native.common.java2d OBJECT "${windows-native.common.java2d_SRCS}" "${windows-native.common.java2d_HEADERS}")
	jcpp_enable_bigobj(windows-native.common.java2d)
endif()