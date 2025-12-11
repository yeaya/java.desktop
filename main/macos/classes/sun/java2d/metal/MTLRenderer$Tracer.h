#ifndef _sun_java2d_metal_MTLRenderer$Tracer_h_
#define _sun_java2d_metal_MTLRenderer$Tracer_h_
//$ class sun.java2d.metal.MTLRenderer$Tracer
//$ extends sun.java2d.metal.MTLRenderer

#include <java/lang/Array.h>
#include <sun/java2d/metal/MTLRenderer.h>

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
			class ParallelogramPipe;
			class SpanIterator;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace metal {

class MTLRenderer$Tracer : public ::sun::java2d::metal::MTLRenderer {
	$class(MTLRenderer$Tracer, $NO_CLASS_INIT, ::sun::java2d::metal::MTLRenderer)
public:
	MTLRenderer$Tracer();
	using ::sun::java2d::metal::MTLRenderer::drawPoly;
	void init$(::sun::java2d::metal::MTLRenderer* this$0, ::sun::java2d::metal::MTLRenderer* mtlr);
	virtual void copyArea(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) override;
	virtual void drawLine(::sun::java2d::SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawParallelogram(::sun::java2d::SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) override;
	virtual void drawPath(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::geom::Path2D$Float* p2df, int32_t transx, int32_t transy) override;
	virtual void drawPoly(::sun::java2d::SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints, bool isClosed) override;
	virtual void drawRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void fillParallelogram(::sun::java2d::SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) override;
	virtual void fillPath(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::geom::Path2D$Float* p2df, int32_t transx, int32_t transy) override;
	virtual void fillRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void fillSpans(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::pipe::SpanIterator* si, int32_t transx, int32_t transy) override;
	virtual ::sun::java2d::pipe::ParallelogramPipe* getAAParallelogramPipe() override;
	virtual void validateContext(::sun::java2d::SunGraphics2D* sg2d) override;
	::sun::java2d::metal::MTLRenderer* this$0 = nullptr;
	::sun::java2d::metal::MTLRenderer* mtlr = nullptr;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLRenderer$Tracer_h_