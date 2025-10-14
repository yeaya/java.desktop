#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.common.font_SRCS)
file(GLOB windows-native.common.font_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.common.font_HEADERS}) 
list(LENGTH windows-native.common.font_SRCS windows-native.common.font_SRCS_LENGTH)
if(windows-native.common.font_SRCS_LENGTH)
	add_library(windows-native.common.font OBJECT "${windows-native.common.font_SRCS}" "${windows-native.common.font_HEADERS}")
	jcpp_enable_bigobj(windows-native.common.font)
endif()