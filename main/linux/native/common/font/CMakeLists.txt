#machine generated

include_directories("../../../../share/native/common/font")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux-native.common.font OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux-native.common.font)
endif()