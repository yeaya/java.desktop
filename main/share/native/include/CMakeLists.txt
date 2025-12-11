#machine generated

if(JCPP_OS MATCHES "linux")
	include_directories("../../../linux/native/include")
endif()

if(JCPP_OS MATCHES "macos")
	include_directories("../../../macos/native/include")
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("../../../windows/native/include")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.include OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.include)
endif()