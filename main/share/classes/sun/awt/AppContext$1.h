#ifndef _sun_awt_AppContext$1_h_
#define _sun_awt_AppContext$1_h_
//$ class sun.awt.AppContext$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace sun {
	namespace awt {

class AppContext$1 : public ::java::security::PrivilegedAction {
	$class(AppContext$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AppContext$1();
	void init$(::sun::awt::AppContext* this$0);
	virtual $Object* run() override;
	::sun::awt::AppContext* this$0 = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_AppContext$1_h_