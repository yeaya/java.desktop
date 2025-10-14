#ifndef _sun_java2d_opengl_WGLGraphicsConfig$WGLImageCaps_h_
#define _sun_java2d_opengl_WGLGraphicsConfig$WGLImageCaps_h_
//$ class sun.java2d.opengl.WGLGraphicsConfig$WGLImageCaps
//$ extends java.awt.ImageCapabilities

#include <java/awt/ImageCapabilities.h>

namespace sun {
	namespace java2d {
		namespace opengl {

class WGLGraphicsConfig$WGLImageCaps : public ::java::awt::ImageCapabilities {
	$class(WGLGraphicsConfig$WGLImageCaps, $NO_CLASS_INIT, ::java::awt::ImageCapabilities)
public:
	WGLGraphicsConfig$WGLImageCaps();
	void init$();
	virtual bool isTrueVolatile() override;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_WGLGraphicsConfig$WGLImageCaps_h_