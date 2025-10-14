#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.include_SRCS)
file(GLOB windows-native.include_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.include_HEADERS}) 
list(LENGTH windows-native.include_SRCS windows-native.include_SRCS_LENGTH)
if(windows-native.include_SRCS_LENGTH)
	add_library(windows-native.include OBJECT "${windows-native.include_SRCS}" "${windows-native.include_HEADERS}")
	jcpp_enable_bigobj(windows-native.include)
endif()