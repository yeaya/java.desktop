#machine generated

add_subdirectory("config")
add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libfreetype_121_SRCS)
file(GLOB windows-native.libfreetype_121_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libfreetype_121_HEADERS}) 
list(LENGTH windows-native.libfreetype_121_SRCS windows-native.libfreetype_121_SRCS_LENGTH)
if(windows-native.libfreetype_121_SRCS_LENGTH)
	add_library(windows-native.libfreetype_121 OBJECT "${windows-native.libfreetype_121_SRCS}" "${windows-native.libfreetype_121_HEADERS}")
	jcpp_enable_bigobj(windows-native.libfreetype_121)
endif()