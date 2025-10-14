#ifndef _sun_java2d_pipe_BufferedRenderPipe_h_
#define _sun_java2d_pipe_BufferedRenderPipe_h_
//$ class sun.java2d.pipe.BufferedRenderPipe
//$ extends sun.java2d.pipe.PixelDrawPipe
//$ implements sun.java2d.pipe.PixelFillPipe,sun.java2d.pipe.ShapeDrawPipe,sun.java2d.pipe.ParallelogramPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/ParallelogramPipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>

#pragma push_macro("BYTES_PER_POLY_POINT")
#undef BYTES_PER_POLY_POINT
#pragma push_macro("BYTES_PER_SCANLINE")
#undef BYTES_PER_SCANLINE
#pragma push_macro("BYTES_PER_SPAN")
#undef BYTES_PER_SPAN

namespace java {
	namespace awt {
		class Shape;
	}
}
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
			class BufferedRenderPipe$BufferedDrawHandler;
			class RenderBuffer;
			class RenderQueue;
			class SpanIterator;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class BufferedRenderPipe : public ::sun::java2d::pipe::PixelDrawPipe, public ::sun::java2d::pipe::PixelFillPipe, public ::sun::java2d::pipe::ShapeDrawPipe, public ::sun::java2d::pipe::ParallelogramPipe {
	$class(BufferedRenderPipe, $NO_CLASS_INIT, ::sun::java2d::pipe::PixelDrawPipe, ::sun::java2d::pipe::PixelFillPipe, ::sun::java2d::pipe::ShapeDrawPipe, ::sun::java2d::pipe::ParallelogramPipe)
public:
	BufferedRenderPipe();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::pipe::RenderQueue* rq);
	virtual void draw(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s) override;
	virtual void drawArc(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void drawLine(::sun::java2d::SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawOval(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawParallelogram(::sun::java2d::SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) override;
	virtual void drawPath(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::geom::Path2D$Float* p2df, int32_t transx, int32_t transy);
	virtual void drawPoly(::sun::java2d::SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints, bool isClosed);
	virtual void drawPoly($ints* xPoints, $ints* yPoints, int32_t nPoints, bool isClosed, int32_t transX, int32_t transY) {}
	virtual void drawPolygon(::sun::java2d::SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawPolyline(::sun::java2d::SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawRoundRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual void fill(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s) override;
	virtual void fillArc(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void fillOval(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillParallelogram(::sun::java2d::SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) override;
	virtual void fillPath(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::geom::Path2D$Float* p2df, int32_t transx, int32_t transy);
	virtual void fillPolygon(::sun::java2d::SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void fillRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillRoundRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	int32_t fillSpans(::sun::java2d::pipe::RenderQueue* rq, int64_t buf, int32_t pos, int32_t limit, ::sun::java2d::pipe::SpanIterator* si, int64_t iterator, int32_t transx, int32_t transy);
	virtual void fillSpans(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::pipe::SpanIterator* si, int32_t transx, int32_t transy);
	virtual ::sun::java2d::pipe::ParallelogramPipe* getAAParallelogramPipe();
	virtual $String* toString() override;
	virtual void validateContext(::sun::java2d::SunGraphics2D* sg2d) {}
	virtual void validateContextAA(::sun::java2d::SunGraphics2D* sg2d) {}
	::sun::java2d::pipe::ParallelogramPipe* aapgrampipe = nullptr;
	static const int32_t BYTES_PER_POLY_POINT = 8;
	static const int32_t BYTES_PER_SCANLINE = 12;
	static const int32_t BYTES_PER_SPAN = 16;
	::sun::java2d::pipe::RenderQueue* rq = nullptr;
	::sun::java2d::pipe::RenderBuffer* buf = nullptr;
	::sun::java2d::pipe::BufferedRenderPipe$BufferedDrawHandler* drawHandler = nullptr;
};

		} // pipe
	} // java2d
} // sun

#pragma pop_macro("BYTES_PER_POLY_POINT")
#pragma pop_macro("BYTES_PER_SCANLINE")
#pragma pop_macro("BYTES_PER_SPAN")

#endif // _sun_java2d_pipe_BufferedRenderPipe_h_