#machine generated

add_subdirectory("awt")
add_subdirectory("font")
add_subdirectory("java2d")

if(JCPP_OS MATCHES "linux")
	include_directories("../../../linux/native/common")
endif()

if(JCPP_OS MATCHES "macos")
	include_directories("../../../macos/native/common")
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("../../../windows/native/common")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.common OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.common)
endif()