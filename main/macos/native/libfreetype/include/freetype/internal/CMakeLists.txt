#machine generated

add_subdirectory("services")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos-native.libfreetype.in_14 OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos-native.libfreetype.in_14)
endif()