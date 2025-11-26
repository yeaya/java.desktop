#machine generated

add_subdirectory("loops")
add_subdirectory("pipe")

if(JCPP_OS MATCHES "linux")
	include_directories("../../../../linux/native/libawt/java2d")
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("../../../../windows/native/libawt/java2d")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.libawt.java2d OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.libawt.java2d)
endif()