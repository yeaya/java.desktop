#machine generated

if(JCPP_OS MATCHES "windows")
	add_definitions("-DLIBRARY_NAME=jawt")
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libjawt_SRCS)
file(GLOB windows-native.libjawt_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libjawt_HEADERS}) 
list(LENGTH windows-native.libjawt_SRCS windows-native.libjawt_SRCS_LENGTH)
if(windows-native.libjawt_SRCS_LENGTH)
	add_library(windows-native.libjawt OBJECT "${windows-native.libjawt_SRCS}" "${windows-native.libjawt_HEADERS}")
	jcpp_enable_bigobj(windows-native.libjawt)
endif()