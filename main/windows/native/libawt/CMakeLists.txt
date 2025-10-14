#machine generated

if(JCPP_OS MATCHES "windows")
	add_definitions("-DLIBRARY_NAME=awt")
	add_definitions("-DUNICODE -D_UNICODE -DMLIB_OS64BIT")
endif()

add_subdirectory("awt")
add_subdirectory("java2d")
add_subdirectory("windows")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libawt_SRCS)
file(GLOB windows-native.libawt_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libawt_HEADERS}) 
list(LENGTH windows-native.libawt_SRCS windows-native.libawt_SRCS_LENGTH)
if(windows-native.libawt_SRCS_LENGTH)
	add_library(windows-native.libawt OBJECT "${windows-native.libawt_SRCS}" "${windows-native.libawt_HEADERS}")
	jcpp_enable_bigobj(windows-native.libawt)
endif()