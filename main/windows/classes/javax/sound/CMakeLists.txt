#machine generated

add_subdirectory("midi")
add_subdirectory("sampled")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.sound_SRCS)
file(GLOB windows-classes.javax.sound_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.sound_HEADERS}) 
list(LENGTH windows-classes.javax.sound_SRCS windows-classes.javax.sound_SRCS_LENGTH)
if(windows-classes.javax.sound_SRCS_LENGTH)
	add_library(windows-classes.javax.sound OBJECT "${windows-classes.javax.sound_SRCS}" "${windows-classes.javax.sound_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.sound)
endif()