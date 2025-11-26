#ifndef _sun_font_CMap$CMapFormat10_h_
#define _sun_font_CMap$CMapFormat10_h_
//$ class sun.font.CMap$CMapFormat10
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

class CMap$CMapFormat10 : public ::sun::font::CMap {
	$class(CMap$CMapFormat10, $NO_CLASS_INIT, ::sun::font::CMap)
public:
	CMap$CMapFormat10();
	void init$(::java::nio::ByteBuffer* bbuffer, int32_t offset, $chars* xlat);
	virtual char16_t getGlyph(int32_t charCode) override;
	int64_t firstCode = 0;
	int32_t entryCount = 0;
	$chars* glyphIdArray = nullptr;
};

	} // font
} // sun

#endif // _sun_font_CMap$CMapFormat10_h_