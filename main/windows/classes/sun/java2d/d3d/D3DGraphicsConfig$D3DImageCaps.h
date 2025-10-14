#ifndef _sun_java2d_d3d_D3DGraphicsConfig$D3DImageCaps_h_
#define _sun_java2d_d3d_D3DGraphicsConfig$D3DImageCaps_h_
//$ class sun.java2d.d3d.D3DGraphicsConfig$D3DImageCaps
//$ extends java.awt.ImageCapabilities

#include <java/awt/ImageCapabilities.h>

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DGraphicsConfig$D3DImageCaps : public ::java::awt::ImageCapabilities {
	$class(D3DGraphicsConfig$D3DImageCaps, $NO_CLASS_INIT, ::java::awt::ImageCapabilities)
public:
	D3DGraphicsConfig$D3DImageCaps();
	void init$();
	virtual bool isTrueVolatile() override;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DGraphicsConfig$D3DImageCaps_h_