#ifndef _sun_font_FontConfigManager$FcCompFont_h_
#define _sun_font_FontConfigManager$FcCompFont_h_
//$ class sun.font.FontConfigManager$FcCompFont
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace font {
		class CompositeFont;
		class FontConfigManager$FontConfigFont;
	}
}

namespace sun {
	namespace font {

class FontConfigManager$FcCompFont : public ::java::lang::Object {
	$class(FontConfigManager$FcCompFont, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FontConfigManager$FcCompFont();
	void init$();
	$String* fcName = nullptr;
	$String* fcFamily = nullptr;
	$String* jdkName = nullptr;
	int32_t style = 0;
	::sun::font::FontConfigManager$FontConfigFont* firstFont = nullptr;
	$Array<::sun::font::FontConfigManager$FontConfigFont>* allFonts = nullptr;
	::sun::font::CompositeFont* compFont = nullptr;
};

	} // font
} // sun

#endif // _sun_font_FontConfigManager$FcCompFont_h_