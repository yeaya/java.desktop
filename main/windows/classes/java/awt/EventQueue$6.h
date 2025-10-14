#ifndef _java_awt_EventQueue$6_h_
#define _java_awt_EventQueue$6_h_
//$ class java.awt.EventQueue$6
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		class EventQueue;
	}
}

namespace java {
	namespace awt {

class EventQueue$6 : public ::java::security::PrivilegedAction {
	$class(EventQueue$6, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	EventQueue$6();
	void init$(::java::awt::EventQueue* this$0);
	virtual $Object* run() override;
	::java::awt::EventQueue* this$0 = nullptr;
};

	} // awt
} // java

#endif // _java_awt_EventQueue$6_h_