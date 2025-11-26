#machine generated

add_subdirectory("icons")
add_subdirectory("sounds")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.swing.plaf.metal OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.swing.plaf.metal)
endif()