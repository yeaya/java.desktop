#machine generated

add_subdirectory("applet")
add_subdirectory("awt")
add_subdirectory("beans")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(java OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(java)
endif()