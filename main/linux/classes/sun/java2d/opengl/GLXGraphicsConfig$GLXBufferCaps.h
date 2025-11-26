#ifndef _sun_java2d_opengl_GLXGraphicsConfig$GLXBufferCaps_h_
#define _sun_java2d_opengl_GLXGraphicsConfig$GLXBufferCaps_h_
//$ class sun.java2d.opengl.GLXGraphicsConfig$GLXBufferCaps
//$ extends java.awt.BufferCapabilities

#include <java/awt/BufferCapabilities.h>

namespace sun {
	namespace java2d {
		namespace opengl {

class GLXGraphicsConfig$GLXBufferCaps : public ::java::awt::BufferCapabilities {
	$class(GLXGraphicsConfig$GLXBufferCaps, $NO_CLASS_INIT, ::java::awt::BufferCapabilities)
public:
	GLXGraphicsConfig$GLXBufferCaps();
	void init$(bool dblBuf);
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_GLXGraphicsConfig$GLXBufferCaps_h_