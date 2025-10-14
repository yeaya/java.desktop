#ifndef _sun_font_CMap$CMapFormat12_h_
#define _sun_font_CMap$CMapFormat12_h_
//$ class sun.font.CMap$CMapFormat12
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

class CMap$CMapFormat12 : public ::sun::font::CMap {
	$class(CMap$CMapFormat12, $NO_CLASS_INIT, ::sun::font::CMap)
public:
	CMap$CMapFormat12();
	void init$(::java::nio::ByteBuffer* buffer, int32_t offset, $chars* xlat);
	virtual char16_t getGlyph(int32_t charCode) override;
	int32_t numGroups = 0;
	int32_t highBit = 0;
	int32_t power = 0;
	int32_t extra = 0;
	$longs* startCharCode = nullptr;
	$longs* endCharCode = nullptr;
	$ints* startGlyphID = nullptr;
};

	} // font
} // sun

#endif // _sun_font_CMap$CMapFormat12_h_