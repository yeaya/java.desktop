#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.javax.acces_42_SRCS)
file(GLOB windows-classes.javax.acces_42_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.javax.acces_42_HEADERS}) 
list(LENGTH windows-classes.javax.acces_42_SRCS windows-classes.javax.acces_42_SRCS_LENGTH)
if(windows-classes.javax.acces_42_SRCS_LENGTH)
	add_library(windows-classes.javax.acces_42 OBJECT "${windows-classes.javax.acces_42_SRCS}" "${windows-classes.javax.acces_42_HEADERS}")
	jcpp_enable_bigobj(windows-classes.javax.acces_42)
endif()