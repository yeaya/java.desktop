#machine generated

add_subdirectory("im")
add_subdirectory("image")
add_subdirectory("resources")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos.sun.awt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos.sun.awt)
endif()