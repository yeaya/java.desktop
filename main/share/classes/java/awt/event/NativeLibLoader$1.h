#ifndef _java_awt_event_NativeLibLoader$1_h_
#define _java_awt_event_NativeLibLoader$1_h_
//$ class java.awt.event.NativeLibLoader$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		namespace event {

class NativeLibLoader$1 : public ::java::security::PrivilegedAction {
	$class(NativeLibLoader$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	NativeLibLoader$1();
	void init$();
	virtual $Object* run() override;
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_NativeLibLoader$1_h_