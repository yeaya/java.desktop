#ifndef _sun_font_FontConfigManager$FontConfigFont_h_
#define _sun_font_FontConfigManager$FontConfigFont_h_
//$ class sun.font.FontConfigManager$FontConfigFont
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace font {

class FontConfigManager$FontConfigFont : public ::java::lang::Object {
	$class(FontConfigManager$FontConfigFont, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FontConfigManager$FontConfigFont();
	void init$();
	$String* familyName = nullptr;
	$String* styleStr = nullptr;
	$String* fullName = nullptr;
	$String* fontFile = nullptr;
};

	} // font
} // sun

#endif // _sun_font_FontConfigManager$FontConfigFont_h_