#machine generated

add_subdirectory("parser")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.swing.text.html OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.swing.text.html)
endif()