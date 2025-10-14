#ifndef _sun_font_CMap$CMapFormat8_h_
#define _sun_font_CMap$CMapFormat8_h_
//$ class sun.font.CMap$CMapFormat8
//$ extends sun.font.CMap

#include <java/lang/Array.h>
#include <sun/font/CMap.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace sun {
	namespace font {

class CMap$CMapFormat8 : public ::sun::font::CMap {
	$class(CMap$CMapFormat8, $NO_CLASS_INIT, ::sun::font::CMap)
public:
	CMap$CMapFormat8();
	void init$(::java::nio::ByteBuffer* bbuffer, int32_t offset, $chars* xlat);
	virtual char16_t getGlyph(int32_t charCode) override;
	$bytes* is32 = nullptr;
	int32_t nGroups = 0;
	$ints* startCharCode = nullptr;
	$ints* endCharCode = nullptr;
	$ints* startGlyphID = nullptr;
};

	} // font
} // sun

#endif // _sun_font_CMap$CMapFormat8_h_