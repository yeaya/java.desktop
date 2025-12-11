#ifndef _sun_java2d_metal_MTLRenderer_h_
#define _sun_java2d_metal_MTLRenderer_h_
//$ class sun.java2d.metal.MTLRenderer
//$ extends sun.java2d.pipe.BufferedRenderPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/BufferedRenderPipe.h>

namespace java {
	namespace awt {
		namespace geom {
			class Path2D$Float;
		}
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
			class SpanIterator;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace metal {

class MTLRenderer : public ::sun::java2d::pipe::BufferedRenderPipe {
	$class(MTLRenderer, $NO_CLASS_INIT, ::sun::java2d::pipe::BufferedRenderPipe)
public:
	MTLRenderer();
	using ::sun::java2d::pipe::BufferedRenderPipe::drawPoly;
	void init$(::sun::java2d::pipe::RenderQueue* rq);
	static ::sun::java2d::pipe::RenderQueue* access$000(::sun::java2d::metal::MTLRenderer* x0);
	static void access$100(::sun::java2d::metal::MTLRenderer* x0, ::sun::java2d::SunGraphics2D* x1, $ints* x2, $ints* x3, int32_t x4, bool x5);
	static void access$200(::sun::java2d::metal::MTLRenderer* x0, ::sun::java2d::SunGraphics2D* x1, ::java::awt::geom::Path2D$Float* x2, int32_t x3, int32_t x4);
	static void access$300(::sun::java2d::metal::MTLRenderer* x0, ::sun::java2d::SunGraphics2D* x1, ::java::awt::geom::Path2D$Float* x2, int32_t x3, int32_t x4);
	static void access$400(::sun::java2d::metal::MTLRenderer* x0, ::sun::java2d::SunGraphics2D* x1, ::sun::java2d::pipe::SpanIterator* x2, int32_t x3, int32_t x4);
	virtual void copyArea(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy);
	virtual void drawPoly($ints* xPoints, $ints* yPoints, int32_t nPoints, bool isClosed, int32_t transX, int32_t transY) override;
	virtual ::sun::java2d::metal::MTLRenderer* traceWrap();
	virtual void validateContext(::sun::java2d::SunGraphics2D* sg2d) override;
	virtual void validateContextAA(::sun::java2d::SunGraphics2D* sg2d) override;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLRenderer_h_