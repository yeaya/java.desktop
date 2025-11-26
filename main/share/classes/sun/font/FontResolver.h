#ifndef _sun_font_FontResolver_h_
#define _sun_font_FontResolver_h_
//$ class sun.font.FontResolver
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BLOCKSIZE")
#undef BLOCKSIZE
#pragma push_macro("DEFAULT_SIZE")
#undef DEFAULT_SIZE
#pragma push_macro("INSTANCE")
#undef INSTANCE
#pragma push_macro("MASK")
#undef MASK
#pragma push_macro("SHIFT")
#undef SHIFT

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace font {
		class CodePointIterator;
	}
}

namespace sun {
	namespace font {

class FontResolver : public ::java::lang::Object {
	$class(FontResolver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FontResolver();
	void init$();
	$Array<::java::awt::Font>* getAllFonts();
	$Array<::java::awt::Font>* getAllSCFonts();
	::java::awt::Font* getFont(int32_t index, ::java::util::Map* attributes);
	int32_t getFontIndex(char16_t c);
	int32_t getFontIndex(int32_t cp);
	int32_t getIndexFor(char16_t c);
	int32_t getIndexFor(int32_t cp);
	static ::sun::font::FontResolver* getInstance();
	int32_t nextFontRunIndex(::sun::font::CodePointIterator* iter);
	$Array<::java::awt::Font>* allFonts = nullptr;
	$Array<::java::awt::Font>* supplementaryFonts = nullptr;
	$ints* supplementaryIndices = nullptr;
	static const int32_t DEFAULT_SIZE = 12;
	::java::awt::Font* defaultFont = nullptr;
	static const int32_t SHIFT = 9;
	static const int32_t BLOCKSIZE = 128; // 1 << (16 - SHIFT)
	static const int32_t MASK = 127; // BLOCKSIZE - 1
	$Array<int32_t, 2>* blocks = nullptr;
	static ::sun::font::FontResolver* INSTANCE;
};

	} // font
} // sun

#pragma pop_macro("BLOCKSIZE")
#pragma pop_macro("DEFAULT_SIZE")
#pragma pop_macro("INSTANCE")
#pragma pop_macro("MASK")
#pragma pop_macro("SHIFT")

#endif // _sun_font_FontResolver_h_