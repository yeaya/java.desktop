#ifndef _sun_font_CompositeStrike_h_
#define _sun_font_CompositeStrike_h_
//$ class sun.font.CompositeStrike
//$ extends sun.font.FontStrike

#include <java/lang/Array.h>
#include <sun/font/FontStrike.h>

#pragma push_macro("SLOTMASK")
#undef SLOTMASK

namespace java {
	namespace awt {
		class Rectangle;
	}
}
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
		class CompositeFont;
		class FontStrikeDesc;
		class PhysicalStrike;
		class StrikeMetrics;
	}
}

namespace sun {
	namespace font {

class CompositeStrike : public ::sun::font::FontStrike {
	$class(CompositeStrike, $NO_CLASS_INIT, ::sun::font::FontStrike)
public:
	CompositeStrike();
	void init$(::sun::font::CompositeFont* font2D, ::sun::font::FontStrikeDesc* desc);
	virtual ::java::awt::geom::Point2D$Float* getCharMetrics(char16_t ch) override;
	virtual float getCodePointAdvance(int32_t cp) override;
	virtual ::sun::font::StrikeMetrics* getFontMetrics() override;
	virtual float getGlyphAdvance(int32_t glyphCode) override;
	virtual void getGlyphImageBounds(int32_t glyphCode, ::java::awt::geom::Point2D$Float* pt, ::java::awt::Rectangle* result) override;
	virtual int64_t getGlyphImagePtr(int32_t glyphCode) override;
	virtual void getGlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) override;
	virtual ::java::awt::geom::Point2D$Float* getGlyphMetrics(int32_t glyphCode) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphOutline(int32_t glyphCode, float x, float y) override;
	virtual ::java::awt::geom::Rectangle2D$Float* getGlyphOutlineBounds(int32_t glyphCode) override;
	virtual ::java::awt::geom::GeneralPath* getGlyphVectorOutline($ints* glyphs, float x, float y) override;
	virtual int32_t getNumGlyphs() override;
	::sun::font::PhysicalStrike* getStrikeForGlyph(int32_t glyphCode);
	::sun::font::PhysicalStrike* getStrikeForSlot(int32_t slot);
	static const int32_t SLOTMASK = 0x00FFFFFF;
	::sun::font::CompositeFont* compFont = nullptr;
	$Array<::sun::font::PhysicalStrike>* strikes = nullptr;
	int32_t numGlyphs = 0;
};

	} // font
} // sun

#pragma pop_macro("SLOTMASK")

#endif // _sun_font_CompositeStrike_h_