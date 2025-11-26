#ifndef _java_awt_desktop_UserSessionListener_h_
#define _java_awt_desktop_UserSessionListener_h_
//$ interface java.awt.desktop.UserSessionListener
//$ extends java.awt.desktop.SystemEventListener

#include <java/awt/desktop/SystemEventListener.h>

namespace java {
	namespace awt {
		namespace desktop {
			class UserSessionEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $import UserSessionListener : public ::java::awt::desktop::SystemEventListener {
	$interface(UserSessionListener, $NO_CLASS_INIT, ::java::awt::desktop::SystemEventListener)
public:
	virtual void userSessionActivated(::java::awt::desktop::UserSessionEvent* e) {}
	virtual void userSessionDeactivated(::java::awt::desktop::UserSessionEvent* e) {}
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_UserSessionListener_h_