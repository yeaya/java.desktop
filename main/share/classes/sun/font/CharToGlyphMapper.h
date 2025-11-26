#ifndef _sun_font_CharToGlyphMapper_h_
#define _sun_font_CharToGlyphMapper_h_
//$ class sun.font.CharToGlyphMapper
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HI_SURROGATE_END")
#undef HI_SURROGATE_END
#pragma push_macro("HI_SURROGATE_START")
#undef HI_SURROGATE_START
#pragma push_macro("INVISIBLE_GLYPHS")
#undef INVISIBLE_GLYPHS
#pragma push_macro("INVISIBLE_GLYPH_ID")
#undef INVISIBLE_GLYPH_ID
#pragma push_macro("LO_SURROGATE_END")
#undef LO_SURROGATE_END
#pragma push_macro("LO_SURROGATE_START")
#undef LO_SURROGATE_START
#pragma push_macro("UNINITIALIZED_GLYPH")
#undef UNINITIALIZED_GLYPH
#pragma push_macro("VSS_END")
#undef VSS_END
#pragma push_macro("VSS_START")
#undef VSS_START
#pragma push_macro("VS_END")
#undef VS_END
#pragma push_macro("VS_START")
#undef VS_START

namespace sun {
	namespace font {

class CharToGlyphMapper : public ::java::lang::Object {
	$class(CharToGlyphMapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CharToGlyphMapper();
	void init$();
	virtual bool canDisplay(char16_t ch);
	virtual bool canDisplay(int32_t cp);
	virtual int32_t charToGlyph(char16_t unicode);
	virtual int32_t charToGlyph(int32_t unicode);
	virtual int32_t charToVariationGlyph(int32_t unicode, int32_t variationSelector);
	virtual void charsToGlyphs(int32_t count, $chars* unicodes, $ints* glyphs) {}
	virtual void charsToGlyphs(int32_t count, $ints* unicodes, $ints* glyphs) {}
	virtual bool charsToGlyphsNS(int32_t count, $chars* unicodes, $ints* glyphs) {return false;}
	virtual int32_t getMissingGlyphCode();
	virtual int32_t getNumGlyphs() {return 0;}
	static bool isVariationSelector(int32_t charCode);
	static const int32_t HI_SURROGATE_START = 0x0000D800;
	static const int32_t HI_SURROGATE_END = 0x0000DBFF;
	static const int32_t LO_SURROGATE_START = 0x0000DC00;
	static const int32_t LO_SURROGATE_END = 0x0000DFFF;
	static const int32_t VS_START = 0x0000FE00;
	static const int32_t VS_END = 0x0000FE0F;
	static const int32_t VSS_START = 0x000E0100;
	static const int32_t VSS_END = 0x000E01FF;
	static const int32_t UNINITIALIZED_GLYPH = (-1);
	static const int32_t INVISIBLE_GLYPH_ID = 0x0000FFFF;
	static const int32_t INVISIBLE_GLYPHS = 0x0000FFFE;
	int32_t missingGlyph = 0;
};

	} // font
} // sun

#pragma pop_macro("HI_SURROGATE_END")
#pragma pop_macro("HI_SURROGATE_START")
#pragma pop_macro("INVISIBLE_GLYPHS")
#pragma pop_macro("INVISIBLE_GLYPH_ID")
#pragma pop_macro("LO_SURROGATE_END")
#pragma pop_macro("LO_SURROGATE_START")
#pragma pop_macro("UNINITIALIZED_GLYPH")
#pragma pop_macro("VSS_END")
#pragma pop_macro("VSS_START")
#pragma pop_macro("VS_END")
#pragma pop_macro("VS_START")

#endif // _sun_font_CharToGlyphMapper_h_