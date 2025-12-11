#machine generated

add_subdirectory("im")
add_subdirectory("image")
add_subdirectory("X11")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux.sun.awt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux.sun.awt)
endif()