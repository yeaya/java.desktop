#machine generated

include_directories("../../../../share/native/libawt/awt")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos-native.libawt.awt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos-native.libawt.awt)
endif()