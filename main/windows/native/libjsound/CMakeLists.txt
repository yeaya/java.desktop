#machine generated

if(JCPP_OS MATCHES "windows")
	add_definitions("-DLIBRARY_NAME=jsound")
endif()

if(JCPP_OS MATCHES "windows")
	add_definitions("-DX_PLATFORM=X_WINDOWS")
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.libjsound_SRCS)
file(GLOB windows-native.libjsound_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.libjsound_HEADERS}) 
list(LENGTH windows-native.libjsound_SRCS windows-native.libjsound_SRCS_LENGTH)
if(windows-native.libjsound_SRCS_LENGTH)
	add_library(windows-native.libjsound OBJECT "${windows-native.libjsound_SRCS}" "${windows-native.libjsound_HEADERS}")
	jcpp_enable_bigobj(windows-native.libjsound)
endif()