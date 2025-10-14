#machine generated

if(JCPP_OS MATCHES "windows")
	add_definitions("-DMAKECUBE_EXE")
endif()

add_subdirectory("image")
add_subdirectory("medialib")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libawt.awt_SRCS)
file(GLOB windows-native.libawt.awt_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libawt.awt_HEADERS}) 
list(LENGTH windows-native.libawt.awt_SRCS windows-native.libawt.awt_SRCS_LENGTH)
if(windows-native.libawt.awt_SRCS_LENGTH)
	add_library(windows-native.libawt.awt OBJECT "${windows-native.libawt.awt_SRCS}" "${windows-native.libawt.awt_HEADERS}")
	jcpp_enable_bigobj(windows-native.libawt.awt)
endif()