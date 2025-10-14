#ifndef _sun_font_FontUtilities$1_h_
#define _sun_font_FontUtilities$1_h_
//$ class sun.font.FontUtilities$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace font {

class FontUtilities$1 : public ::java::security::PrivilegedAction {
	$class(FontUtilities$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FontUtilities$1();
	void init$();
	virtual $Object* run() override;
};

	} // font
} // sun

#endif // _sun_font_FontUtilities$1_h_