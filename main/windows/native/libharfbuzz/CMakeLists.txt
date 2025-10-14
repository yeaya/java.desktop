#machine generated

if(JCPP_OS MATCHES "windows")
	add_definitions("-DLIBRARY_NAME=harfbuzz")
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libharfbuzz_SRCS)
file(GLOB windows-native.libharfbuzz_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libharfbuzz_HEADERS}) 
list(LENGTH windows-native.libharfbuzz_SRCS windows-native.libharfbuzz_SRCS_LENGTH)
if(windows-native.libharfbuzz_SRCS_LENGTH)
	add_library(windows-native.libharfbuzz OBJECT "${windows-native.libharfbuzz_SRCS}" "${windows-native.libharfbuzz_HEADERS}")
	jcpp_enable_bigobj(windows-native.libharfbuzz)
endif()