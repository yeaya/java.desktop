#ifndef _sun_java2d_d3d_D3DPaints_h_
#define _sun_java2d_d3d_D3DPaints_h_
//$ class sun.java2d.d3d.D3DPaints
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
		namespace d3d {

class D3DPaints : public ::java::lang::Object {
	$class(D3DPaints, 0, ::java::lang::Object)
public:
	D3DPaints();
	void init$();
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) {return false;}
	static bool isValid(::sun::java2d::SunGraphics2D* sg2d);
	static ::java::util::Map* impls;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DPaints_h_