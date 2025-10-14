#machine generated

add_subdirectory("spi")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.sound_56_SRCS)
file(GLOB windows-classes.javax.sound_56_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.sound_56_HEADERS}) 
list(LENGTH windows-classes.javax.sound_56_SRCS windows-classes.javax.sound_56_SRCS_LENGTH)
if(windows-classes.javax.sound_56_SRCS_LENGTH)
	add_library(windows-classes.javax.sound_56 OBJECT "${windows-classes.javax.sound_56_SRCS}" "${windows-classes.javax.sound_56_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.sound_56)
endif()