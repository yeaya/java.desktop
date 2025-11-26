#ifndef _sun_java2d_opengl_GLXGraphicsConfig$GLXImageCaps_h_
#define _sun_java2d_opengl_GLXGraphicsConfig$GLXImageCaps_h_
//$ class sun.java2d.opengl.GLXGraphicsConfig$GLXImageCaps
//$ extends java.awt.ImageCapabilities

#include <java/awt/ImageCapabilities.h>

namespace sun {
	namespace java2d {
		namespace opengl {

class GLXGraphicsConfig$GLXImageCaps : public ::java::awt::ImageCapabilities {
	$class(GLXGraphicsConfig$GLXImageCaps, $NO_CLASS_INIT, ::java::awt::ImageCapabilities)
public:
	GLXGraphicsConfig$GLXImageCaps();
	void init$();
	virtual bool isTrueVolatile() override;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_GLXGraphicsConfig$GLXImageCaps_h_