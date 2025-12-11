#machine generated

if(JCPP_OS MATCHES "macos")
	add_definitions("-DLIBRARY_NAME=freetype")
	add_definitions("-DFT2_BUILD_LIBRARY")
endif()

add_subdirectory("include")
add_subdirectory("src")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos-native.libfreetype OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos-native.libfreetype)
endif()