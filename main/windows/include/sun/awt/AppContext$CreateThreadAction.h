#ifndef _sun_awt_AppContext$CreateThreadAction_h_
#define _sun_awt_AppContext$CreateThreadAction_h_
//$ class sun.awt.AppContext$CreateThreadAction
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace sun {
	namespace awt {

class $import AppContext$CreateThreadAction : public ::java::security::PrivilegedAction {
	$class(AppContext$CreateThreadAction, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AppContext$CreateThreadAction();
	void init$(::sun::awt::AppContext* ac, ::java::lang::Runnable* r);
	virtual $Object* run() override;
	::sun::awt::AppContext* appContext = nullptr;
	::java::lang::Runnable* runnable = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_AppContext$CreateThreadAction_h_