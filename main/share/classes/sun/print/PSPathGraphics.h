#ifndef _sun_print_PSPathGraphics_h_
#define _sun_print_PSPathGraphics_h_
//$ class sun.print.PSPathGraphics
//$ extends sun.print.PathGraphics

#include <sun/print/PathGraphics.h>

#pragma push_macro("DEFAULT_USER_RES")
#undef DEFAULT_USER_RES

namespace java {
	namespace awt {
		class Color;
		class Font;
		class Graphics;
		class Graphics2D;
		class Image;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
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
		namespace print {
			class PageFormat;
			class Printable;
			class PrinterJob;
		}
	}
}

namespace sun {
	namespace print {

class PSPathGraphics : public ::sun::print::PathGraphics {
	$class(PSPathGraphics, $NO_CLASS_INIT, ::sun::print::PathGraphics)
public:
	PSPathGraphics();
	using ::sun::print::PathGraphics::drawString;
	using ::sun::print::PathGraphics::fill;
	using ::sun::print::PathGraphics::getFontMetrics;
	using ::sun::print::PathGraphics::getClipBounds;
	using ::sun::print::PathGraphics::create;
	void init$(::java::awt::Graphics2D* graphics, ::java::awt::print::PrinterJob* printerJob, ::java::awt::print::Printable* painter, ::java::awt::print::PageFormat* pageFormat, int32_t pageIndex, bool canRedraw);
	virtual bool canDrawStringToWidth() override;
	virtual ::java::awt::Graphics* create() override;
	virtual void deviceClip(::java::awt::geom::PathIterator* pathIter) override;
	virtual void deviceDrawLine(int32_t xBegin, int32_t yBegin, int32_t xEnd, int32_t yEnd, ::java::awt::Color* color) override;
	virtual void deviceFill(::java::awt::geom::PathIterator* pathIter, ::java::awt::Color* color) override;
	virtual void deviceFillRect(int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* color) override;
	virtual void deviceFrameRect(int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* color) override;
	virtual bool drawImageToPlatform(::java::awt::Image* image, ::java::awt::geom::AffineTransform* xform, ::java::awt::Color* bgcolor, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, bool handlingTransparency) override;
	virtual void drawString($String* str, int32_t x, int32_t y) override;
	virtual void drawString($String* str, float x, float y) override;
	virtual void drawString($String* str, float x, float y, ::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc, float w) override;
	virtual void fill(::java::awt::Shape* s, ::java::awt::Color* color) override;
	virtual int32_t platformFontCount(::java::awt::Font* font, $String* str) override;
	virtual void redrawRegion(::java::awt::geom::Rectangle2D* region, double scaleX, double scaleY, ::java::awt::Shape* savedClip, ::java::awt::geom::AffineTransform* savedTransform) override;
	static const int32_t DEFAULT_USER_RES = 72;
};

	} // print
} // sun

#pragma pop_macro("DEFAULT_USER_RES")

#endif // _sun_print_PSPathGraphics_h_