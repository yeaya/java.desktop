#machine generated

add_subdirectory("d3d")
add_subdirectory("loops")
add_subdirectory("opengl")
add_subdirectory("pipe")
add_subdirectory("windows")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libawt.java2d_SRCS)
file(GLOB windows-native.libawt.java2d_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libawt.java2d_HEADERS}) 
list(LENGTH windows-native.libawt.java2d_SRCS windows-native.libawt.java2d_SRCS_LENGTH)
if(windows-native.libawt.java2d_SRCS_LENGTH)
	add_library(windows-native.libawt.java2d OBJECT "${windows-native.libawt.java2d_SRCS}" "${windows-native.libawt.java2d_HEADERS}")
	jcpp_enable_bigobj(windows-native.libawt.java2d)
endif()