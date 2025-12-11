#machine generated

if(JCPP_OS MATCHES "macos")
	add_definitions("-DNULL=0")
endif()

if(JCPP_OS MATCHES "linux")
	include_directories("../../../../../linux/native/common/awt/utility")
endif()

if(JCPP_OS MATCHES "macos")
	include_directories("../../../../../macos/native/common/awt/utility")
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("../../../../../windows/native/common/awt/utility")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.common.awt.utility OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.common.awt.utility)
endif()