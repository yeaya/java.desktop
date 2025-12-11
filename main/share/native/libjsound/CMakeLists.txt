#machine generated

add_definitions(-DLIBRARY_NAME=jsound)

if(JCPP_OS MATCHES "linux")
	add_definitions("-DX_PLATFORM=X_LINUX")
	add_definitions("-DUSE_PORTS=TRUE")
	add_definitions("-DUSE_DAUDIO=TRUE")
	add_definitions("-DUSE_PLATFORM_MIDI_OUT=TRUE")
	add_definitions("-DUSE_PLATFORM_MIDI_IN=TRUE")
endif()

if(JCPP_OS MATCHES "macos")
	add_definitions("-DX_PLATFORM=X_MACOSX")
	add_definitions("-DUSE_PORTS=TRUE")
	add_definitions("-DUSE_DAUDIO=TRUE")
	add_definitions("-DUSE_PLATFORM_MIDI_OUT=TRUE")
	add_definitions("-DUSE_PLATFORM_MIDI_IN=TRUE")
endif()

if(JCPP_OS MATCHES "windows")
	add_definitions("-DX_PLATFORM=X_WINDOWS")
	add_definitions("-DUSE_PORTS=TRUE")
	add_definitions("-DUSE_DAUDIO=TRUE")
	add_definitions("-DUSE_PLATFORM_MIDI_OUT=TRUE")
	add_definitions("-DUSE_PLATFORM_MIDI_IN=TRUE")
endif()

if(JCPP_OS MATCHES "linux")
	include_directories("../../../linux/native/libjsound")
endif()

if(JCPP_OS MATCHES "macos")
	include_directories("../../../macos/native/libjsound")
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("../../../windows/native/libjsound")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.libjsound OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.libjsound)
endif()