#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.common.java_109_SRCS)
file(GLOB windows-native.common.java_109_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.common.java_109_HEADERS}) 
list(LENGTH windows-native.common.java_109_SRCS windows-native.common.java_109_SRCS_LENGTH)
if(windows-native.common.java_109_SRCS_LENGTH)
	add_library(windows-native.common.java_109 OBJECT "${windows-native.common.java_109_SRCS}" "${windows-native.common.java_109_HEADERS}")
	jcpp_enable_bigobj(windows-native.common.java_109)
endif()