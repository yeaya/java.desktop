#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libawt.java_114_SRCS)
file(GLOB windows-native.libawt.java_114_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libawt.java_114_HEADERS}) 
list(LENGTH windows-native.libawt.java_114_SRCS windows-native.libawt.java_114_SRCS_LENGTH)
if(windows-native.libawt.java_114_SRCS_LENGTH)
	add_library(windows-native.libawt.java_114 OBJECT "${windows-native.libawt.java_114_SRCS}" "${windows-native.libawt.java_114_HEADERS}")
	jcpp_enable_bigobj(windows-native.libawt.java_114)
endif()