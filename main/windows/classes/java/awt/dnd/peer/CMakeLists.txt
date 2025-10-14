#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.awt.dn_38_SRCS)
file(GLOB windows-classes.java.awt.dn_38_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.awt.dn_38_HEADERS}) 
list(LENGTH windows-classes.java.awt.dn_38_SRCS windows-classes.java.awt.dn_38_SRCS_LENGTH)
if(windows-classes.java.awt.dn_38_SRCS_LENGTH)
	add_library(windows-classes.java.awt.dn_38 OBJECT "${windows-classes.java.awt.dn_38_SRCS}" "${windows-classes.java.awt.dn_38_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.awt.dn_38)
endif()