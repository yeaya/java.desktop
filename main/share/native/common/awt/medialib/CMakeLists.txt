#machine generated

if(JCPP_OS MATCHES "macos")
	add_definitions("-D__USE_J2D_NAMES -D__MEDIALIB_OLD_NAMES -DMLIB_NO_LIBSUNMATH -DMLIB_OS64BIT")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.common.awt.medialib OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.common.awt.medialib)
endif()