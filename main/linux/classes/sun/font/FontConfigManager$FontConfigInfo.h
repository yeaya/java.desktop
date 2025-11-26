#ifndef _sun_font_FontConfigManager$FontConfigInfo_h_
#define _sun_font_FontConfigManager$FontConfigInfo_h_
//$ class sun.font.FontConfigManager$FontConfigInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace font {

class FontConfigManager$FontConfigInfo : public ::java::lang::Object {
	$class(FontConfigManager$FontConfigInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FontConfigManager$FontConfigInfo();
	void init$();
	int32_t fcVersion = 0;
	$StringArray* cacheDirs = nullptr;
};

	} // font
} // sun

#endif // _sun_font_FontConfigManager$FontConfigInfo_h_