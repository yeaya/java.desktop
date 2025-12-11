#machine generated

add_definitions(-DLIBRARY_NAME=splashscreen)

if(JCPP_OS MATCHES "macos")
	add_definitions("-DWITH_MACOSX")
	add_definitions("-x objective-c")
endif()

include_directories("../../../share/native/libsplashscreen")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos-native.libsplashscreen OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos-native.libsplashscreen)
endif()