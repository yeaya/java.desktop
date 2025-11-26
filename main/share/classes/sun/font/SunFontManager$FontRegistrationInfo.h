#ifndef _sun_font_SunFontManager$FontRegistrationInfo_h_
#define _sun_font_SunFontManager$FontRegistrationInfo_h_
//$ class sun.font.SunFontManager$FontRegistrationInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace font {

class SunFontManager$FontRegistrationInfo : public ::java::lang::Object {
	$class(SunFontManager$FontRegistrationInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SunFontManager$FontRegistrationInfo();
	void init$($String* fontPath, $StringArray* names, int32_t format, bool useJavaRasterizer, int32_t rank);
	$String* fontFilePath = nullptr;
	$StringArray* nativeNames = nullptr;
	int32_t fontFormat = 0;
	bool javaRasterizer = false;
	int32_t fontRank = 0;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$FontRegistrationInfo_h_