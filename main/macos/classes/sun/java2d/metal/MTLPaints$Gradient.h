#ifndef _sun_java2d_metal_MTLPaints$Gradient_h_
#define _sun_java2d_metal_MTLPaints$Gradient_h_
//$ class sun.java2d.metal.MTLPaints$Gradient
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

class MTLPaints$Gradient : public ::sun::java2d::metal::MTLPaints {
	$class(MTLPaints$Gradient, $NO_CLASS_INIT, ::sun::java2d::metal::MTLPaints)
public:
	MTLPaints$Gradient();
	void init$();
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) override;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLPaints$Gradient_h_