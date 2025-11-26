#machine generated

add_subdirectory("decoder")
add_subdirectory("editors")
add_subdirectory("finder")
add_subdirectory("infos")
add_subdirectory("introspect")
add_subdirectory("util")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.beans OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.beans)
endif()