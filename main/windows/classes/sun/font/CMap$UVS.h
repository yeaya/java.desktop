#ifndef _sun_font_CMap$UVS_h_
#define _sun_font_CMap$UVS_h_
//$ class sun.font.CMap$UVS
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("VS_NOGLYPH")
#undef VS_NOGLYPH

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace sun {
	namespace font {

class CMap$UVS : public ::java::lang::Object {
	$class(CMap$UVS, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CMap$UVS();
	void init$(::java::nio::ByteBuffer* buffer, int32_t offset);
	int32_t getGlyph(int32_t charCode, int32_t variationSelector);
	int32_t numSelectors = 0;
	$ints* selector = nullptr;
	$ints* numUVSMapping = nullptr;
	$Array<int32_t, 2>* unicodeValue = nullptr;
	$Array<char16_t, 2>* glyphID = nullptr;
	static const int32_t VS_NOGLYPH = 0;
};

	} // font
} // sun

#pragma pop_macro("VS_NOGLYPH")

#endif // _sun_font_CMap$UVS_h_