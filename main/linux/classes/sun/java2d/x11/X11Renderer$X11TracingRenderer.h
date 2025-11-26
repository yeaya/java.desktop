#ifndef _sun_java2d_x11_X11Renderer$X11TracingRenderer_h_
#define _sun_java2d_x11_X11Renderer$X11TracingRenderer_h_
//$ class sun.java2d.x11.X11Renderer$X11TracingRenderer
//$ extends sun.java2d.x11.X11Renderer

#include <java/lang/Array.h>
#include <sun/java2d/x11/X11Renderer.h>

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

class X11Renderer$X11TracingRenderer : public ::sun::java2d::x11::X11Renderer {
	$class(X11Renderer$X11TracingRenderer, $NO_CLASS_INIT, ::sun::java2d::x11::X11Renderer)
public:
	X11Renderer$X11TracingRenderer();
	void init$();
	virtual void XDoPath(::sun::java2d::SunGraphics2D* sg2d, int64_t pXSData, int64_t xgc, int32_t transX, int32_t transY, ::java::awt::geom::Path2D$Float* p2df, bool isFill) override;
	virtual void XDrawArc(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent) override;
	virtual void XDrawLine(int64_t pXSData, int64_t xgc, int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void XDrawOval(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void XDrawPoly(int64_t pXSData, int64_t xgc, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints, bool isclosed) override;
	virtual void XDrawRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void XDrawRoundRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) override;
	virtual void XFillArc(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent) override;
	virtual void XFillOval(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void XFillPoly(int64_t pXSData, int64_t xgc, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints) override;
	virtual void XFillRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void XFillRoundRect(int64_t pXSData, int64_t xgc, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) override;
	virtual void XFillSpans(int64_t pXSData, int64_t xgc, ::sun::java2d::pipe::SpanIterator* si, int64_t iterator, int32_t transx, int32_t transy) override;
	virtual void devCopyArea(int64_t sdOps, int64_t xgc, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t w, int32_t h) override;
};

		} // x11
	} // java2d
} // sun

#endif // _sun_java2d_x11_X11Renderer$X11TracingRenderer_h_