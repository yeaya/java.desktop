#ifndef _sun_font_CMap$CMapFormat6_h_
#define _sun_font_CMap$CMapFormat6_h_
//$ class sun.font.CMap$CMapFormat6
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

class CMap$CMapFormat6 : public ::sun::font::CMap {
	$class(CMap$CMapFormat6, $NO_CLASS_INIT, ::sun::font::CMap)
public:
	CMap$CMapFormat6();
	void init$(::java::nio::ByteBuffer* bbuffer, int32_t offset, $chars* xlat);
	virtual char16_t getGlyph(int32_t charCode) override;
	char16_t firstCode = 0;
	char16_t entryCount = 0;
	$chars* glyphIdArray = nullptr;
};

	} // font
} // sun

#endif // _sun_font_CMap$CMapFormat6_h_