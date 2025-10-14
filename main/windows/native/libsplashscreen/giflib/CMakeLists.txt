#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libsplashsc_137_SRCS)
file(GLOB windows-native.libsplashsc_137_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libsplashsc_137_HEADERS}) 
list(LENGTH windows-native.libsplashsc_137_SRCS windows-native.libsplashsc_137_SRCS_LENGTH)
if(windows-native.libsplashsc_137_SRCS_LENGTH)
	add_library(windows-native.libsplashsc_137 OBJECT "${windows-native.libsplashsc_137_SRCS}" "${windows-native.libsplashsc_137_HEADERS}")
	jcpp_enable_bigobj(windows-native.libsplashsc_137)
endif()