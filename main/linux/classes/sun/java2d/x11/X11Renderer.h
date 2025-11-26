#ifndef _sun_java2d_x11_X11Renderer_h_
#define _sun_java2d_x11_X11Renderer_h_
//$ class sun.java2d.x11.X11Renderer
//$ extends sun.java2d.pipe.PixelDrawPipe
//$ implements sun.java2d.pipe.PixelFillPipe,sun.java2d.pipe.ShapeDrawPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>

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
			class SpanIterator;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace x11 {

class X11Renderer : public ::sun::java2d::pipe::PixelDrawPipe, public ::sun::java2d::pipe::PixelFillPipe, public ::sun::java2d::pipe::ShapeDrawPipe {
	$class(X11Renderer, $NO_CLASS_INIT, ::sun::java2d::pipe::PixelDrawPipe, ::sun::java2d::pipe::PixelFillPipe, ::sun::java2d::pipe::ShapeDrawPipe)
public:
	X11Renderer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void XDoPath(::sun::java2d::SunGraphics2D* sg2d, int64_t pXSData, int64_t xgc, int32_t transX, int32_t transY, ::java::awt::geom::Path2D$Float* p2df, bool isFill);
	virtual void XDrawArc(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent);
	virtual void XDrawLine(int64_t pXSData, int64_t xgc, int32_t x1, int32_t y1, int32_t x2, int32_t y2);
	virtual void XDrawOval(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void XDrawPoly(int64_t pXSData, int64_t xgc, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints, bool isclosed);
	virtual void XDrawRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void XDrawRoundRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH);
	virtual void XFillArc(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent);
	virtual void XFillOval(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void XFillPoly(int64_t pXSData, int64_t xgc, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints);
	virtual void XFillRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void XFillRoundRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH);
	virtual void XFillSpans(int64_t pXSData, int64_t xgc, ::sun::java2d::pipe::SpanIterator* si, int64_t iterator, int32_t transx, int32_t transy);
	virtual void devCopyArea(int64_t sdOps, int64_t xgc, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t w, int32_t h);
	void doPath(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s, bool isFill);
	virtual void draw(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s) override;
	virtual void drawArc(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void drawLine(::sun::java2d::SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawOval(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawPolygon(::sun::java2d::SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) override;
	virtual void drawPolyline(::sun::java2d::SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) override;
	virtual void drawRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawRoundRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual void fill(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s) override;
	virtual void fillArc(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void fillOval(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillPolygon(::sun::java2d::SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) override;
	virtual void fillRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillRoundRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	static ::sun::java2d::x11::X11Renderer* getInstance();
	virtual $String* toString() override;
	int64_t validate(::sun::java2d::SunGraphics2D* sg2d);
};

		} // x11
	} // java2d
} // sun

#endif // _sun_java2d_x11_X11Renderer_h_