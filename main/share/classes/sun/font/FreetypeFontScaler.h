#ifndef _sun_font_FreetypeFontScaler_h_
#define _sun_font_FreetypeFontScaler_h_
//$ class sun.font.FreetypeFontScaler
//$ extends sun.font.FontScaler

#include <java/lang/Array.h>
#include <sun/font/FontScaler.h>

#pragma push_macro("FFS")
#undef FFS
#pragma push_macro("TRUETYPE_FONT")
#undef TRUETYPE_FONT
#pragma push_macro("TYPE1_FONT")
#undef TYPE1_FONT

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

class FreetypeFontScaler : public ::sun::font::FontScaler {
	$class(FreetypeFontScaler, 0, ::sun::font::FontScaler)
public:
	FreetypeFontScaler();
	void init$(::sun::font::Font2D* font, int32_t indexInCollection, bool supportsCJK, int32_t filesize);
	virtual int64_t createScalerContext($doubles* matrix, int32_t aa, int32_t fm, float boldness, float italic) override;
	int64_t createScalerContextNative(int64_t pScaler, $doubles* matrix, int32_t aa, int32_t fm, float boldness, float italic);
	virtual void dispose() override;
	void disposeNativeScaler(::sun::font::Font2D* font2D, int64_t pScaler);
	virtual void disposeScaler() override;
	virtual ::sun::font::StrikeMetrics* getFontMetrics(int64_t pScalerContext) override;
	::sun::font::StrikeMetrics* getFontMetricsNative(::sun::font::Font2D* font, int64_t pScalerContext, int64_t pScaler);
	virtual float getGlyphAdvance(int64_t pScalerContext, int32_t glyphCode) override;
	float getGlyphAdvanceNative(::sun::font::Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode);
	virtual int32_t getGlyphCode(char16_t charCode) override;
	int32_t getGlyphCodeNative(::sun::font::Font2D* font, int64_t pScaler, char16_t charCode);
	virtual int64_t getGlyphImage(int64_t pScalerContext, int32_t glyphCode) override;
	int64_t getGlyphImageNative(::sun::font::Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode);
	virtual void getGlyphMetrics(int64_t pScalerContext, int32_t glyphCode, ::java::awt::geom::Point2D$Float* metrics) override;
	void getGlyphMetricsNative(::sun::font::Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode, ::java::awt::geom::Point2D$Float* metrics);
	virtual ::java::awt::geom::GeneralPath* getGlyphOutline(int64_t pScalerContext, int32_t glyphCode, float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D$Float* getGlyphOutlineBounds(int64_t pScalerContext, int32_t glyphCode) override;
	::java::awt::geom::Rectangle2D$Float* getGlyphOutlineBoundsNative(::sun::font::Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode);
	::java::awt::geom::GeneralPath* getGlyphOutlineNative(::sun::font::Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode, float x, float y);
	virtual ::java::awt::geom::Point2D$Float* getGlyphPoint(int64_t pScalerContext, int32_t glyphCode, int32_t ptNumber) override;
	::java::awt::geom::Point2D$Float* getGlyphPointNative(::sun::font::Font2D* font, int64_t pScalerContext, int64_t pScaler, int32_t glyphCode, int32_t ptNumber);
	virtual ::java::awt::geom::GeneralPath* getGlyphVectorOutline(int64_t pScalerContext, $ints* glyphs, int32_t numGlyphs, float x, float y) override;
	::java::awt::geom::GeneralPath* getGlyphVectorOutlineNative(::sun::font::Font2D* font, int64_t pScalerContext, int64_t pScaler, $ints* glyphs, int32_t numGlyphs, float x, float y);
	virtual int32_t getMissingGlyphCode() override;
	int32_t getMissingGlyphCodeNative(int64_t pScaler);
	virtual int32_t getNumGlyphs() override;
	int32_t getNumGlyphsNative(int64_t pScaler);
	int64_t getUnitsPerEMNative(int64_t pScaler);
	virtual int64_t getUnitsPerEm() override;
	static void initIDs($Class* FFS);
	int64_t initNativeScaler(::sun::font::Font2D* font, int32_t type, int32_t indexInCollection, bool supportsCJK, int32_t filesize);
	void invalidateScaler();
	virtual void invalidateScalerContext(int64_t pScalerContext) override;
	void lambda$disposeScaler$0();
	static const int32_t TRUETYPE_FONT = 1;
	static const int32_t TYPE1_FONT = 2;
};

	} // font
} // sun

#pragma pop_macro("FFS")
#pragma pop_macro("TRUETYPE_FONT")
#pragma pop_macro("TYPE1_FONT")

#endif // _sun_font_FreetypeFontScaler_h_