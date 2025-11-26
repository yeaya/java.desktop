#ifndef _sun_java2d_pipe_NullPipe_h_
#define _sun_java2d_pipe_NullPipe_h_
//$ class sun.java2d.pipe.NullPipe
//$ extends sun.java2d.pipe.PixelDrawPipe
//$ implements sun.java2d.pipe.PixelFillPipe,sun.java2d.pipe.ShapeDrawPipe,sun.java2d.pipe.TextPipe,sun.java2d.pipe.DrawImagePipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/DrawImagePipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
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
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class NullPipe : public ::sun::java2d::pipe::PixelDrawPipe, public ::sun::java2d::pipe::PixelFillPipe, public ::sun::java2d::pipe::ShapeDrawPipe, public ::sun::java2d::pipe::TextPipe, public ::sun::java2d::pipe::DrawImagePipe {
	$class(NullPipe, $NO_CLASS_INIT, ::sun::java2d::pipe::PixelDrawPipe, ::sun::java2d::pipe::PixelFillPipe, ::sun::java2d::pipe::ShapeDrawPipe, ::sun::java2d::pipe::TextPipe, ::sun::java2d::pipe::DrawImagePipe)
public:
	NullPipe();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool copyImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool copyImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t w, int32_t h, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) override;
	virtual void draw(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s) override;
	virtual void drawArc(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void drawChars(::sun::java2d::SunGraphics2D* sg, $chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) override;
	virtual void drawGlyphVector(::sun::java2d::SunGraphics2D* sg, ::java::awt::font::GlyphVector* g, float x, float y) override;
	virtual void drawLine(::sun::java2d::SunGraphics2D* sg, int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawOval(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawPolygon(::sun::java2d::SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawPolyline(::sun::java2d::SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawRect(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawRoundRect(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual void drawString(::sun::java2d::SunGraphics2D* sg, $String* s, double x, double y) override;
	virtual void fill(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s) override;
	virtual void fillArc(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void fillOval(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillPolygon(::sun::java2d::SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void fillRect(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillRoundRect(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual bool scaleImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool scaleImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* observer) override;
	virtual $String* toString() override;
	virtual bool transformImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::Image* img, ::java::awt::geom::AffineTransform* atfm, ::java::awt::image::ImageObserver* observer) override;
	virtual void transformImage(::sun::java2d::SunGraphics2D* sg, ::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y) override;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_NullPipe_h_