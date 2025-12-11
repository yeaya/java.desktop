#machine generated

add_subdirectory("debug")
add_subdirectory("medialib")
add_subdirectory("utility")

if(JCPP_OS MATCHES "linux")
	include_directories("../../../../linux/native/common/awt")
endif()

if(JCPP_OS MATCHES "macos")
	include_directories("../../../../macos/native/common/awt")
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("../../../../windows/native/common/awt")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.common.awt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.common.awt)
endif()