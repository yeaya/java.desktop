#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native.common.awt._106_SRCS)
file(GLOB windows-native.common.awt._106_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native.common.awt._106_HEADERS}) 
list(LENGTH windows-native.common.awt._106_SRCS windows-native.common.awt._106_SRCS_LENGTH)
if(windows-native.common.awt._106_SRCS_LENGTH)
	add_library(windows-native.common.awt._106 OBJECT "${windows-native.common.awt._106_SRCS}" "${windows-native.common.awt._106_HEADERS}")
	jcpp_enable_bigobj(windows-native.common.awt._106)
endif()