#ifndef _sun_java2d_metal_MTLPaints$Texture_h_
#define _sun_java2d_metal_MTLPaints$Texture_h_
//$ class sun.java2d.metal.MTLPaints$Texture
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

class MTLPaints$Texture : public ::sun::java2d::metal::MTLPaints {
	$class(MTLPaints$Texture, $NO_CLASS_INIT, ::sun::java2d::metal::MTLPaints)
public:
	MTLPaints$Texture();
	void init$();
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) override;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLPaints$Texture_h_