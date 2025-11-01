#ifndef _sun_java2d_pipe_LoopPipe_h_
#define _sun_java2d_pipe_LoopPipe_h_
//$ class sun.java2d.pipe.LoopPipe
//$ extends sun.java2d.pipe.PixelDrawPipe
//$ implements sun.java2d.pipe.PixelFillPipe,sun.java2d.pipe.ParallelogramPipe,sun.java2d.pipe.ShapeDrawPipe,sun.java2d.pipe.LoopBasedPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/LoopBasedPipe.h>
#include <sun/java2d/pipe/ParallelogramPipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>

namespace java {
	namespace awt {
		class Shape;
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
			class RenderingEngine;
			class ShapeSpanIterator;
			class SpanIterator;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class LoopPipe : public ::sun::java2d::pipe::PixelDrawPipe, public ::sun::java2d::pipe::PixelFillPipe, public ::sun::java2d::pipe::ParallelogramPipe, public ::sun::java2d::pipe::ShapeDrawPipe, public ::sun::java2d::pipe::LoopBasedPipe {
	$class(LoopPipe, 0, ::sun::java2d::pipe::PixelDrawPipe, ::sun::java2d::pipe::PixelFillPipe, ::sun::java2d::pipe::ParallelogramPipe, ::sun::java2d::pipe::ShapeDrawPipe, ::sun::java2d::pipe::LoopBasedPipe)
public:
	LoopPipe();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void draw(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s) override;
	virtual void drawArc(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void drawLine(::sun::java2d::SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawOval(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawParallelogram(::sun::java2d::SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) override;
	virtual void drawPolygon(::sun::java2d::SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawPolyline(::sun::java2d::SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawRoundRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual void fill(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s) override;
	virtual void fillArc(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void fillOval(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillParallelogram(::sun::java2d::SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) override;
	virtual void fillPolygon(::sun::java2d::SunGraphics2D* sg2d, $ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void fillRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillRoundRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	static void fillSpans(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::pipe::SpanIterator* si);
	static ::sun::java2d::pipe::ShapeSpanIterator* getFillSSI(::sun::java2d::SunGraphics2D* sg2d);
	static ::sun::java2d::pipe::ShapeSpanIterator* getStrokeSpans(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s);
	virtual $String* toString() override;
	static ::sun::java2d::pipe::RenderingEngine* RenderEngine;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_LoopPipe_h_