#ifndef _sun_java2d_metal_MTLPaints$LinearGradient_h_
#define _sun_java2d_metal_MTLPaints$LinearGradient_h_
//$ class sun.java2d.metal.MTLPaints$LinearGradient
//$ extends sun.java2d.metal.MTLPaints$MultiGradient

#include <sun/java2d/metal/MTLPaints$MultiGradient.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace metal {

class MTLPaints$LinearGradient : public ::sun::java2d::metal::MTLPaints$MultiGradient {
	$class(MTLPaints$LinearGradient, $NO_CLASS_INIT, ::sun::java2d::metal::MTLPaints$MultiGradient)
public:
	MTLPaints$LinearGradient();
	void init$();
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) override;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLPaints$LinearGradient_h_