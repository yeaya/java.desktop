#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libawt.java_118_SRCS)
file(GLOB windows-native.libawt.java_118_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libawt.java_118_HEADERS}) 
list(LENGTH windows-native.libawt.java_118_SRCS windows-native.libawt.java_118_SRCS_LENGTH)
if(windows-native.libawt.java_118_SRCS_LENGTH)
	add_library(windows-native.libawt.java_118 OBJECT "${windows-native.libawt.java_118_SRCS}" "${windows-native.libawt.java_118_HEADERS}")
	jcpp_enable_bigobj(windows-native.libawt.java_118)
endif()