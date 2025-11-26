#machine generated

add_subdirectory("bmp")
add_subdirectory("common")
add_subdirectory("gif")
add_subdirectory("jpeg")
add_subdirectory("png")
add_subdirectory("tiff")
add_subdirectory("wbmp")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.imageio.plugins OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.imageio.plugins)
endif()