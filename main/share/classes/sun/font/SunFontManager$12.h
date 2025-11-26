#ifndef _sun_font_SunFontManager$12_h_
#define _sun_font_SunFontManager$12_h_
//$ class sun.font.SunFontManager$12
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace font {

class SunFontManager$12 : public ::java::security::PrivilegedAction {
	$class(SunFontManager$12, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SunFontManager$12();
	void init$();
	virtual $Object* run() override;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$12_h_