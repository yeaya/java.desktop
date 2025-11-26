#ifndef _java_awt_EventQueue$5_h_
#define _java_awt_EventQueue$5_h_
//$ class java.awt.EventQueue$5
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		class EventQueue;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace java {
	namespace awt {

class EventQueue$5 : public ::java::security::PrivilegedAction {
	$class(EventQueue$5, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	EventQueue$5();
	void init$(::java::awt::EventQueue* this$0, ::java::security::PrivilegedAction* val$action, ::java::security::AccessControlContext* val$eventAcc);
	virtual $Object* run() override;
	::java::awt::EventQueue* this$0 = nullptr;
	::java::security::AccessControlContext* val$eventAcc = nullptr;
	::java::security::PrivilegedAction* val$action = nullptr;
};

	} // awt
} // java

#endif // _java_awt_EventQueue$5_h_