#machine generated

add_subdirectory("midi")
add_subdirectory("sampled")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.sound OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.sound)
endif()