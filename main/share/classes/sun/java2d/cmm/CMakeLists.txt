#machine generated

add_subdirectory("lcms")
add_subdirectory("profiles")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.java2d.cmm OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.java2d.cmm)
endif()