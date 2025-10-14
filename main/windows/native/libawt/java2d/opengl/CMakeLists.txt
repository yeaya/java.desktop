#machine generated

add_subdirectory("J2D_GL")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libawt.java_116_SRCS)
file(GLOB windows-native.libawt.java_116_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libawt.java_116_HEADERS}) 
list(LENGTH windows-native.libawt.java_116_SRCS windows-native.libawt.java_116_SRCS_LENGTH)
if(windows-native.libawt.java_116_SRCS_LENGTH)
	add_library(windows-native.libawt.java_116 OBJECT "${windows-native.libawt.java_116_SRCS}" "${windows-native.libawt.java_116_HEADERS}")
	jcpp_enable_bigobj(windows-native.libawt.java_116)
endif()