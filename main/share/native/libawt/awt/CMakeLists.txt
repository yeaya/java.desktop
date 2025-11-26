#machine generated

if(JCPP_OS MATCHES "windows")
	add_definitions("-DMAKECUBE_EXE")
endif()

add_subdirectory("image")
add_subdirectory("medialib")

if(JCPP_OS MATCHES "linux")
	include_directories("../../../../linux/native/libawt/awt")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.libawt.awt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.libawt.awt)
endif()