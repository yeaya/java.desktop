#machine generated

add_definitions(-DLIBRARY_NAME=mlib_image)

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.libmlib_image OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.libmlib_image)
endif()