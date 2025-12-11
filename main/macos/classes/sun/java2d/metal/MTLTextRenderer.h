#ifndef _sun_java2d_metal_MTLTextRenderer_h_
#define _sun_java2d_metal_MTLTextRenderer_h_
//$ class sun.java2d.metal.MTLTextRenderer
//$ extends sun.java2d.pipe.BufferedTextPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/BufferedTextPipe.h>

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
		namespace pipe {
			class RenderQueue;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace metal {

class MTLTextRenderer : public ::sun::java2d::pipe::BufferedTextPipe {
	$class(MTLTextRenderer, $NO_CLASS_INIT, ::sun::java2d::pipe::BufferedTextPipe)
public:
	MTLTextRenderer();
	using ::sun::java2d::pipe::BufferedTextPipe::drawGlyphList;
	void init$(::sun::java2d::pipe::RenderQueue* rq);
	static ::sun::java2d::pipe::RenderQueue* access$000(::sun::java2d::metal::MTLTextRenderer* x0);
	virtual void drawGlyphList(int32_t numGlyphs, bool usePositions, bool subPixPos, bool rgbOrder, int32_t lcdContrast, float glOrigX, float glOrigY, $longs* images, $floats* positions) override;
	virtual ::sun::java2d::metal::MTLTextRenderer* traceWrap();
	virtual void validateContext(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Composite* comp) override;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLTextRenderer_h_