#ifndef _sun_font_SunFontManager$1_h_
#define _sun_font_SunFontManager$1_h_
//$ class sun.font.SunFontManager$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace font {

class SunFontManager$1 : public ::java::security::PrivilegedAction {
	$class(SunFontManager$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SunFontManager$1();
	void init$();
	virtual $Object* run() override;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$1_h_