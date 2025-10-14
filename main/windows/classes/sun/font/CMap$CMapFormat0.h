#ifndef _sun_font_CMap$CMapFormat0_h_
#define _sun_font_CMap$CMapFormat0_h_
//$ class sun.font.CMap$CMapFormat0
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

class CMap$CMapFormat0 : public ::sun::font::CMap {
	$class(CMap$CMapFormat0, $NO_CLASS_INIT, ::sun::font::CMap)
public:
	CMap$CMapFormat0();
	void init$(::java::nio::ByteBuffer* buffer, int32_t offset);
	virtual char16_t getGlyph(int32_t charCode) override;
	$bytes* cmap = nullptr;
};

	} // font
} // sun

#endif // _sun_font_CMap$CMapFormat0_h_