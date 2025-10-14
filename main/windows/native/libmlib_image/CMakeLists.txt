#machine generated

if(JCPP_OS MATCHES "windows")
	add_definitions("-DLIBRARY_NAME=mlib_image")
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libmlib_image_SRCS)
file(GLOB windows-native.libmlib_image_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libmlib_image_HEADERS}) 
list(LENGTH windows-native.libmlib_image_SRCS windows-native.libmlib_image_SRCS_LENGTH)
if(windows-native.libmlib_image_SRCS_LENGTH)
	add_library(windows-native.libmlib_image OBJECT "${windows-native.libmlib_image_SRCS}" "${windows-native.libmlib_image_HEADERS}")
	jcpp_enable_bigobj(windows-native.libmlib_image)
endif()