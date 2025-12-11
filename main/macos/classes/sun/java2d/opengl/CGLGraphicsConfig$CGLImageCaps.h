#ifndef _sun_java2d_opengl_CGLGraphicsConfig$CGLImageCaps_h_
#define _sun_java2d_opengl_CGLGraphicsConfig$CGLImageCaps_h_
//$ class sun.java2d.opengl.CGLGraphicsConfig$CGLImageCaps
//$ extends java.awt.ImageCapabilities

#include <java/awt/ImageCapabilities.h>

namespace sun {
	namespace java2d {
		namespace opengl {

class CGLGraphicsConfig$CGLImageCaps : public ::java::awt::ImageCapabilities {
	$class(CGLGraphicsConfig$CGLImageCaps, $NO_CLASS_INIT, ::java::awt::ImageCapabilities)
public:
	CGLGraphicsConfig$CGLImageCaps();
	void init$();
	virtual bool isTrueVolatile() override;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_CGLGraphicsConfig$CGLImageCaps_h_