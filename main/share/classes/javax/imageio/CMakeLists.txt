#machine generated

add_subdirectory("event")
add_subdirectory("metadata")
add_subdirectory("plugins")
add_subdirectory("spi")
add_subdirectory("stream")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.imageio OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.imageio)
endif()