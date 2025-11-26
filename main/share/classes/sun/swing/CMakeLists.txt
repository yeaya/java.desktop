#machine generated

add_subdirectory("icon")
add_subdirectory("plaf")
add_subdirectory("table")
add_subdirectory("text")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.swing OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.swing)
endif()