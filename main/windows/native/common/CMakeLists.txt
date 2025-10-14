#machine generated

add_subdirectory("awt")
add_subdirectory("font")
add_subdirectory("java2d")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.common_SRCS)
file(GLOB windows-native.common_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.common_HEADERS}) 
list(LENGTH windows-native.common_SRCS windows-native.common_SRCS_LENGTH)
if(windows-native.common_SRCS_LENGTH)
	add_library(windows-native.common OBJECT "${windows-native.common_SRCS}" "${windows-native.common_HEADERS}")
	jcpp_enable_bigobj(windows-native.common)
endif()