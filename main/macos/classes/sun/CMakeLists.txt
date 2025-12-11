#machine generated

add_subdirectory("awt")
add_subdirectory("font")
add_subdirectory("java2d")
add_subdirectory("lwawt")
add_subdirectory("print")
add_subdirectory("swing")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos.sun OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos.sun)
endif()