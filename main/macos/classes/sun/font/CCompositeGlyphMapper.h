#ifndef _sun_font_CCompositeGlyphMapper_h_
#define _sun_font_CCompositeGlyphMapper_h_
//$ class sun.font.CCompositeGlyphMapper
//$ extends sun.font.CompositeGlyphMapper

#include <java/lang/Array.h>
#include <sun/font/CompositeGlyphMapper.h>

namespace sun {
	namespace font {
		class CharToGlyphMapper;
		class CompositeFont;
	}
}

namespace sun {
	namespace font {

class CCompositeGlyphMapper : public ::sun::font::CompositeGlyphMapper {
	$class(CCompositeGlyphMapper, $NO_CLASS_INIT, ::sun::font::CompositeGlyphMapper)
public:
	CCompositeGlyphMapper();
	using ::sun::font::CompositeGlyphMapper::charToGlyph;
	using ::sun::font::CompositeGlyphMapper::canDisplay;
	void init$(::sun::font::CompositeFont* compFont);
	virtual bool canDisplay(char16_t ch) override;
	virtual int32_t charToGlyph(int32_t unicode) override;
	virtual int32_t charToGlyph(char16_t unicode) override;
	virtual void charsToGlyphs(int32_t count, $chars* unicodes, $ints* glyphs) override;
	virtual void charsToGlyphs(int32_t count, $ints* unicodes, $ints* glyphs) override;
	virtual bool charsToGlyphsNS(int32_t count, $chars* unicodes, $ints* glyphs) override;
	int32_t convertToGlyph(int32_t unicode);
	virtual int32_t getNumGlyphs() override;
	::sun::font::CharToGlyphMapper* getSlotMapper(int32_t slot);
	::sun::font::CompositeFont* font = nullptr;
	$Array<::sun::font::CharToGlyphMapper>* slotMappers = nullptr;
};

	} // font
} // sun

#endif // _sun_font_CCompositeGlyphMapper_h_