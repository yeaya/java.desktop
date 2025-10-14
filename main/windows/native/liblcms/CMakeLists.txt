#machine generated

if(JCPP_OS MATCHES "windows")
	add_definitions("-DLIBRARY_NAME=lcms")
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.liblcms_SRCS)
file(GLOB windows-native.liblcms_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.liblcms_HEADERS}) 
list(LENGTH windows-native.liblcms_SRCS windows-native.liblcms_SRCS_LENGTH)
if(windows-native.liblcms_SRCS_LENGTH)
	add_library(windows-native.liblcms OBJECT "${windows-native.liblcms_SRCS}" "${windows-native.liblcms_HEADERS}")
	jcpp_enable_bigobj(windows-native.liblcms)
endif()