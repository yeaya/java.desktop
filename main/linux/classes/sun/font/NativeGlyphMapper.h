#ifndef _sun_font_NativeGlyphMapper_h_
#define _sun_font_NativeGlyphMapper_h_
//$ class sun.font.NativeGlyphMapper
//$ extends sun.font.CharToGlyphMapper

#include <java/lang/Array.h>
#include <sun/font/CharToGlyphMapper.h>

namespace sun {
	namespace font {
		class NativeFont;
		class XMap;
	}
}

namespace sun {
	namespace font {

class NativeGlyphMapper : public ::sun::font::CharToGlyphMapper {
	$class(NativeGlyphMapper, $NO_CLASS_INIT, ::sun::font::CharToGlyphMapper)
public:
	NativeGlyphMapper();
	void init$(::sun::font::NativeFont* f);
	virtual int32_t charToGlyph(char16_t unicode) override;
	virtual int32_t charToGlyph(int32_t unicode) override;
	virtual void charsToGlyphs(int32_t count, $chars* unicodes, $ints* glyphs) override;
	virtual void charsToGlyphs(int32_t count, $ints* unicodes, $ints* glyphs) override;
	virtual bool charsToGlyphsNS(int32_t count, $chars* unicodes, $ints* glyphs) override;
	virtual int32_t getNumGlyphs() override;
	::sun::font::NativeFont* font = nullptr;
	::sun::font::XMap* xmapper = nullptr;
	int32_t numGlyphs = 0;
};

	} // font
} // sun

#endif // _sun_font_NativeGlyphMapper_h_