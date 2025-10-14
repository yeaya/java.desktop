#ifndef _sun_java2d_opengl_WGLGraphicsConfig$WGLBufferCaps_h_
#define _sun_java2d_opengl_WGLGraphicsConfig$WGLBufferCaps_h_
//$ class sun.java2d.opengl.WGLGraphicsConfig$WGLBufferCaps
//$ extends java.awt.BufferCapabilities

#include <java/awt/BufferCapabilities.h>

namespace sun {
	namespace java2d {
		namespace opengl {

class WGLGraphicsConfig$WGLBufferCaps : public ::java::awt::BufferCapabilities {
	$class(WGLGraphicsConfig$WGLBufferCaps, $NO_CLASS_INIT, ::java::awt::BufferCapabilities)
public:
	WGLGraphicsConfig$WGLBufferCaps();
	void init$(bool dblBuf);
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_WGLGraphicsConfig$WGLBufferCaps_h_