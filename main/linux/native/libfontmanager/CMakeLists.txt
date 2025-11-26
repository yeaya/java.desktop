#machine generated

add_definitions(-DLIBRARY_NAME=fontmanager)

if(JCPP_OS MATCHES "linux")
	add_definitions("-DLE_STANDALONE -DHEADLESS")
endif()

include_directories("../../../share/native/libfontmanager")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux-native.libfontmanager OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux-native.libfontmanager)
endif()