#machine generated

include_directories("../../../../share/native/libawt/java2d")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos-native.libawt.java2d OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos-native.libawt.java2d)
endif()