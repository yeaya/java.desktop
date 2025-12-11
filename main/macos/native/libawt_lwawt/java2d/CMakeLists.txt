#machine generated

add_subdirectory("metal")
add_subdirectory("opengl")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos-native.libawt_lwawt.java OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos-native.libawt_lwawt.java)
endif()