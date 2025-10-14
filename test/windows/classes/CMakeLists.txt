#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-test-classes_SRCS)
file(GLOB windows-test-classes_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-test-classes_HEADERS}) 
list(LENGTH windows-test-classes_SRCS windows-test-classes_SRCS_LENGTH)
if(windows-test-classes_SRCS_LENGTH)
	add_library(windows-test-classes OBJECT "${windows-test-classes_SRCS}" "${windows-test-classes_HEADERS}")
	jcpp_enable_bigobj(windows-test-classes)
endif()