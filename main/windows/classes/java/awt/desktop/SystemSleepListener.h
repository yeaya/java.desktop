#ifndef _java_awt_desktop_SystemSleepListener_h_
#define _java_awt_desktop_SystemSleepListener_h_
//$ interface java.awt.desktop.SystemSleepListener
//$ extends java.awt.desktop.SystemEventListener

#include <java/awt/desktop/SystemEventListener.h>

namespace java {
	namespace awt {
		namespace desktop {
			class SystemSleepEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $export SystemSleepListener : public ::java::awt::desktop::SystemEventListener {
	$interface(SystemSleepListener, $NO_CLASS_INIT, ::java::awt::desktop::SystemEventListener)
public:
	virtual void systemAboutToSleep(::java::awt::desktop::SystemSleepEvent* e) {}
	virtual void systemAwoke(::java::awt::desktop::SystemSleepEvent* e) {}
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_SystemSleepListener_h_