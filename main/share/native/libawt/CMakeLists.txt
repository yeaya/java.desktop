#machine generated

add_definitions(-DLIBRARY_NAME=awt)

if(JCPP_OS MATCHES "linux")
	add_definitions("-DHEADLESS=true")
endif()

if(JCPP_OS MATCHES "windows")
	add_definitions("-DUNICODE -D_UNICODE -DMLIB_OS64BIT")
endif()

add_subdirectory("awt")
add_subdirectory("java2d")

if(JCPP_OS MATCHES "linux")
	include_directories("../../../linux/native/libawt")
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("../../../windows/native/libawt")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.libawt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.libawt)
endif()