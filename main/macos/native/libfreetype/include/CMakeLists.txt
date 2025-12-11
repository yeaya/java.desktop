#machine generated

add_subdirectory("freetype")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos-native.libfreetype.inclu OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos-native.libfreetype.inclu)
endif()