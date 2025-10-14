#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libfreetype_127_SRCS)
file(GLOB windows-native.libfreetype_127_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libfreetype_127_HEADERS}) 
list(LENGTH windows-native.libfreetype_127_SRCS windows-native.libfreetype_127_SRCS_LENGTH)
if(windows-native.libfreetype_127_SRCS_LENGTH)
	add_library(windows-native.libfreetype_127 OBJECT "${windows-native.libfreetype_127_SRCS}" "${windows-native.libfreetype_127_HEADERS}")
	jcpp_enable_bigobj(windows-native.libfreetype_127)
endif()