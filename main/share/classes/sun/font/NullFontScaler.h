#ifndef _sun_font_NullFontScaler_h_
#define _sun_font_NullFontScaler_h_
//$ class sun.font.NullFontScaler
//$ extends sun.font.FontScaler

#include <java/lang/Array.h>
#include <sun/font/FontScaler.h>

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
		class Font2D;
		class StrikeMetrics;
	}
}

namespace sun {
	namespace font {

class NullFontScaler : public ::sun::font::FontScaler {
	$class(NullFontScaler, $NO_CLASS_INIT, ::sun::font::FontScaler)
public:
	NullFontScaler();
	void init$();
	void init$(::sun::font::Font2D* font, int32_t indexInCollection, bool supportsCJK, int32_t filesize);
	virtual int64_t createScalerContext($doubles* matrix, int32_t aa, int32_t fm, float boldness, float italic) override;
	virtual ::sun::font::StrikeMetrics* getFontMetrics(int64_t pScalerContext) override;
	virtual float getGlyphAdvance(int64_t pScalerContext, int32_t glyphCode) override;
	virtual int32_t getGlyphCode(char16_t charCode) override;
	virtual int64_t getGlyphImage(int64_t pScalerContext, int32_t glyphCode) override;
	virtual void getGlyphMetrics(int64_t pScalerContext, int32_t glyphCode, ::java::awt::geom::Point2D$Float* metrics) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphOutline(int64_t pScalerContext, int32_t glyphCode, float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D$Float* getGlyphOutlineBounds(int64_t pContext, int32_t glyphCode) override;
	virtual ::java::awt::geom::Point2D$Float* getGlyphPoint(int64_t pScalerContext, int32_t glyphCode, int32_t ptNumber) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphVectorOutline(int64_t pScalerContext, $ints* glyphs, int32_t numGlyphs, float x, float y) override;
	virtual int32_t getMissingGlyphCode() override;
	static int64_t getNullScalerContext();
	virtual int32_t getNumGlyphs() override;
	virtual int64_t getUnitsPerEm() override;
	virtual void invalidateScalerContext(int64_t pScalerContext) override;
};

	} // font
} // sun

#endif // _sun_font_NullFontScaler_h_