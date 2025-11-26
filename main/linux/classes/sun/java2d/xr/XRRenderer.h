#ifndef _sun_java2d_xr_XRRenderer_h_
#define _sun_java2d_xr_XRRenderer_h_
//$ class sun.java2d.xr.XRRenderer
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
		namespace xr {
			class GrowableRectArray;
			class MaskTileManager;
			class XRDrawLine;
			class XRRenderer$XRDrawHandler;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRRenderer : public ::sun::java2d::pipe::PixelDrawPipe, public ::sun::java2d::pipe::PixelFillPipe, public ::sun::java2d::pipe::ShapeDrawPipe {
	$class(XRRenderer, $NO_CLASS_INIT, ::sun::java2d::pipe::PixelDrawPipe, ::sun::java2d::pipe::PixelFillPipe, ::sun::java2d::pipe::ShapeDrawPipe)
public:
	XRRenderer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::xr::MaskTileManager* tileManager);
	virtual void draw(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s) override;
	virtual void drawArc(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void drawLine(::sun::java2d::SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawOval(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawPath(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::geom::Path2D$Float* p2df, int32_t transx, int32_t transy);
	virtual void drawPolygon(::sun::java2d::SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) override;
	virtual void drawPolyline(::sun::java2d::SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) override;
	virtual void drawRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawRoundRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual void fill(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s) override;
	virtual void fillArc(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void fillOval(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillPath(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::geom::Path2D$Float* p2df, int32_t transx, int32_t transy);
	virtual void fillPolygon(::sun::java2d::SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) override;
	virtual void fillRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillRoundRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual void fillSpans(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::pipe::SpanIterator* si, int32_t transx, int32_t transy);
	virtual $String* toString() override;
	void validateSurface(::sun::java2d::SunGraphics2D* sg2d);
	::sun::java2d::xr::XRRenderer$XRDrawHandler* drawHandler = nullptr;
	::sun::java2d::xr::MaskTileManager* tileManager = nullptr;
	::sun::java2d::xr::XRDrawLine* lineGen = nullptr;
	::sun::java2d::xr::GrowableRectArray* rectBuffer = nullptr;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRRenderer_h_