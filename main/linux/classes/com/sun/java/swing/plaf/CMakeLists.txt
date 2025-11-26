#machine generated

add_subdirectory("gtk")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux.com.sun.java.swing.plaf OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux.com.sun.java.swing.plaf)
endif()