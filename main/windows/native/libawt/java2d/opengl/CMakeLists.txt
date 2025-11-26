#machine generated

add_subdirectory("J2D_GL")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(windows-native.libawt.java2d.o OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(windows-native.libawt.java2d.o)
endif()