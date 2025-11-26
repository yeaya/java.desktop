#machine generated

add_subdirectory("accessibility")
add_subdirectory("imageio")
add_subdirectory("print")
add_subdirectory("sound")
add_subdirectory("swing")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax)
endif()