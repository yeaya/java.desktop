#machine generated

if(JCPP_OS MATCHES "macos")
	add_definitions("-DLIBRARY_NAME=awt_lwawt")
endif()

add_subdirectory("awt")
add_subdirectory("font")
add_subdirectory("java2d")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos-native.libawt_lwawt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos-native.libawt_lwawt)
endif()