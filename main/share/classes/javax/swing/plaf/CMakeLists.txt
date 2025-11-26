#machine generated

add_subdirectory("basic")
add_subdirectory("metal")
add_subdirectory("multi")
add_subdirectory("nimbus")
add_subdirectory("synth")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.swing.plaf OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.swing.plaf)
endif()