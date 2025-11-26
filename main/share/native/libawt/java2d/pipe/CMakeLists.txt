#machine generated

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.libawt.java2d.pipe OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.libawt.java2d.pipe)
endif()