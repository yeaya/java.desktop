#machine generated

add_subdirectory("plaf")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(windows.com.sun.java.swing OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(windows.com.sun.java.swing)
endif()