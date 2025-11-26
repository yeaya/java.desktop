#machine generated

add_subdirectory("icons")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.java.swing.plaf.window OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.java.swing.plaf.window)
endif()