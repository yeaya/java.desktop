#machine generated

include_directories("../../../../../share/native/common/awt/utility")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux-native.common.awt.utilit OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux-native.common.awt.utilit)
endif()