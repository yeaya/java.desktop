#ifndef _sun_awt_AppContext$4$1_h_
#define _sun_awt_AppContext$4$1_h_
//$ class sun.awt.AppContext$4$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		class AppContext$4;
	}
}

namespace sun {
	namespace awt {

class AppContext$4$1 : public ::java::security::PrivilegedAction {
	$class(AppContext$4$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AppContext$4$1();
	void init$(::sun::awt::AppContext$4* this$1);
	virtual $Object* run() override;
	::sun::awt::AppContext$4* this$1 = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_AppContext$4$1_h_