#machine generated

include_directories("../../../../../../share/native/common/java2d/opengl/J2D_GL")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux-native.common.java2d.o_7 OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux-native.common.java2d.o_7)
endif()