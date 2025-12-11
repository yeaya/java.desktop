#machine generated

add_definitions(-DLIBRARY_NAME=jsound)

if(JCPP_OS MATCHES "macos")
	add_definitions("-DX_PLATFORM=X_MACOSX")
	add_definitions("-DUSE_PORTS=TRUE")
	add_definitions("-DUSE_DAUDIO=TRUE")
	add_definitions("-DUSE_PLATFORM_MIDI_OUT=TRUE")
	add_definitions("-DUSE_PLATFORM_MIDI_IN=TRUE")
endif()

include_directories("../../../share/native/libjsound")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos-native.libjsound OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos-native.libjsound)
endif()