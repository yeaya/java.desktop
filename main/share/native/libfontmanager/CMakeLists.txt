#machine generated

add_definitions(-DLIBRARY_NAME=fontmanager)

if(JCPP_OS MATCHES "linux")
	add_definitions("-DLE_STANDALONE -DHEADLESS")
endif()

if(JCPP_OS MATCHES "linux")
	include_directories("../../../linux/native/libfontmanager")
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("../../../windows/native/libfontmanager")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.libfontmanager OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.libfontmanager)
endif()