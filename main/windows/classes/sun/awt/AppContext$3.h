#ifndef _sun_awt_AppContext$3_h_
#define _sun_awt_AppContext$3_h_
//$ class sun.awt.AppContext$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {

class AppContext$3 : public ::java::security::PrivilegedAction {
	$class(AppContext$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AppContext$3();
	void init$();
	virtual $Object* run() override;
};

	} // awt
} // sun

#endif // _sun_awt_AppContext$3_h_