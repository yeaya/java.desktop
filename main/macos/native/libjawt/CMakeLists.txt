#machine generated

add_definitions(-DLIBRARY_NAME=jawt)

if(JCPP_OS MATCHES "macos")
	add_definitions("-DHEADLESS")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos-native.libjawt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos-native.libjawt)
endif()