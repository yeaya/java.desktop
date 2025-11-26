#machine generated

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux-native.common.java2d.x11 OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux-native.common.java2d.x11)
endif()