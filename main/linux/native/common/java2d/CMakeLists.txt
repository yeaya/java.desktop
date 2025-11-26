#machine generated

add_subdirectory("opengl")
add_subdirectory("x11")

include_directories("../../../../share/native/common/java2d")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux-native.common.java2d OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux-native.common.java2d)
endif()