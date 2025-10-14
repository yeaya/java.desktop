#machine generated

add_subdirectory("cvutils")
add_subdirectory("gif")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libawt.awt._110_SRCS)
file(GLOB windows-native.libawt.awt._110_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libawt.awt._110_HEADERS}) 
list(LENGTH windows-native.libawt.awt._110_SRCS windows-native.libawt.awt._110_SRCS_LENGTH)
if(windows-native.libawt.awt._110_SRCS_LENGTH)
	add_library(windows-native.libawt.awt._110 OBJECT "${windows-native.libawt.awt._110_SRCS}" "${windows-native.libawt.awt._110_HEADERS}")
	jcpp_enable_bigobj(windows-native.libawt.awt._110)
endif()