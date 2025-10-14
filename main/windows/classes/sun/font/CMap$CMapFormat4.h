#ifndef _sun_font_CMap$CMapFormat4_h_
#define _sun_font_CMap$CMapFormat4_h_
//$ class sun.font.CMap$CMapFormat4
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

class CMap$CMapFormat4 : public ::sun::font::CMap {
	$class(CMap$CMapFormat4, $NO_CLASS_INIT, ::sun::font::CMap)
public:
	CMap$CMapFormat4();
	void init$(::java::nio::ByteBuffer* bbuffer, int32_t offset, $chars* xlat);
	virtual char16_t getGlyph(int32_t charCode) override;
	int32_t segCount = 0;
	int32_t entrySelector = 0;
	int32_t rangeShift = 0;
	$chars* endCount = nullptr;
	$chars* startCount = nullptr;
	$shorts* idDelta = nullptr;
	$chars* idRangeOffset = nullptr;
	$chars* glyphIds = nullptr;
};

	} // font
} // sun

#endif // _sun_font_CMap$CMapFormat4_h_