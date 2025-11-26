#ifndef _java_awt_desktop_UserSessionEvent_h_
#define _java_awt_desktop_UserSessionEvent_h_
//$ class java.awt.desktop.UserSessionEvent
//$ extends java.awt.desktop.AppEvent

#include <java/awt/desktop/AppEvent.h>

namespace java {
	namespace awt {
		namespace desktop {
			class UserSessionEvent$Reason;
		}
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $import UserSessionEvent : public ::java::awt::desktop::AppEvent {
	$class(UserSessionEvent, $NO_CLASS_INIT, ::java::awt::desktop::AppEvent)
public:
	UserSessionEvent();
	void init$(::java::awt::desktop::UserSessionEvent$Reason* reason);
	::java::awt::desktop::UserSessionEvent$Reason* getReason();
	static const int64_t serialVersionUID = (int64_t)0x5DA2A6AF1D5D59DF;
	::java::awt::desktop::UserSessionEvent$Reason* reason = nullptr;
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_UserSessionEvent_h_