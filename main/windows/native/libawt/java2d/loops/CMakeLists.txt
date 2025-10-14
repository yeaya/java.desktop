#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libawt.java_115_SRCS)
file(GLOB windows-native.libawt.java_115_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libawt.java_115_HEADERS}) 
list(LENGTH windows-native.libawt.java_115_SRCS windows-native.libawt.java_115_SRCS_LENGTH)
if(windows-native.libawt.java_115_SRCS_LENGTH)
	add_library(windows-native.libawt.java_115 OBJECT "${windows-native.libawt.java_115_SRCS}" "${windows-native.libawt.java_115_HEADERS}")
	jcpp_enable_bigobj(windows-native.libawt.java_115)
endif()