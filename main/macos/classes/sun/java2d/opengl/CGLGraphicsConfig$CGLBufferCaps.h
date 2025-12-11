#ifndef _sun_java2d_opengl_CGLGraphicsConfig$CGLBufferCaps_h_
#define _sun_java2d_opengl_CGLGraphicsConfig$CGLBufferCaps_h_
//$ class sun.java2d.opengl.CGLGraphicsConfig$CGLBufferCaps
//$ extends java.awt.BufferCapabilities

#include <java/awt/BufferCapabilities.h>

namespace sun {
	namespace java2d {
		namespace opengl {

class CGLGraphicsConfig$CGLBufferCaps : public ::java::awt::BufferCapabilities {
	$class(CGLGraphicsConfig$CGLBufferCaps, $NO_CLASS_INIT, ::java::awt::BufferCapabilities)
public:
	CGLGraphicsConfig$CGLBufferCaps();
	void init$(bool dblBuf);
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_CGLGraphicsConfig$CGLBufferCaps_h_