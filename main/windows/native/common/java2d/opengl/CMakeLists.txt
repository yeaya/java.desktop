#machine generated

add_subdirectory("J2D_GL")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.common.java_108_SRCS)
file(GLOB windows-native.common.java_108_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.common.java_108_HEADERS}) 
list(LENGTH windows-native.common.java_108_SRCS windows-native.common.java_108_SRCS_LENGTH)
if(windows-native.common.java_108_SRCS_LENGTH)
	add_library(windows-native.common.java_108 OBJECT "${windows-native.common.java_108_SRCS}" "${windows-native.common.java_108_HEADERS}")
	jcpp_enable_bigobj(windows-native.common.java_108)
endif()