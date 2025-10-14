#machine generated

add_subdirectory("parser")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.swing_76_SRCS)
file(GLOB windows-classes.javax.swing_76_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.swing_76_HEADERS}) 
list(LENGTH windows-classes.javax.swing_76_SRCS windows-classes.javax.swing_76_SRCS_LENGTH)
if(windows-classes.javax.swing_76_SRCS_LENGTH)
	add_library(windows-classes.javax.swing_76 OBJECT "${windows-classes.javax.swing_76_SRCS}" "${windows-classes.javax.swing_76_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.swing_76)
endif()