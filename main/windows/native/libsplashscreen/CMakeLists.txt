#machine generated

add_definitions(-DLIBRARY_NAME=splashscreen)
add_definitions(-DSPLASHSCREEN -DPNG_NO_MMX_CODE -DPNG_ARM_NEON_OPT=0 -DPNG_ARM_NEON_IMPLEMENTATION=0)

if(JCPP_OS MATCHES "windows")
	add_definitions("-DWITH_WIN32")
endif()

include_directories("../../../share/native/libsplashscreen")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(windows-native.libsplashscreen OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(windows-native.libsplashscreen)
endif()