#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.sound_55_SRCS)
file(GLOB windows-classes.javax.sound_55_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.sound_55_HEADERS}) 
list(LENGTH windows-classes.javax.sound_55_SRCS windows-classes.javax.sound_55_SRCS_LENGTH)
if(windows-classes.javax.sound_55_SRCS_LENGTH)
	add_library(windows-classes.javax.sound_55 OBJECT "${windows-classes.javax.sound_55_SRCS}" "${windows-classes.javax.sound_55_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.sound_55)
endif()