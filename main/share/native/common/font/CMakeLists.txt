#machine generated

if(JCPP_OS MATCHES "linux")
	include_directories("../../../../linux/native/common/font")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.common.font OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.common.font)
endif()