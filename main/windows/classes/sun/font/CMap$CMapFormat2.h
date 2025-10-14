#ifndef _sun_font_CMap$CMapFormat2_h_
#define _sun_font_CMap$CMapFormat2_h_
//$ class sun.font.CMap$CMapFormat2
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

class CMap$CMapFormat2 : public ::sun::font::CMap {
	$class(CMap$CMapFormat2, $NO_CLASS_INIT, ::sun::font::CMap)
public:
	CMap$CMapFormat2();
	void init$(::java::nio::ByteBuffer* buffer, int32_t offset, $chars* xlat);
	virtual char16_t getGlyph(int32_t charCode) override;
	$chars* subHeaderKey = nullptr;
	$chars* firstCodeArray = nullptr;
	$chars* entryCountArray = nullptr;
	$shorts* idDeltaArray = nullptr;
	$chars* idRangeOffSetArray = nullptr;
	$chars* glyphIndexArray = nullptr;
};

	} // font
} // sun

#endif // _sun_font_CMap$CMapFormat2_h_