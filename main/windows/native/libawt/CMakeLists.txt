#machine generated

add_definitions(-DLIBRARY_NAME=awt)

if(JCPP_OS MATCHES "windows")
	add_definitions("-DUNICODE -D_UNICODE -DMLIB_OS64BIT")
endif()

add_subdirectory("java2d")
add_subdirectory("windows")

include_directories("../../../share/native/libawt")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(windows-native.libawt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(windows-native.libawt)
endif()