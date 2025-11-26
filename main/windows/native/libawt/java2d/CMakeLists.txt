#machine generated

add_subdirectory("d3d")
add_subdirectory("opengl")
add_subdirectory("windows")

include_directories("../../../../share/native/libawt/java2d")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(windows-native.libawt.java2d OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(windows-native.libawt.java2d)
endif()