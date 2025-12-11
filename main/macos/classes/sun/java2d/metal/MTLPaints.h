#ifndef _sun_java2d_metal_MTLPaints_h_
#define _sun_java2d_metal_MTLPaints_h_
//$ class sun.java2d.metal.MTLPaints
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace metal {

class MTLPaints : public ::java::lang::Object {
	$class(MTLPaints, 0, ::java::lang::Object)
public:
	MTLPaints();
	void init$();
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) {return false;}
	static bool isValid(::sun::java2d::SunGraphics2D* sg2d);
	static ::java::util::Map* impls;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLPaints_h_