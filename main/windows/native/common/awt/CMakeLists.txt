#machine generated

add_subdirectory("debug")
add_subdirectory("medialib")
add_subdirectory("systemscale")
add_subdirectory("utility")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.common.awt_SRCS)
file(GLOB windows-native.common.awt_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.common.awt_HEADERS}) 
list(LENGTH windows-native.common.awt_SRCS windows-native.common.awt_SRCS_LENGTH)
if(windows-native.common.awt_SRCS_LENGTH)
	add_library(windows-native.common.awt OBJECT "${windows-native.common.awt_SRCS}" "${windows-native.common.awt_HEADERS}")
	jcpp_enable_bigobj(windows-native.common.awt)
endif()