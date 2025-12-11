#ifndef _sun_java2d_metal_MTLGraphicsConfig$MTLImageCaps_h_
#define _sun_java2d_metal_MTLGraphicsConfig$MTLImageCaps_h_
//$ class sun.java2d.metal.MTLGraphicsConfig$MTLImageCaps
//$ extends java.awt.ImageCapabilities

#include <java/awt/ImageCapabilities.h>

namespace sun {
	namespace java2d {
		namespace metal {

class MTLGraphicsConfig$MTLImageCaps : public ::java::awt::ImageCapabilities {
	$class(MTLGraphicsConfig$MTLImageCaps, $NO_CLASS_INIT, ::java::awt::ImageCapabilities)
public:
	MTLGraphicsConfig$MTLImageCaps();
	void init$();
	virtual bool isTrueVolatile() override;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLGraphicsConfig$MTLImageCaps_h_