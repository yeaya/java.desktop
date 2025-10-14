#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libfreetype_136_SRCS)
file(GLOB windows-native.libfreetype_136_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libfreetype_136_HEADERS}) 
list(LENGTH windows-native.libfreetype_136_SRCS windows-native.libfreetype_136_SRCS_LENGTH)
if(windows-native.libfreetype_136_SRCS_LENGTH)
	add_library(windows-native.libfreetype_136 OBJECT "${windows-native.libfreetype_136_SRCS}" "${windows-native.libfreetype_136_HEADERS}")
	jcpp_enable_bigobj(windows-native.libfreetype_136)
endif()