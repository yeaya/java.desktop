#ifndef _sun_font_CMap_h_
#define _sun_font_CMap_h_
//$ class sun.font.CMap
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INTMASK")
#undef INTMASK
#pragma push_macro("SHORTMASK")
#undef SHORTMASK

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace font {
		class CMap$NullCMapClass;
		class CMap$UVS;
		class TrueTypeFont;
	}
}

namespace sun {
	namespace font {

class CMap : public ::java::lang::Object {
	$class(CMap, 0, ::java::lang::Object)
public:
	CMap();
	void init$();
	static ::sun::font::CMap* createCMap(::java::nio::ByteBuffer* buffer, int32_t offset, $chars* xlat);
	void createUVS(::java::nio::ByteBuffer* buffer, int32_t offset);
	int32_t getControlCodeGlyph(int32_t charCode, bool noSurrogates);
	static $chars* getConverter(int16_t encodingID);
	static $chars* getConverterMap(int16_t encodingID);
	char16_t getFormatCharGlyph(int32_t charCode);
	virtual char16_t getGlyph(int32_t charCode) {return 0;}
	virtual char16_t getVariationGlyph(int32_t charCode, int32_t variationSelector);
	static ::sun::font::CMap* initialize(::sun::font::TrueTypeFont* font);
	static const int16_t ShiftJISEncoding = 2;
	static const int16_t GBKEncoding = 3;
	static const int16_t Big5Encoding = 4;
	static const int16_t WansungEncoding = 5;
	static const int16_t JohabEncoding = 6;
	static const int16_t MSUnicodeSurrogateEncoding = 10;
	static const char16_t noSuchChar = (char16_t)0x0000FFFD;
	static const int32_t SHORTMASK = 0x0000FFFF;
	static const int32_t INTMASK = 0x7FFFFFFF;
	static $Array<char16_t, 2>* converterMaps;
	$chars* xlat = nullptr;
	::sun::font::CMap$UVS* uvs = nullptr;
	static ::sun::font::CMap$NullCMapClass* theNullCmap;
};

	} // font
} // sun

#pragma pop_macro("INTMASK")
#pragma pop_macro("SHORTMASK")

#endif // _sun_font_CMap_h_