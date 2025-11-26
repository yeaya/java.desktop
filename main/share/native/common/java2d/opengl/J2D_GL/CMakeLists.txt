#machine generated

if(JCPP_OS MATCHES "linux")
	include_directories("../../../../../../linux/native/common/java2d/opengl/J2D_GL")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.common.java2d.opengl.J2 OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.common.java2d.opengl.J2)
endif()