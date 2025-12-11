#ifndef _sun_font_CStrike_h_
#define _sun_font_CStrike_h_
//$ class sun.font.CStrike
//$ extends sun.font.PhysicalStrike

#include <java/lang/Array.h>
#include <sun/font/PhysicalStrike.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class GeneralPath;
			class Point2D$Float;
			class Rectangle2D$Float;
		}
	}
}
namespace sun {
	namespace font {
		class CFont;
		class CStrike$GlyphAdvanceCache;
		class CStrike$GlyphInfoCache;
		class FontStrikeDesc;
		class StrikeMetrics;
	}
}

namespace sun {
	namespace font {

class CStrike : public ::sun::font::PhysicalStrike {
	$class(CStrike, $HAS_FINALIZE | $NO_CLASS_INIT, ::sun::font::PhysicalStrike)
public:
	CStrike();
	void init$(::sun::font::CFont* font, ::sun::font::FontStrikeDesc* inDesc);
	static int64_t createNativeStrikePtr(int64_t nativeFontPtr, $doubles* glyphTx, $doubles* invDevTxMatrix, int32_t aaHint, int32_t fmHint);
	static void disposeNativeStrikePtr(int64_t nativeStrikePtr);
	virtual void finalize() override;
	float getCachedNativeGlyphAdvance(int32_t glyphCode);
	virtual ::java::awt::geom::Point2D$Float* getCharMetrics(char16_t ch) override;
	virtual float getCodePointAdvance(int32_t cp) override;
	void getFilteredGlyphImagePtrs($longs* glyphInfos, $ints* uniCodes, int32_t len);
	static ::sun::font::StrikeMetrics* getFontMetrics(int64_t nativeStrikePtr);
	virtual ::sun::font::StrikeMetrics* getFontMetrics() override;
	virtual float getGlyphAdvance(int32_t glyphCode) override;
	virtual void getGlyphImageBounds(int32_t glyphCode, ::java::awt::geom::Point2D$Float* pt, ::java::awt::Rectangle* result) override;
	void getGlyphImageBounds(int32_t glyphCode, float x, float y, ::java::awt::geom::Rectangle2D$Float* floatRect);
	virtual int64_t getGlyphImagePtr(int32_t glyphCode) override;
	virtual void getGlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) override;
	static void getGlyphImagePtrsNative(int64_t nativeStrikePtr, $longs* glyphInfos, $ints* uniCodes, int32_t len);
	virtual ::java::awt::geom::Point2D$Float* getGlyphMetrics(int32_t glyphCode) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphOutline(int32_t glyphCode, float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D$Float* getGlyphOutlineBounds(int32_t glyphCode) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphVectorOutline($ints* glyphs, float x, float y) override;
	static float getNativeGlyphAdvance(int64_t nativeStrikePtr, int32_t glyphCode);
	static void getNativeGlyphImageBounds(int64_t nativeStrikePtr, int32_t glyphCode, ::java::awt::geom::Rectangle2D$Float* result, double x, double y);
	static ::java::awt::geom::GeneralPath* getNativeGlyphOutline(int64_t nativeStrikePtr, int32_t glyphCode, double x, double y);
	int64_t getNativeStrikePtr();
	virtual int32_t getNumGlyphs() override;
	::sun::font::CFont* nativeFont = nullptr;
	::java::awt::geom::AffineTransform* invDevTx = nullptr;
	::sun::font::CStrike$GlyphInfoCache* glyphInfoCache = nullptr;
	::sun::font::CStrike$GlyphAdvanceCache* glyphAdvanceCache = nullptr;
	int64_t nativeStrikePtr = 0;
};

	} // font
} // sun

#endif // _sun_font_CStrike_h_