#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libawt.awt._112_SRCS)
file(GLOB windows-native.libawt.awt._112_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libawt.awt._112_HEADERS}) 
list(LENGTH windows-native.libawt.awt._112_SRCS windows-native.libawt.awt._112_SRCS_LENGTH)
if(windows-native.libawt.awt._112_SRCS_LENGTH)
	add_library(windows-native.libawt.awt._112 OBJECT "${windows-native.libawt.awt._112_SRCS}" "${windows-native.libawt.awt._112_HEADERS}")
	jcpp_enable_bigobj(windows-native.libawt.awt._112)
endif()