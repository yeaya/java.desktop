#ifndef _sun_java2d_windows_GDIRenderer_h_
#define _sun_java2d_windows_GDIRenderer_h_
//$ class sun.java2d.windows.GDIRenderer
//$ extends sun.java2d.pipe.PixelDrawPipe
//$ implements sun.java2d.pipe.PixelFillPipe,sun.java2d.pipe.ShapeDrawPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>

namespace java {
	namespace awt {
		class Composite;
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
			class Region;
			class SpanIterator;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace windows {
			class GDIWindowSurfaceData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace windows {

class GDIRenderer : public ::sun::java2d::pipe::PixelDrawPipe, public ::sun::java2d::pipe::PixelFillPipe, public ::sun::java2d::pipe::ShapeDrawPipe {
	$class(GDIRenderer, $NO_CLASS_INIT, ::sun::java2d::pipe::PixelDrawPipe, ::sun::java2d::pipe::PixelFillPipe, ::sun::java2d::pipe::ShapeDrawPipe)
public:
	GDIRenderer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void devCopyArea(::sun::java2d::windows::GDIWindowSurfaceData* sData, int32_t srcx, int32_t srcy, int32_t dx, int32_t dy, int32_t w, int32_t h);
	virtual void doDrawArc(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent);
	virtual void doDrawLine(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x1, int32_t y1, int32_t x2, int32_t y2);
	virtual void doDrawOval(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void doDrawPoly(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints, bool isclosed);
	virtual void doDrawRect(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void doDrawRoundRect(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH);
	virtual void doFillArc(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent);
	virtual void doFillOval(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void doFillPoly(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints);
	virtual void doFillRect(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void doFillRoundRect(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH);
	virtual void doFillSpans(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::pipe::SpanIterator* si);
	virtual void doShape(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t transX, int32_t transY, ::java::awt::geom::Path2D$Float* p2df, bool isfill);
	virtual void doShape(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s, bool isfill);
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
	virtual $String* toString() override;
	virtual ::sun::java2d::windows::GDIRenderer* traceWrap();
};

		} // windows
	} // java2d
} // sun

#endif // _sun_java2d_windows_GDIRenderer_h_