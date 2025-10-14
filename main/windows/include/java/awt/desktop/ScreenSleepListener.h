#ifndef _java_awt_desktop_ScreenSleepListener_h_
#define _java_awt_desktop_ScreenSleepListener_h_
//$ interface java.awt.desktop.ScreenSleepListener
//$ extends java.awt.desktop.SystemEventListener

#include <java/awt/desktop/SystemEventListener.h>

namespace java {
	namespace awt {
		namespace desktop {
			class ScreenSleepEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $import ScreenSleepListener : public ::java::awt::desktop::SystemEventListener {
	$interface(ScreenSleepListener, $NO_CLASS_INIT, ::java::awt::desktop::SystemEventListener)
public:
	virtual void screenAboutToSleep(::java::awt::desktop::ScreenSleepEvent* e) {}
	virtual void screenAwoke(::java::awt::desktop::ScreenSleepEvent* e) {}
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_ScreenSleepListener_h_