#ifndef _sun_font_FontScaler_h_
#define _sun_font_FontScaler_h_
//$ class sun.font.FontScaler
//$ extends sun.java2d.DisposerRecord

#include <java/lang/Array.h>
#include <sun/java2d/DisposerRecord.h>

namespace java {
	namespace awt {
		namespace geom {
			class GeneralPath;
			class Point2D$Float;
			class Rectangle2D$Float;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
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

class FontScaler : public ::sun::java2d::DisposerRecord {
	$class(FontScaler, 0, ::sun::java2d::DisposerRecord)
public:
	FontScaler();
	void init$();
	virtual int64_t createScalerContext($doubles* matrix, int32_t aa, int32_t fm, float boldness, float italic) {return 0;}
	virtual void dispose() override;
	virtual void disposeScaler();
	virtual ::sun::font::StrikeMetrics* getFontMetrics(int64_t pScalerContext) {return nullptr;}
	virtual float getGlyphAdvance(int64_t pScalerContext, int32_t glyphCode) {return 0.0;}
	virtual int32_t getGlyphCode(char16_t charCode) {return 0;}
	virtual int64_t getGlyphImage(int64_t pScalerContext, int32_t glyphCode) {return 0;}
	virtual void getGlyphMetrics(int64_t pScalerContext, int32_t glyphCode, ::java::awt::geom::Point2D$Float* metrics) {}
	virtual ::java::awt::geom::GeneralPath* getGlyphOutline(int64_t pScalerContext, int32_t glyphCode, float x, float y) {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D$Float* getGlyphOutlineBounds(int64_t pContext, int32_t glyphCode) {return nullptr;}
	virtual ::java::awt::geom::Point2D$Float* getGlyphPoint(int64_t pScalerContext, int32_t glyphCode, int32_t ptNumber) {return nullptr;}
	virtual ::java::awt::geom::GeneralPath* getGlyphVectorOutline(int64_t pScalerContext, $ints* glyphs, int32_t numGlyphs, float x, float y) {return nullptr;}
	virtual int32_t getMissingGlyphCode() {return 0;}
	static ::sun::font::FontScaler* getNullScaler();
	virtual int32_t getNumGlyphs() {return 0;}
	static ::sun::font::FontScaler* getScaler(::sun::font::Font2D* font, int32_t indexInCollection, bool supportsCJK, int32_t filesize);
	virtual int64_t getUnitsPerEm() {return 0;}
	virtual void invalidateScalerContext(int64_t ppScalerContext) {}
	static ::sun::font::FontScaler* nullScaler;
	::java::lang::ref::WeakReference* font = nullptr;
	int64_t nativeScaler = 0;
	bool disposed = false;
};

	} // font
} // sun

#endif // _sun_font_FontScaler_h_