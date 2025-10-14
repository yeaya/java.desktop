#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libawt.windows_SRCS)
file(GLOB windows-native.libawt.windows_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libawt.windows_HEADERS}) 
list(LENGTH windows-native.libawt.windows_SRCS windows-native.libawt.windows_SRCS_LENGTH)
if(windows-native.libawt.windows_SRCS_LENGTH)
	add_library(windows-native.libawt.windows OBJECT "${windows-native.libawt.windows_SRCS}" "${windows-native.libawt.windows_HEADERS}")
	jcpp_enable_bigobj(windows-native.libawt.windows)
endif()