#machine generated

add_subdirectory("services")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libfreetype_123_SRCS)
file(GLOB windows-native.libfreetype_123_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libfreetype_123_HEADERS}) 
list(LENGTH windows-native.libfreetype_123_SRCS windows-native.libfreetype_123_SRCS_LENGTH)
if(windows-native.libfreetype_123_SRCS_LENGTH)
	add_library(windows-native.libfreetype_123 OBJECT "${windows-native.libfreetype_123_SRCS}" "${windows-native.libfreetype_123_HEADERS}")
	jcpp_enable_bigobj(windows-native.libfreetype_123)
endif()