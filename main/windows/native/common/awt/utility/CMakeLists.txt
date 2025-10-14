#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.common.awt._107_SRCS)
file(GLOB windows-native.common.awt._107_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.common.awt._107_HEADERS}) 
list(LENGTH windows-native.common.awt._107_SRCS windows-native.common.awt._107_SRCS_LENGTH)
if(windows-native.common.awt._107_SRCS_LENGTH)
	add_library(windows-native.common.awt._107 OBJECT "${windows-native.common.awt._107_SRCS}" "${windows-native.common.awt._107_HEADERS}")
	jcpp_enable_bigobj(windows-native.common.awt._107)
endif()