#machine generated

add_definitions(-DLIBRARY_NAME=splashscreen)
add_definitions(-DSPLASHSCREEN -DPNG_NO_MMX_CODE -DPNG_ARM_NEON_OPT=0 -DPNG_ARM_NEON_IMPLEMENTATION=0)

if(JCPP_OS MATCHES "linux")
	add_definitions("-DWITH_X11")
endif()

if(JCPP_OS MATCHES "macos")
	add_definitions("-DWITH_MACOSX -D__MATH_H")
	add_definitions("-x objective-c")
endif()

add_subdirectory("giflib")
add_subdirectory("libpng")

if(JCPP_OS MATCHES "windows")
	add_definitions("-DWITH_WIN32")
endif()

if(JCPP_OS MATCHES "linux")
	include_directories("../../../linux/native/libsplashscreen")
endif()

if(JCPP_OS MATCHES "macos")
	include_directories("../../../macos/native/libsplashscreen")
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("../../../windows/native/libsplashscreen")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.libsplashscreen OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.libsplashscreen)
endif()