#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libfreetype_125_SRCS)
file(GLOB windows-native.libfreetype_125_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libfreetype_125_HEADERS}) 
list(LENGTH windows-native.libfreetype_125_SRCS windows-native.libfreetype_125_SRCS_LENGTH)
if(windows-native.libfreetype_125_SRCS_LENGTH)
	add_library(windows-native.libfreetype_125 OBJECT "${windows-native.libfreetype_125_SRCS}" "${windows-native.libfreetype_125_HEADERS}")
	jcpp_enable_bigobj(windows-native.libfreetype_125)
endif()