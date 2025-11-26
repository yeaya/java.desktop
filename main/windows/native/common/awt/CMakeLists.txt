#machine generated

add_subdirectory("systemscale")
add_subdirectory("utility")

include_directories("../../../../share/native/common/awt")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(windows-native.common.awt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(windows-native.common.awt)
endif()