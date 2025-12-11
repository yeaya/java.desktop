#machine generated

add_definitions(-DLIBRARY_NAME=harfbuzz)

if(JCPP_OS MATCHES "macos")
	add_definitions("-DGETPAGESIZE -DHAVE_MPROTECT -DHAVE_PTHREAD")
	add_definitions("-DHAVE_SYSCONF -DHAVE_SYS_MMAN_H -DHAVE_UNISTD_H")
	add_definitions("-DHB_NO_PRAGMA_GCC_DIAGNOSTIC")
	add_definitions("-DHAVE_INTEL_ATOMIC_PRIMITIVES")
endif()

include_directories("../../../share/native/libharfbuzz")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos-native.libharfbuzz OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos-native.libharfbuzz)
endif()