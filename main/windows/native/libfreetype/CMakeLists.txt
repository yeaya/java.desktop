#machine generated

if(JCPP_OS MATCHES "windows")
	add_definitions("-DLIBRARY_NAME=freetype")
	add_definitions("-DFT2_BUILD_LIBRARY")
endif()

add_subdirectory("include")
add_subdirectory("src")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libfreetype_SRCS)
file(GLOB windows-native.libfreetype_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libfreetype_HEADERS}) 
list(LENGTH windows-native.libfreetype_SRCS windows-native.libfreetype_SRCS_LENGTH)
if(windows-native.libfreetype_SRCS_LENGTH)
	add_library(windows-native.libfreetype OBJECT "${windows-native.libfreetype_SRCS}" "${windows-native.libfreetype_HEADERS}")
	jcpp_enable_bigobj(windows-native.libfreetype)
endif()