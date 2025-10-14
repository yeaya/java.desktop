#ifndef _java_awt_desktop_AppHiddenListener_h_
#define _java_awt_desktop_AppHiddenListener_h_
//$ interface java.awt.desktop.AppHiddenListener
//$ extends java.awt.desktop.SystemEventListener

#include <java/awt/desktop/SystemEventListener.h>

namespace java {
	namespace awt {
		namespace desktop {
			class AppHiddenEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $import AppHiddenListener : public ::java::awt::desktop::SystemEventListener {
	$interface(AppHiddenListener, $NO_CLASS_INIT, ::java::awt::desktop::SystemEventListener)
public:
	virtual void appHidden(::java::awt::desktop::AppHiddenEvent* e) {}
	virtual void appUnhidden(::java::awt::desktop::AppHiddenEvent* e) {}
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_AppHiddenListener_h_