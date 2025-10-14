#ifndef _sun_font_CMap$NullCMapClass_h_
#define _sun_font_CMap$NullCMapClass_h_
//$ class sun.font.CMap$NullCMapClass
//$ extends sun.font.CMap

#include <sun/font/CMap.h>

namespace sun {
	namespace font {

class CMap$NullCMapClass : public ::sun::font::CMap {
	$class(CMap$NullCMapClass, $NO_CLASS_INIT, ::sun::font::CMap)
public:
	CMap$NullCMapClass();
	void init$();
	virtual char16_t getGlyph(int32_t charCode) override;
};

	} // font
} // sun

#endif // _sun_font_CMap$NullCMapClass_h_