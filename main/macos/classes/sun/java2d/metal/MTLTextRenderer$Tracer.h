#ifndef _sun_java2d_metal_MTLTextRenderer$Tracer_h_
#define _sun_java2d_metal_MTLTextRenderer$Tracer_h_
//$ class sun.java2d.metal.MTLTextRenderer$Tracer
//$ extends sun.java2d.metal.MTLTextRenderer

#include <sun/java2d/metal/MTLTextRenderer.h>

namespace sun {
	namespace font {
		class GlyphList;
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

class MTLTextRenderer$Tracer : public ::sun::java2d::metal::MTLTextRenderer {
	$class(MTLTextRenderer$Tracer, $NO_CLASS_INIT, ::sun::java2d::metal::MTLTextRenderer)
public:
	MTLTextRenderer$Tracer();
	using ::sun::java2d::metal::MTLTextRenderer::drawGlyphList;
	void init$(::sun::java2d::metal::MTLTextRenderer* mtltr);
	virtual void drawGlyphList(::sun::java2d::SunGraphics2D* sg2d, ::sun::font::GlyphList* gl) override;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLTextRenderer$Tracer_h_