#machine generated

add_subdirectory("basic")
add_subdirectory("metal")
add_subdirectory("multi")
add_subdirectory("nimbus")
add_subdirectory("synth")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.swing_64_SRCS)
file(GLOB windows-classes.javax.swing_64_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.swing_64_HEADERS}) 
list(LENGTH windows-classes.javax.swing_64_SRCS windows-classes.javax.swing_64_SRCS_LENGTH)
if(windows-classes.javax.swing_64_SRCS_LENGTH)
	add_library(windows-classes.javax.swing_64 OBJECT "${windows-classes.javax.swing_64_SRCS}" "${windows-classes.javax.swing_64_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.swing_64)
endif()