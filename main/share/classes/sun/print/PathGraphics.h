#ifndef _sun_print_PathGraphics_h_
#define _sun_print_PathGraphics_h_
//$ class sun.print.PathGraphics
//$ extends sun.print.ProxyGraphics2D

#include <java/lang/Array.h>
#include <sun/print/ProxyGraphics2D.h>

namespace java {
	namespace awt {
		class Color;
		class Composite;
		class Font;
		class Graphics2D;
		class Image;
		class Polygon;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
			class GlyphVector;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class PathIterator;
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class BufferedImageOp;
			class ImageObserver;
			class RenderedImage;
		}
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
			class Printable;
			class PrinterJob;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
	}
}
namespace sun {
	namespace font {
		class Font2D;
	}
}

namespace sun {
	namespace print {

class PathGraphics : public ::sun::print::ProxyGraphics2D {
	$class(PathGraphics, 0, ::sun::print::ProxyGraphics2D)
public:
	PathGraphics();
	using ::sun::print::ProxyGraphics2D::create;
	using ::sun::print::ProxyGraphics2D::getFontMetrics;
	using ::sun::print::ProxyGraphics2D::getClipBounds;
	void init$(::java::awt::Graphics2D* graphics, ::java::awt::print::PrinterJob* printerJob, ::java::awt::print::Printable* painter, ::java::awt::print::PageFormat* pageFormat, int32_t pageIndex, bool canRedraw);
	virtual bool canDoRedraws();
	virtual bool canDrawStringToWidth();
	virtual void clearRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void deviceClip(::java::awt::geom::PathIterator* pathIter) {}
	virtual void deviceDrawLine(int32_t xBegin, int32_t yBegin, int32_t xEnd, int32_t yEnd, ::java::awt::Color* color) {}
	virtual void deviceFill(::java::awt::geom::PathIterator* pathIter, ::java::awt::Color* color) {}
	virtual void deviceFillRect(int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* color) {}
	virtual void deviceFrameRect(int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* color) {}
	virtual void draw(::java::awt::Shape* s) override;
	virtual void drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual bool drawBitmaskImage(::java::awt::image::BufferedImage* bufferedImage, ::java::awt::geom::AffineTransform* xform, ::java::awt::Color* bgcolor, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight);
	virtual void drawGlyphVector(::java::awt::font::GlyphVector* g, float x, float y) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, ::java::awt::geom::AffineTransform* xform, ::java::awt::image::ImageObserver* obs) override;
	virtual void drawImage(::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y) override;
	virtual bool drawImageToPlatform(::java::awt::Image* img, ::java::awt::geom::AffineTransform* xform, ::java::awt::Color* bgcolor, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, bool handlingTransparency) {return false;}
	virtual void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawPolygon(::java::awt::Polygon* p) override;
	virtual void drawPolyline($ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void drawRenderedImage(::java::awt::image::RenderedImage* img, ::java::awt::geom::AffineTransform* xform) override;
	virtual void drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual void drawString($String* str, int32_t x, int32_t y) override;
	virtual void drawString($String* str, float x, float y) override;
	virtual void drawString($String* str, float x, float y, ::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc, float w);
	virtual void drawString(::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y) override;
	virtual void drawString(::java::text::AttributedCharacterIterator* iterator, float x, float y) override;
	virtual void fill(::java::awt::Shape* s) override;
	virtual void fill(::java::awt::Shape* s, ::java::awt::Color* color);
	virtual void fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
	virtual void fillOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void fillPolygon(::java::awt::Polygon* p) override;
	virtual void fillRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
	virtual ::java::awt::image::BufferedImage* getBufferedImage(::java::awt::Image* img);
	static $chars* getGlyphToCharMapForFont(::sun::font::Font2D* font2D);
	virtual ::java::awt::print::PageFormat* getPageFormat();
	virtual int32_t getPageIndex();
	virtual ::java::awt::print::Printable* getPrintable();
	virtual bool hasTransparentPixels(::java::awt::image::BufferedImage* bufferedImage);
	virtual bool isBitmaskTransparency(::java::awt::image::BufferedImage* bufferedImage);
	virtual bool isCompositing(::java::awt::Composite* composite);
	virtual int32_t platformFontCount(::java::awt::Font* font, $String* str);
	virtual bool printGlyphVector(::java::awt::font::GlyphVector* gv, float x, float y);
	virtual bool printedSimpleGlyphVector(::java::awt::font::GlyphVector* g, float x, float y);
	virtual void redrawRegion(::java::awt::geom::Rectangle2D* region, double scaleX, double scaleY, ::java::awt::Shape* clip, ::java::awt::geom::AffineTransform* devTransform) {}
	bool samePositions(::java::awt::font::GlyphVector* gv, $ints* gvcodes, $ints* origCodes, $floats* origPositions);
	static bool $assertionsDisabled;
	::java::awt::print::Printable* mPainter = nullptr;
	::java::awt::print::PageFormat* mPageFormat = nullptr;
	int32_t mPageIndex = 0;
	bool mCanRedraw = false;
	bool printingGlyphVector = false;
	static ::java::lang::ref::SoftReference* fontMapRef;
};

	} // print
} // sun

#endif // _sun_print_PathGraphics_h_