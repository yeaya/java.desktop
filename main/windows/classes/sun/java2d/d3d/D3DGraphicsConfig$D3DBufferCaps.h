#ifndef _sun_java2d_d3d_D3DGraphicsConfig$D3DBufferCaps_h_
#define _sun_java2d_d3d_D3DGraphicsConfig$D3DBufferCaps_h_
//$ class sun.java2d.d3d.D3DGraphicsConfig$D3DBufferCaps
//$ extends java.awt.BufferCapabilities

#include <java/awt/BufferCapabilities.h>

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DGraphicsConfig$D3DBufferCaps : public ::java::awt::BufferCapabilities {
	$class(D3DGraphicsConfig$D3DBufferCaps, $NO_CLASS_INIT, ::java::awt::BufferCapabilities)
public:
	D3DGraphicsConfig$D3DBufferCaps();
	void init$();
	virtual bool isMultiBufferAvailable() override;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DGraphicsConfig$D3DBufferCaps_h_