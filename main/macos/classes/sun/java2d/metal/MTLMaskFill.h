#ifndef _sun_java2d_metal_MTLMaskFill_h_
#define _sun_java2d_metal_MTLMaskFill_h_
//$ class sun.java2d.metal.MTLMaskFill
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
		namespace metal {

class MTLMaskFill : public ::sun::java2d::pipe::BufferedMaskFill {
	$class(MTLMaskFill, $NO_CLASS_INIT, ::sun::java2d::pipe::BufferedMaskFill)
public:
	MTLMaskFill();
	void init$(::sun::java2d::loops::SurfaceType* srcType, ::sun::java2d::loops::CompositeType* compType);
	virtual void maskFill(int32_t x, int32_t y, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask) override;
	static void register$();
	virtual void validateContext(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Composite* comp, int32_t ctxflags) override;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLMaskFill_h_