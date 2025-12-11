#ifndef _sun_java2d_metal_MTLPaints$MultiGradient_h_
#define _sun_java2d_metal_MTLPaints$MultiGradient_h_
//$ class sun.java2d.metal.MTLPaints$MultiGradient
//$ extends sun.java2d.metal.MTLPaints

#include <sun/java2d/metal/MTLPaints.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace metal {

class MTLPaints$MultiGradient : public ::sun::java2d::metal::MTLPaints {
	$class(MTLPaints$MultiGradient, $NO_CLASS_INIT, ::sun::java2d::metal::MTLPaints)
public:
	MTLPaints$MultiGradient();
	void init$();
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) override;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLPaints$MultiGradient_h_