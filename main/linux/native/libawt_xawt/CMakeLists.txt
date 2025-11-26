#machine generated

add_subdirectory("awt")
add_subdirectory("java2d")
add_subdirectory("xawt")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux-native.libawt_xawt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux-native.libawt_xawt)
endif()