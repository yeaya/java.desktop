#ifndef _sun_java2d_d3d_D3DMaskFill_h_
#define _sun_java2d_d3d_D3DMaskFill_h_
//$ class sun.java2d.d3d.D3DMaskFill
//$ extends sun.java2d.pipe.BufferedMaskFill

#include <java/lang/Array.h>
#include <sun/java2d/pipe/BufferedMaskFill.h>

namespace java {
	namespace awt {
		class Composite;
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class CompositeType;
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DMaskFill : public ::sun::java2d::pipe::BufferedMaskFill {
	$class(D3DMaskFill, $NO_CLASS_INIT, ::sun::java2d::pipe::BufferedMaskFill)
public:
	D3DMaskFill();
	void init$(::sun::java2d::loops::SurfaceType* srcType, ::sun::java2d::loops::CompositeType* compType);
	virtual void maskFill(int32_t x, int32_t y, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask) override;
	static void register$();
	virtual void validateContext(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Composite* comp, int32_t ctxflags) override;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DMaskFill_h_