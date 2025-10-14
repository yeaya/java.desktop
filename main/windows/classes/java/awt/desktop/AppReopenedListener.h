#ifndef _java_awt_desktop_AppReopenedListener_h_
#define _java_awt_desktop_AppReopenedListener_h_
//$ interface java.awt.desktop.AppReopenedListener
//$ extends java.awt.desktop.SystemEventListener

#include <java/awt/desktop/SystemEventListener.h>

namespace java {
	namespace awt {
		namespace desktop {
			class AppReopenedEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $export AppReopenedListener : public ::java::awt::desktop::SystemEventListener {
	$interface(AppReopenedListener, $NO_CLASS_INIT, ::java::awt::desktop::SystemEventListener)
public:
	virtual void appReopened(::java::awt::desktop::AppReopenedEvent* e) {}
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_AppReopenedListener_h_