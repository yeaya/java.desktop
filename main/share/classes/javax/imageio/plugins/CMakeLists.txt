#machine generated

add_subdirectory("bmp")
add_subdirectory("jpeg")
add_subdirectory("tiff")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.imageio.plugins OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.imageio.plugins)
endif()