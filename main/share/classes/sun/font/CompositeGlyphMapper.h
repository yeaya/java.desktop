#ifndef _sun_font_CompositeGlyphMapper_h_
#define _sun_font_CompositeGlyphMapper_h_
//$ class sun.font.CompositeGlyphMapper
//$ extends sun.font.CharToGlyphMapper

#include <java/lang/Array.h>
#include <sun/font/CharToGlyphMapper.h>

#pragma push_macro("BLOCKSZ")
#undef BLOCKSZ
#pragma push_macro("GLYPHMASK")
#undef GLYPHMASK
#pragma push_macro("MAXUNICODE")
#undef MAXUNICODE
#pragma push_macro("NBLOCKS")
#undef NBLOCKS
#pragma push_macro("SLOTMASK")
#undef SLOTMASK

namespace sun {
	namespace font {
		class CompositeFont;
	}
}

namespace sun {
	namespace font {

class CompositeGlyphMapper : public ::sun::font::CharToGlyphMapper {
	$class(CompositeGlyphMapper, $NO_CLASS_INIT, ::sun::font::CharToGlyphMapper)
public:
	CompositeGlyphMapper();
	void init$(::sun::font::CompositeFont* compFont);
	virtual int32_t charToGlyph(int32_t unicode) override;
	virtual int32_t charToGlyph(int32_t unicode, int32_t prefSlot);
	virtual int32_t charToGlyph(char16_t unicode) override;
	virtual void charsToGlyphs(int32_t count, $chars* unicodes, $ints* glyphs) override;
	virtual void charsToGlyphs(int32_t count, $ints* unicodes, $ints* glyphs) override;
	virtual bool charsToGlyphsNS(int32_t count, $chars* unicodes, $ints* glyphs) override;
	virtual int32_t compositeGlyphCode(int32_t slot, int32_t glyphCode);
	int32_t convertToGlyph(int32_t unicode);
	int32_t getCachedGlyphCode(int32_t unicode);
	virtual int32_t getNumGlyphs() override;
	::sun::font::CharToGlyphMapper* getSlotMapper(int32_t slot);
	void initMapper();
	void setCachedGlyphCode(int32_t unicode, int32_t glyphCode);
	static const int32_t SLOTMASK = 0xFF000000;
	static const int32_t GLYPHMASK = 0x00FFFFFF;
	static const int32_t NBLOCKS = 216;
	static const int32_t BLOCKSZ = 256;
	static const int32_t MAXUNICODE = 55296; // NBLOCKS * BLOCKSZ
	::sun::font::CompositeFont* font = nullptr;
	$Array<::sun::font::CharToGlyphMapper>* slotMappers = nullptr;
	$Array<int32_t, 2>* glyphMaps = nullptr;
	bool hasExcludes = false;
};

	} // font
} // sun

#pragma pop_macro("BLOCKSZ")
#pragma pop_macro("GLYPHMASK")
#pragma pop_macro("MAXUNICODE")
#pragma pop_macro("NBLOCKS")
#pragma pop_macro("SLOTMASK")

#endif // _sun_font_CompositeGlyphMapper_h_