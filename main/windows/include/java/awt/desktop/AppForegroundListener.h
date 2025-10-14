#ifndef _java_awt_desktop_AppForegroundListener_h_
#define _java_awt_desktop_AppForegroundListener_h_
//$ interface java.awt.desktop.AppForegroundListener
//$ extends java.awt.desktop.SystemEventListener

#include <java/awt/desktop/SystemEventListener.h>

namespace java {
	namespace awt {
		namespace desktop {
			class AppForegroundEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $import AppForegroundListener : public ::java::awt::desktop::SystemEventListener {
	$interface(AppForegroundListener, $NO_CLASS_INIT, ::java::awt::desktop::SystemEventListener)
public:
	virtual void appMovedToBackground(::java::awt::desktop::AppForegroundEvent* e) {}
	virtual void appRaisedToForeground(::java::awt::desktop::AppForegroundEvent* e) {}
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_AppForegroundListener_h_