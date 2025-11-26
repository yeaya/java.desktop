#machine generated

add_definitions(-DLIBRARY_NAME=harfbuzz)

if(JCPP_OS MATCHES "linux")
	add_definitions("-DGETPAGESIZE")
	add_definitions("-DHAVE_MPROTECT")
	add_definitions("-DHAVE_PTHREAD")
	add_definitions("-DHAVE_SYSCONF")
	add_definitions("-DHAVE_SYS_MMAN_H")
	add_definitions("-DHAVE_UNISTD_H")
	add_definitions("-DHB_NO_PRAGMA_GCC_DIAGNOSTIC")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.libharfbuzz OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.libharfbuzz)
endif()