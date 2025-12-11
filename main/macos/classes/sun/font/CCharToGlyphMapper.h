#ifndef _sun_font_CCharToGlyphMapper_h_
#define _sun_font_CCharToGlyphMapper_h_
//$ class sun.font.CCharToGlyphMapper
//$ extends sun.font.CharToGlyphMapper

#include <java/lang/Array.h>
#include <sun/font/CharToGlyphMapper.h>

namespace sun {
	namespace font {
		class CCharToGlyphMapper$Cache;
		class CFont;
	}
}

namespace sun {
	namespace font {

class CCharToGlyphMapper : public ::sun::font::CharToGlyphMapper {
	$class(CCharToGlyphMapper, $NO_CLASS_INIT, ::sun::font::CharToGlyphMapper)
public:
	CCharToGlyphMapper();
	void init$(::sun::font::CFont* font);
	virtual bool canDisplay(char16_t ch) override;
	virtual bool canDisplay(int32_t cp) override;
	virtual int32_t charToGlyph(char16_t unicode) override;
	virtual int32_t charToGlyph(int32_t unicode) override;
	virtual void charsToGlyphs(int32_t count, $chars* unicodes, $ints* glyphs) override;
	virtual void charsToGlyphs(int32_t count, $ints* unicodes, $ints* glyphs) override;
	virtual bool charsToGlyphsNS(int32_t count, $chars* unicodes, $ints* glyphs) override;
	static int32_t countGlyphs(int64_t nativeFontPtr);
	virtual int32_t getNumGlyphs() override;
	static void nativeCharsToGlyphs(int64_t nativeFontPtr, int32_t count, $chars* unicodes, $ints* glyphs);
	::sun::font::CCharToGlyphMapper$Cache* cache = nullptr;
	::sun::font::CFont* fFont = nullptr;
	int32_t numGlyphs = 0;
};

	} // font
} // sun

#endif // _sun_font_CCharToGlyphMapper_h_