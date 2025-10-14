#ifndef _java_awt_EventQueue$4_h_
#define _java_awt_EventQueue$4_h_
//$ class java.awt.EventQueue$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class EventQueue;
	}
}

namespace java {
	namespace awt {

class EventQueue$4 : public ::java::security::PrivilegedAction {
	$class(EventQueue$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	EventQueue$4();
	void init$(::java::awt::EventQueue* this$0, ::java::awt::AWTEvent* val$event, Object$* val$src);
	virtual $Object* run() override;
	::java::awt::EventQueue* this$0 = nullptr;
	$Object* val$src = nullptr;
	::java::awt::AWTEvent* val$event = nullptr;
};

	} // awt
} // java

#endif // _java_awt_EventQueue$4_h_