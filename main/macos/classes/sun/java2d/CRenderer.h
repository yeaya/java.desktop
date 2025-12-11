#ifndef _sun_java2d_CRenderer_h_
#define _sun_java2d_CRenderer_h_
//$ class sun.java2d.CRenderer
//$ extends sun.java2d.pipe.PixelDrawPipe
//$ implements sun.java2d.pipe.PixelFillPipe,sun.java2d.pipe.ShapeDrawPipe,sun.java2d.pipe.DrawImagePipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/DrawImagePipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>

namespace java {
	namespace awt {
		class Color;
		class Image;
		class Shape;
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
			class BufferedImageOp;
			class ImageObserver;
		}
	}
}
namespace java {
	namespace nio {
		class FloatBuffer;
		class IntBuffer;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class ToolkitImage;
		}
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
		class SurfaceData;
	}
}

namespace sun {
	namespace java2d {

class CRenderer : public ::sun::java2d::pipe::PixelDrawPipe, public ::sun::java2d::pipe::PixelFillPipe, public ::sun::java2d::pipe::ShapeDrawPipe, public ::sun::java2d::pipe::DrawImagePipe {
	$class(CRenderer, 0, ::sun::java2d::pipe::PixelDrawPipe, ::sun::java2d::pipe::PixelFillPipe, ::sun::java2d::pipe::ShapeDrawPipe, ::sun::java2d::pipe::DrawImagePipe)
public:
	CRenderer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool blitImage(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Image* img, bool fliph, bool flipv, int32_t sx, int32_t sy, int32_t sw, int32_t sh, int32_t dx, int32_t dy, int32_t dw, int32_t dh, ::java::awt::Color* bgColor);
	virtual bool copyImage(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Image* img, int32_t dx, int32_t dy, ::java::awt::Color* bgColor);
	virtual bool copyImage(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Image* img, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t width, int32_t height, ::java::awt::Color* bgColor);
	virtual bool copyImage(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool copyImage(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Image* img, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t width, int32_t height, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) override;
	virtual void doArc(::sun::java2d::SurfaceData* sData, float x, float y, float width, float height, float angleStart, float angleExtent, int32_t type, bool isfill);
	virtual void doImage(::sun::java2d::SurfaceData* sData, ::sun::java2d::SurfaceData* img, bool fliph, bool flipv, int32_t w, int32_t h, int32_t sx, int32_t sy, int32_t sw, int32_t sh, int32_t dx, int32_t dy, int32_t dw, int32_t dh);
	virtual void doLine(::sun::java2d::SurfaceData* sData, float x1, float y1, float x2, float y2);
	virtual void doOval(::sun::java2d::SurfaceData* sData, float x, float y, float width, float height, bool isfill);
	virtual void doPoly(::sun::java2d::SurfaceData* sData, $ints* xpoints, $ints* ypoints, int32_t npoints, bool ispolygon, bool isfill);
	virtual void doRect(::sun::java2d::SurfaceData* sData, float x, float y, float width, float height, bool isfill);
	virtual void doRoundRect(::sun::java2d::SurfaceData* sData, float x, float y, float width, float height, float arcW, float arcH, bool isfill);
	virtual void doShape(::sun::java2d::SurfaceData* sData, int32_t length, ::java::nio::FloatBuffer* coordinates, ::java::nio::IntBuffer* types, int32_t windingRule, bool isfill, bool shouldApplyOffset);
	virtual void draw(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s) override;
	virtual void drawArc(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void drawArc(::sun::java2d::SunGraphics2D* sg2d, float x, float y, float width, float height, float startAngle, float arcAngle, int32_t type);
	virtual void drawLine(::sun::java2d::SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawLine(::sun::java2d::SunGraphics2D* sg2d, float x1, float y1, float x2, float y2);
	virtual void drawOval(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawOval(::sun::java2d::SunGraphics2D* sg2d, float x, float y, float width, float height);
	virtual void drawPolygon(::sun::java2d::SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) override;
	virtual void drawPolyline(::sun::java2d::SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) override;
	virtual void drawRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawRect(::sun::java2d::SunGraphics2D* sg2d, float x, float y, float width, float height);
	virtual void drawRoundRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual void drawRoundRect(::sun::java2d::SunGraphics2D* sg2d, float x, float y, float width, float height, float arcWidth, float arcHeight);
	virtual void drawfillShape(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s, bool isfill, bool shouldApplyOffset);
	virtual void fill(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s) override;
	virtual void fillArc(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void fillArc(::sun::java2d::SunGraphics2D* sg2d, float x, float y, float width, float height, float startAngle, float arcAngle, int32_t type);
	virtual void fillOval(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillOval(::sun::java2d::SunGraphics2D* sg2d, float x, float y, float width, float height);
	virtual void fillPolygon(::sun::java2d::SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints) override;
	virtual void fillRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillRect(::sun::java2d::SunGraphics2D* sg2d, float x, float y, float width, float height);
	virtual void fillRoundRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual void fillRoundRect(::sun::java2d::SunGraphics2D* sg2d, float x, float y, float width, float height, float arcWidth, float arcHeight);
	virtual bool imageReady(::sun::awt::image::ToolkitImage* sunimg, ::java::awt::image::ImageObserver* observer);
	static void init();
	virtual bool scaleImage(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bgColor);
	virtual bool scaleImage(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgColor);
	virtual bool scaleImage(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool scaleImage(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) override;
	virtual $String* toString() override;
	virtual ::sun::java2d::CRenderer* traceWrap();
	virtual void transformImage(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::image::BufferedImageOp* op, ::java::awt::geom::AffineTransform* xf, ::java::awt::Color* bgColor);
	virtual bool transformImage(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Image* img, ::java::awt::geom::AffineTransform* atfm, ::java::awt::image::ImageObserver* observer) override;
	virtual void transformImage(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y) override;
	::java::awt::geom::Line2D* lineToShape = nullptr;
	::java::awt::geom::Rectangle2D* rectToShape = nullptr;
	::java::awt::geom::RoundRectangle2D* roundrectToShape = nullptr;
	::java::awt::geom::Ellipse2D* ovalToShape = nullptr;
	::java::awt::geom::Arc2D* arcToShape = nullptr;
};

	} // java2d
} // sun

#endif // _sun_java2d_CRenderer_h_