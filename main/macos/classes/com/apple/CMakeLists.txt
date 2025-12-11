#machine generated

add_subdirectory("eawt")
add_subdirectory("eio")
add_subdirectory("laf")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos.com.apple OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos.com.apple)
endif()