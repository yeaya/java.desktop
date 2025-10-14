#machine generated

if(JCPP_OS MATCHES "windows")
	add_definitions("-DLIBRARY_NAME=fontmanager")
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libfontmanager_SRCS)
file(GLOB windows-native.libfontmanager_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libfontmanager_HEADERS}) 
list(LENGTH windows-native.libfontmanager_SRCS windows-native.libfontmanager_SRCS_LENGTH)
if(windows-native.libfontmanager_SRCS_LENGTH)
	add_library(windows-native.libfontmanager OBJECT "${windows-native.libfontmanager_SRCS}" "${windows-native.libfontmanager_HEADERS}")
	jcpp_enable_bigobj(windows-native.libfontmanager)
endif()