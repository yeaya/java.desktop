#machine generated

add_definitions(-DLIBRARY_NAME=harfbuzz)

include_directories("../../../share/native/libharfbuzz")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(windows-native.libharfbuzz OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(windows-native.libharfbuzz)
endif()