#machine generated

add_subdirectory("basic")
add_subdirectory("metal")
add_subdirectory("synth")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.swing.internal.plaf OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.swing.internal.plaf)
endif()