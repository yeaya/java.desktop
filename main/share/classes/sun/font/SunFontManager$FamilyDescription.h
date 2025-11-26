#ifndef _sun_font_SunFontManager$FamilyDescription_h_
#define _sun_font_SunFontManager$FamilyDescription_h_
//$ class sun.font.SunFontManager$FamilyDescription
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace font {

class SunFontManager$FamilyDescription : public ::java::lang::Object {
	$class(SunFontManager$FamilyDescription, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SunFontManager$FamilyDescription();
	void init$();
	$String* familyName = nullptr;
	$String* plainFullName = nullptr;
	$String* boldFullName = nullptr;
	$String* italicFullName = nullptr;
	$String* boldItalicFullName = nullptr;
	$String* plainFileName = nullptr;
	$String* boldFileName = nullptr;
	$String* italicFileName = nullptr;
	$String* boldItalicFileName = nullptr;
	bool failed = false;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$FamilyDescription_h_