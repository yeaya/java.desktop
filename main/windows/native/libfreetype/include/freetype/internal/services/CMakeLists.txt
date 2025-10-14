#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libfreetype_124_SRCS)
file(GLOB windows-native.libfreetype_124_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libfreetype_124_HEADERS}) 
list(LENGTH windows-native.libfreetype_124_SRCS windows-native.libfreetype_124_SRCS_LENGTH)
if(windows-native.libfreetype_124_SRCS_LENGTH)
	add_library(windows-native.libfreetype_124 OBJECT "${windows-native.libfreetype_124_SRCS}" "${windows-native.libfreetype_124_HEADERS}")
	jcpp_enable_bigobj(windows-native.libfreetype_124)
endif()