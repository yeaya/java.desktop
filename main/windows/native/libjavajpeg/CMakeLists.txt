#machine generated

if(JCPP_OS MATCHES "windows")
	add_definitions("-DLIBRARY_NAME=javajpeg")
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libjavajpeg_SRCS)
file(GLOB windows-native.libjavajpeg_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libjavajpeg_HEADERS}) 
list(LENGTH windows-native.libjavajpeg_SRCS windows-native.libjavajpeg_SRCS_LENGTH)
if(windows-native.libjavajpeg_SRCS_LENGTH)
	add_library(windows-native.libjavajpeg OBJECT "${windows-native.libjavajpeg_SRCS}" "${windows-native.libjavajpeg_HEADERS}")
	jcpp_enable_bigobj(windows-native.libjavajpeg)
endif()