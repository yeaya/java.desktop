#machine generated

add_definitions(-DLIBRARY_NAME=javajpeg)

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.libjavajpeg OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.libjavajpeg)
endif()