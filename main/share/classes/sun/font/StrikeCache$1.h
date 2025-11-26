#ifndef _sun_font_StrikeCache$1_h_
#define _sun_font_StrikeCache$1_h_
//$ class sun.font.StrikeCache$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace font {

class StrikeCache$1 : public ::java::security::PrivilegedAction {
	$class(StrikeCache$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	StrikeCache$1();
	void init$();
	virtual $Object* run() override;
};

	} // font
} // sun

#endif // _sun_font_StrikeCache$1_h_