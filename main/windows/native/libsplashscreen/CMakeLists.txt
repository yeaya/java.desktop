#machine generated

if(JCPP_OS MATCHES "windows")
	add_definitions("-DLIBRARY_NAME=splashscreen")
endif()

add_subdirectory("giflib")
add_subdirectory("libpng")

if(JCPP_OS MATCHES "windows")
	add_definitions("-DWITH_WIN32")
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libsplashscreen_SRCS)
file(GLOB windows-native.libsplashscreen_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libsplashscreen_HEADERS}) 
list(LENGTH windows-native.libsplashscreen_SRCS windows-native.libsplashscreen_SRCS_LENGTH)
if(windows-native.libsplashscreen_SRCS_LENGTH)
	add_library(windows-native.libsplashscreen OBJECT "${windows-native.libsplashscreen_SRCS}" "${windows-native.libsplashscreen_HEADERS}")
	jcpp_enable_bigobj(windows-native.libsplashscreen)
endif()