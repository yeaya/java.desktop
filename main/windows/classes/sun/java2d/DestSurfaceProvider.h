#ifndef _sun_java2d_DestSurfaceProvider_h_
#define _sun_java2d_DestSurfaceProvider_h_
//$ interface sun.java2d.DestSurfaceProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		class Surface;
	}
}

namespace sun {
	namespace java2d {

class DestSurfaceProvider : public ::java::lang::Object {
	$interface(DestSurfaceProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::java2d::Surface* getDestSurface() {return nullptr;}
};

	} // java2d
} // sun

#endif // _sun_java2d_DestSurfaceProvider_h_