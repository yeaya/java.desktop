#machine generated

if(JCPP_OS MATCHES "macos")
	add_definitions("-DNULL=0")
endif()

include_directories("../../../../../share/native/common/awt/utility")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos-native.common.awt.utilit OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos-native.common.awt.utilit)
endif()