#ifndef _sun_font_TrueTypeGlyphMapper_h_
#define _sun_font_TrueTypeGlyphMapper_h_
//$ class sun.font.TrueTypeGlyphMapper
//$ extends sun.font.CharToGlyphMapper

#include <java/lang/Array.h>
#include <sun/font/CharToGlyphMapper.h>

#pragma push_macro("JA_YEN")
#undef JA_YEN
#pragma push_macro("REVERSE_SOLIDUS")
#undef REVERSE_SOLIDUS

namespace sun {
	namespace font {
		class CMap;
		class TrueTypeFont;
	}
}

namespace sun {
	namespace font {

class TrueTypeGlyphMapper : public ::sun::font::CharToGlyphMapper {
	$class(TrueTypeGlyphMapper, 0, ::sun::font::CharToGlyphMapper)
public:
	TrueTypeGlyphMapper();
	void init$(::sun::font::TrueTypeFont* font);
	virtual int32_t charToGlyph(char16_t unicode) override;
	virtual int32_t charToGlyph(int32_t unicode) override;
	virtual int32_t charToVariationGlyph(int32_t unicode, int32_t variationSelector) override;
	virtual void charsToGlyphs(int32_t count, $ints* unicodes, $ints* glyphs) override;
	virtual void charsToGlyphs(int32_t count, $chars* unicodes, $ints* glyphs) override;
	virtual bool charsToGlyphsNS(int32_t count, $chars* unicodes, $ints* glyphs) override;
	char16_t getGlyphFromCMAP(int32_t charCode);
	char16_t getGlyphFromCMAP(int32_t charCode, int32_t variationSelector);
	virtual int32_t getNumGlyphs() override;
	void handleBadCMAP();
	virtual bool hasSupplementaryChars();
	char16_t remapJAChar(char16_t unicode);
	int32_t remapJAIntChar(int32_t unicode);
	static const char16_t REVERSE_SOLIDUS = 92;
	static const char16_t JA_YEN = 165;
	static bool isJAlocale;
	::sun::font::TrueTypeFont* font = nullptr;
	::sun::font::CMap* cmap = nullptr;
	int32_t numGlyphs = 0;
};

	} // font
} // sun

#pragma pop_macro("JA_YEN")
#pragma pop_macro("REVERSE_SOLIDUS")

#endif // _sun_font_TrueTypeGlyphMapper_h_