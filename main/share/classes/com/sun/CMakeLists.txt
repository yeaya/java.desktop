#machine generated

add_subdirectory("accessibility")
add_subdirectory("beans")
add_subdirectory("imageio")
add_subdirectory("java")
add_subdirectory("media")
add_subdirectory("swing")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun)
endif()