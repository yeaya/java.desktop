#ifndef _sun_awt_windows_WPathGraphics_h_
#define _sun_awt_windows_WPathGraphics_h_
//$ class sun.awt.windows.WPathGraphics
//$ extends sun.print.PathGraphics

#include <java/lang/Array.h>
#include <sun/print/PathGraphics.h>

#pragma push_macro("DEFAULT_USER_RES")
#undef DEFAULT_USER_RES
#pragma push_macro("MAX_THINLINE_INCHES")
#undef MAX_THINLINE_INCHES
#pragma push_macro("MIN_DEVICE_LINEWIDTH")
#undef MIN_DEVICE_LINEWIDTH

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
			class GlyphVector;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class PathIterator;
			class Point2D$Double;
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
	namespace font {
		class PhysicalFont;
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WPathGraphics : public ::sun::print::PathGraphics {
	$class(WPathGraphics, 0, ::sun::print::PathGraphics)
public:
	WPathGraphics();
	using ::sun::print::PathGraphics::drawString;
	using ::sun::print::PathGraphics::getFontMetrics;
	using ::sun::print::PathGraphics::getClipBounds;
	using ::sun::print::PathGraphics::create;
	void init$(::java::awt::Graphics2D* graphics, ::java::awt::print::PrinterJob* printerJob, ::java::awt::print::Printable* painter, ::java::awt::print::PageFormat* pageFormat, int32_t pageIndex, bool canRedraw);
	void convertToWPath(::java::awt::geom::PathIterator* pathIter);
	virtual ::java::awt::Graphics* create() override;
	virtual void deviceClip(::java::awt::geom::PathIterator* pathIter) override;
	virtual void deviceDrawLine(int32_t xBegin, int32_t yBegin, int32_t xEnd, int32_t yEnd, ::java::awt::Color* color) override;
	virtual void deviceFill(::java::awt::geom::PathIterator* pathIter, ::java::awt::Color* color) override;
	virtual void deviceFillRect(int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* color) override;
	virtual void deviceFrameRect(int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* color) override;
	virtual void draw(::java::awt::Shape* s) override;
	virtual bool drawImageToPlatform(::java::awt::Image* image, ::java::awt::geom::AffineTransform* xform, ::java::awt::Color* bgcolor, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, bool handlingTransparency) override;
	virtual void drawString($String* str, int32_t x, int32_t y) override;
	virtual void drawString($String* str, float x, float y) override;
	virtual void drawString($String* str, float x, float y, ::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc, float targetW) override;
	int32_t getAngle(::java::awt::geom::Point2D$Double* pt);
	float getAwScale(double scaleFactorX, double scaleFactorY);
	static bool isXP();
	bool okGDIMetrics($String* str, ::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc, double scaleX);
	virtual int32_t platformFontCount(::java::awt::Font* font, $String* str) override;
	void precisionScaleUp($floats* values, int32_t size);
	virtual bool printGlyphVector(::java::awt::font::GlyphVector* gv, float x, float y) override;
	virtual void redrawRegion(::java::awt::geom::Rectangle2D* region, double scaleX, double scaleY, ::java::awt::Shape* savedClip, ::java::awt::geom::AffineTransform* savedTransform) override;
	bool strNeedsTextLayout($String* str, ::java::awt::Font* font);
	void textOut($String* str, ::java::awt::Font* font, ::sun::font::PhysicalFont* font2D, ::java::awt::font::FontRenderContext* frc, float deviceSize, int32_t rotation, float awScale, double scaleFactorX, double scaleFactorY, float userx, float usery, float devx, float devy, float targetW);
	static const int32_t DEFAULT_USER_RES = 72;
	static float MIN_DEVICE_LINEWIDTH;
	static float MAX_THINLINE_INCHES;
	static float precisionScale;
	static bool useGDITextLayout;
	static bool preferGDITextLayout;
};

		} // windows
	} // awt
} // sun

#pragma pop_macro("DEFAULT_USER_RES")
#pragma pop_macro("MAX_THINLINE_INCHES")
#pragma pop_macro("MIN_DEVICE_LINEWIDTH")

#endif // _sun_awt_windows_WPathGraphics_h_