#ifndef _sun_font_PhysicalFont_h_
#define _sun_font_PhysicalFont_h_
//$ class sun.font.PhysicalFont
//$ extends sun.font.Font2D

#include <java/lang/Array.h>
#include <sun/font/Font2D.h>

namespace java {
	namespace awt {
		namespace geom {
			class GeneralPath;
			class Point2D$Float;
			class Rectangle2D$Float;
		}
	}
}
namespace sun {
	namespace font {
		class StrikeMetrics;
	}
}

namespace sun {
	namespace font {

class PhysicalFont : public ::sun::font::Font2D {
	$class(PhysicalFont, $NO_CLASS_INIT, ::sun::font::Font2D)
public:
	PhysicalFont();
	using ::sun::font::Font2D::getFontMetrics;
	void init$($String* platname, Object$* nativeNames);
	void init$();
	virtual bool equals(Object$* o) override;
	virtual ::sun::font::StrikeMetrics* getFontMetrics(int64_t pScalerContext) {return nullptr;}
	virtual float getGlyphAdvance(int64_t pScalerContext, int32_t glyphCode) {return 0.0;}
	virtual int64_t getGlyphImage(int64_t pScalerContext, int32_t glyphCode) {return 0;}
	virtual void getGlyphMetrics(int64_t pScalerContext, int32_t glyphCode, ::java::awt::geom::Point2D$Float* metrics) {}
	virtual ::java::awt::geom::GeneralPath* getGlyphOutline(int64_t pScalerContext, int32_t glyphCode, float x, float y) {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D$Float* getGlyphOutlineBounds(int64_t pScalerContext, int32_t glyphCode) {return nullptr;}
	virtual ::java::awt::geom::Point2D$Float* getGlyphPoint(int64_t pScalerContext, int32_t glyphCode, int32_t ptNumber);
	virtual ::java::awt::geom::GeneralPath* getGlyphVectorOutline(int64_t pScalerContext, $ints* glyphs, int32_t numGlyphs, float x, float y) {return nullptr;}
	virtual int32_t hashCode() override;
	$String* platName = nullptr;
	$Object* nativeNames = nullptr;
};

	} // font
} // sun

#endif // _sun_font_PhysicalFont_h_