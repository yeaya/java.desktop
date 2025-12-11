#machine generated

add_subdirectory("config")
add_subdirectory("internal")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(windows-native.libfreetype._24 OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(windows-native.libfreetype._24)
endif()