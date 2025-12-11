#ifndef _sun_java2d_CompositeCRenderer_h_
#define _sun_java2d_CompositeCRenderer_h_
//$ class sun.java2d.CompositeCRenderer
//$ extends sun.java2d.CRenderer
//$ implements sun.java2d.pipe.TextPipe

#include <java/lang/Array.h>
#include <sun/java2d/CRenderer.h>
#include <sun/java2d/pipe/TextPipe.h>

namespace java {
	namespace awt {
		class Color;
		class Image;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class GlyphVector;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Arc2D;
			class Ellipse2D;
			class Line2D;
			class Rectangle2D;
			class RoundRectangle2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace sun {
	namespace java2d {
		class OSXSurfaceData;
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {

class CompositeCRenderer : public ::sun::java2d::CRenderer, public ::sun::java2d::pipe::TextPipe {
	$class(CompositeCRenderer, 0, ::sun::java2d::CRenderer, ::sun::java2d::pipe::TextPipe)
public:
	CompositeCRenderer();
	using ::sun::java2d::CRenderer::drawLine;
	using ::sun::java2d::CRenderer::drawRect;
	using ::sun::java2d::CRenderer::fillRect;
	using ::sun::java2d::CRenderer::drawRoundRect;
	using ::sun::java2d::CRenderer::fillRoundRect;
	using ::sun::java2d::CRenderer::drawOval;
	using ::sun::java2d::CRenderer::fillOval;
	using ::sun::java2d::CRenderer::drawArc;
	using ::sun::java2d::CRenderer::fillArc;
	using ::sun::java2d::CRenderer::doShape;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool blitImage(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Image* img, bool fliph, bool flipv, int32_t sx, int32_t sy, int32_t sw, int32_t sh, int32_t dx, int32_t dy, int32_t dw, int32_t dh, ::java::awt::Color* bgColor) override;
	virtual void clipBounds(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::geom::Rectangle2D* bounds);
	virtual void composite(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::OSXSurfaceData* surfaceData, ::java::awt::image::BufferedImage* srcPixels, ::java::awt::geom::Rectangle2D* compositingBounds);
	virtual void doPolygon(::sun::java2d::SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints, bool ispolygon, bool isfill);
	virtual void doShape(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::OSXSurfaceData* surfaceData, ::java::awt::Shape* shape, bool isfill);
	virtual void draw(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* shape) override;
	virtual void drawArc(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void drawChars(::sun::java2d::SunGraphics2D* sg2d, $chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) override;
	virtual void drawGlyphVector(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::font::GlyphVector* glyphVector, double x, double y);
	virtual void drawGlyphVector(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::font::GlyphVector* glyphVector, float x, float y) override;
	virtual void drawLine(::sun::java2d::SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawOval(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawPolygon(::sun::java2d::SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) override;
	virtual void drawPolyline(::sun::java2d::SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) override;
	virtual void drawRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawRoundRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual void drawString(::sun::java2d::SunGraphics2D* sg2d, $String* str, double x, double y) override;
	virtual void fill(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* shape) override;
	virtual void fillArc(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void fillOval(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillPolygon(::sun::java2d::SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) override;
	virtual void fillRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillRoundRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual ::java::awt::image::BufferedImage* getSurfacePixels(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::OSXSurfaceData* surfaceData, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual ::java::awt::geom::Rectangle2D* padBounds(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* shape);
	virtual $String* toString() override;
	static const int32_t fPadding = 4;
	static const int32_t fPaddingHalf = 2; // fPadding / 2
	static ::java::awt::geom::AffineTransform* sIdentityMatrix;
	::java::awt::geom::AffineTransform* ShapeTM = nullptr;
	::java::awt::geom::Rectangle2D* ShapeBounds = nullptr;
	::java::awt::geom::Line2D* line = nullptr;
	::java::awt::geom::Rectangle2D* rectangle = nullptr;
	::java::awt::geom::RoundRectangle2D* roundrectangle = nullptr;
	::java::awt::geom::Ellipse2D* ellipse = nullptr;
	::java::awt::geom::Arc2D* arc = nullptr;
};

	} // java2d
} // sun

#endif // _sun_java2d_CompositeCRenderer_h_