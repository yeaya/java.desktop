#ifndef _sun_awt_AppContext$2_h_
#define _sun_awt_AppContext$2_h_
//$ class sun.awt.AppContext$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {

class AppContext$2 : public ::java::security::PrivilegedAction {
	$class(AppContext$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AppContext$2();
	void init$();
	virtual $Object* run() override;
};

	} // awt
} // sun

#endif // _sun_awt_AppContext$2_h_