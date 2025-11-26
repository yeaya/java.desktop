#ifndef _sun_font_FontRunIterator_h_
#define _sun_font_FontRunIterator_h_
//$ class sun.font.FontRunIterator
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DONE")
#undef DONE
#pragma push_macro("LEAD_LIMIT")
#undef LEAD_LIMIT
#pragma push_macro("LEAD_START")
#undef LEAD_START
#pragma push_macro("LEAD_SURROGATE_SHIFT")
#undef LEAD_SURROGATE_SHIFT
#pragma push_macro("SURROGATE_OFFSET")
#undef SURROGATE_OFFSET
#pragma push_macro("SURROGATE_START")
#undef SURROGATE_START
#pragma push_macro("TAIL_LIMIT")
#undef TAIL_LIMIT
#pragma push_macro("TAIL_START")
#undef TAIL_START

namespace sun {
	namespace font {
		class CompositeFont;
		class CompositeGlyphMapper;
		class PhysicalFont;
	}
}

namespace sun {
	namespace font {

class FontRunIterator : public ::java::lang::Object {
	$class(FontRunIterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FontRunIterator();
	void init$();
	::sun::font::PhysicalFont* getFont();
	int32_t getGlyphMask();
	int32_t getPos();
	void init(::sun::font::CompositeFont* font, $chars* text, int32_t start, int32_t limit);
	bool next(int32_t script, int32_t lim);
	bool next();
	int32_t nextCodePoint();
	int32_t nextCodePoint(int32_t lim);
	void pushback(int32_t ch);
	::sun::font::CompositeFont* font = nullptr;
	$chars* text = nullptr;
	int32_t start = 0;
	int32_t limit = 0;
	::sun::font::CompositeGlyphMapper* mapper = nullptr;
	int32_t slot = 0;
	int32_t pos = 0;
	static const int32_t SURROGATE_START = 0x00010000;
	static const int32_t LEAD_START = 0x0000D800;
	static const int32_t LEAD_LIMIT = 0x0000DC00;
	static const int32_t TAIL_START = 0x0000DC00;
	static const int32_t TAIL_LIMIT = 0x0000E000;
	static const int32_t LEAD_SURROGATE_SHIFT = 10;
	static const int32_t SURROGATE_OFFSET = 0xFCA02400; // SURROGATE_START - (LEAD_START << LEAD_SURROGATE_SHIFT) - TAIL_START
	static const int32_t DONE = (-1);
};

	} // font
} // sun

#pragma pop_macro("DONE")
#pragma pop_macro("LEAD_LIMIT")
#pragma pop_macro("LEAD_START")
#pragma pop_macro("LEAD_SURROGATE_SHIFT")
#pragma pop_macro("SURROGATE_OFFSET")
#pragma pop_macro("SURROGATE_START")
#pragma pop_macro("TAIL_LIMIT")
#pragma pop_macro("TAIL_START")

#endif // _sun_font_FontRunIterator_h_