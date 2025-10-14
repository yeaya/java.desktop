#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libfreetype_129_SRCS)
file(GLOB windows-native.libfreetype_129_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libfreetype_129_HEADERS}) 
list(LENGTH windows-native.libfreetype_129_SRCS windows-native.libfreetype_129_SRCS_LENGTH)
if(windows-native.libfreetype_129_SRCS_LENGTH)
	add_library(windows-native.libfreetype_129 OBJECT "${windows-native.libfreetype_129_SRCS}" "${windows-native.libfreetype_129_HEADERS}")
	jcpp_enable_bigobj(windows-native.libfreetype_129)
endif()