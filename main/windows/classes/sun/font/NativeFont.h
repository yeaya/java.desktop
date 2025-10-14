#ifndef _sun_font_NativeFont_h_
#define _sun_font_NativeFont_h_
//$ class sun.font.NativeFont
//$ extends sun.font.PhysicalFont

#include <java/lang/Array.h>
#include <sun/font/PhysicalFont.h>

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
			class GeneralPath;
			class Point2D$Float;
			class Rectangle2D;
			class Rectangle2D$Float;
		}
	}
}
namespace sun {
	namespace font {
		class CharToGlyphMapper;
		class FontStrike;
		class FontStrikeDesc;
		class StrikeMetrics;
	}
}

namespace sun {
	namespace font {

class NativeFont : public ::sun::font::PhysicalFont {
	$class(NativeFont, $NO_CLASS_INIT, ::sun::font::PhysicalFont)
public:
	NativeFont();
	using ::sun::font::PhysicalFont::getFontMetrics;
	void init$($String* platName, bool isBitmapDelegate);
	virtual ::sun::font::FontStrike* createStrike(::sun::font::FontStrikeDesc* desc) override;
	virtual ::sun::font::PhysicalFont* getDelegateFont();
	virtual ::sun::font::StrikeMetrics* getFontMetrics(int64_t pScalerContext) override;
	virtual float getGlyphAdvance(int64_t pScalerContext, int32_t glyphCode) override;
	virtual int64_t getGlyphImage(int64_t pScalerContext, int32_t glyphCode) override;
	virtual void getGlyphMetrics(int64_t pScalerContext, int32_t glyphCode, ::java::awt::geom::Point2D$Float* metrics) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphOutline(int64_t pScalerContext, int32_t glyphCode, float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D$Float* getGlyphOutlineBounds(int64_t pScalerContext, int32_t glyphCode) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphVectorOutline(int64_t pScalerContext, $ints* glyphs, int32_t numGlyphs, float x, float y) override;
	virtual ::sun::font::CharToGlyphMapper* getMapper() override;
	virtual ::java::awt::geom::Rectangle2D* getMaxCharBounds(::java::awt::font::FontRenderContext* frc);
	static bool hasExternalBitmaps($String* platName);
};

	} // font
} // sun

#endif // _sun_font_NativeFont_h_