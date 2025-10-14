#machine generated

add_subdirectory("spi")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.sound_54_SRCS)
file(GLOB windows-classes.javax.sound_54_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.sound_54_HEADERS}) 
list(LENGTH windows-classes.javax.sound_54_SRCS windows-classes.javax.sound_54_SRCS_LENGTH)
if(windows-classes.javax.sound_54_SRCS_LENGTH)
	add_library(windows-classes.javax.sound_54 OBJECT "${windows-classes.javax.sound_54_SRCS}" "${windows-classes.javax.sound_54_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.sound_54)
endif()