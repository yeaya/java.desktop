#machine generated

add_subdirectory("freetype")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libfreetype_120_SRCS)
file(GLOB windows-native.libfreetype_120_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libfreetype_120_HEADERS}) 
list(LENGTH windows-native.libfreetype_120_SRCS windows-native.libfreetype_120_SRCS_LENGTH)
if(windows-native.libfreetype_120_SRCS_LENGTH)
	add_library(windows-native.libfreetype_120 OBJECT "${windows-native.libfreetype_120_SRCS}" "${windows-native.libfreetype_120_HEADERS}")
	jcpp_enable_bigobj(windows-native.libfreetype_120)
endif()