#ifndef _sun_awt_FontConfiguration$3_h_
#define _sun_awt_FontConfiguration$3_h_
//$ class sun.awt.FontConfiguration$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {

class FontConfiguration$3 : public ::java::security::PrivilegedAction {
	$class(FontConfiguration$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FontConfiguration$3();
	void init$();
	virtual $Object* run() override;
};

	} // awt
} // sun

#endif // _sun_awt_FontConfiguration$3_h_