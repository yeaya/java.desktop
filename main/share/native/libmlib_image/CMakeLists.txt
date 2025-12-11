#machine generated

add_definitions(-DLIBRARY_NAME=mlib_image)
add_definitions(-D__USE_J2D_NAMES -D__MEDIALIB_OLD_NAMES -DMLIB_NO_LIBSUNMATH -DMLIB_OS64BIT)

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.libmlib_image OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.libmlib_image)
endif()