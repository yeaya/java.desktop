#ifndef _sun_java2d_metal_MTLGraphicsConfig$MTLBufferCaps_h_
#define _sun_java2d_metal_MTLGraphicsConfig$MTLBufferCaps_h_
//$ class sun.java2d.metal.MTLGraphicsConfig$MTLBufferCaps
//$ extends java.awt.BufferCapabilities

#include <java/awt/BufferCapabilities.h>

namespace sun {
	namespace java2d {
		namespace metal {

class MTLGraphicsConfig$MTLBufferCaps : public ::java::awt::BufferCapabilities {
	$class(MTLGraphicsConfig$MTLBufferCaps, $NO_CLASS_INIT, ::java::awt::BufferCapabilities)
public:
	MTLGraphicsConfig$MTLBufferCaps();
	void init$(bool dblBuf);
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLGraphicsConfig$MTLBufferCaps_h_