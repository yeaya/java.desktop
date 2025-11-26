#machine generated

include_directories("../../../../../share/native/common/awt/utility")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(windows-native.common.awt.util OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(windows-native.common.awt.util)
endif()