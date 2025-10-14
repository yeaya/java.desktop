#ifndef _sun_font_Type1GlyphMapper_h_
#define _sun_font_Type1GlyphMapper_h_
//$ class sun.font.Type1GlyphMapper
//$ extends sun.font.CharToGlyphMapper

#include <java/lang/Array.h>
#include <sun/font/CharToGlyphMapper.h>

namespace sun {
	namespace font {
		class FontScaler;
		class Type1Font;
	}
}

namespace sun {
	namespace font {

class Type1GlyphMapper : public ::sun::font::CharToGlyphMapper {
	$class(Type1GlyphMapper, $NO_CLASS_INIT, ::sun::font::CharToGlyphMapper)
public:
	Type1GlyphMapper();
	using ::sun::font::CharToGlyphMapper::canDisplay;
	void init$(::sun::font::Type1Font* font);
	virtual bool canDisplay(char16_t ch) override;
	virtual int32_t charToGlyph(char16_t ch) override;
	virtual int32_t charToGlyph(int32_t ch) override;
	virtual void charsToGlyphs(int32_t count, $chars* unicodes, $ints* glyphs) override;
	virtual void charsToGlyphs(int32_t count, $ints* unicodes, $ints* glyphs) override;
	virtual bool charsToGlyphsNS(int32_t count, $chars* unicodes, $ints* glyphs) override;
	virtual int32_t getMissingGlyphCode() override;
	virtual int32_t getNumGlyphs() override;
	void initMapper();
	::sun::font::Type1Font* font = nullptr;
	::sun::font::FontScaler* scaler = nullptr;
};

	} // font
} // sun

#endif // _sun_font_Type1GlyphMapper_h_