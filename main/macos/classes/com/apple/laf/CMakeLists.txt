#machine generated

add_subdirectory("resources")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos.com.apple.laf OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos.com.apple.laf)
endif()