#machine generated

add_definitions(-DLIBRARY_NAME=awt)

if(JCPP_OS MATCHES "linux")
	add_definitions("-DHEADLESS=true")
endif()

add_subdirectory("awt")
add_subdirectory("java2d")

include_directories("../../../share/native/libawt")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux-native.libawt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux-native.libawt)
endif()