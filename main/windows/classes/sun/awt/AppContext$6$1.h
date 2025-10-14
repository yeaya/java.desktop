#ifndef _sun_awt_AppContext$6$1_h_
#define _sun_awt_AppContext$6$1_h_
//$ class sun.awt.AppContext$6$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		class AppContext;
		class AppContext$6;
	}
}

namespace sun {
	namespace awt {

class AppContext$6$1 : public ::java::security::PrivilegedAction {
	$class(AppContext$6$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AppContext$6$1();
	void init$(::sun::awt::AppContext$6* this$0, ::sun::awt::AppContext* val$ecx);
	virtual $Object* run() override;
	::sun::awt::AppContext$6* this$0 = nullptr;
	::sun::awt::AppContext* val$ecx = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_AppContext$6$1_h_