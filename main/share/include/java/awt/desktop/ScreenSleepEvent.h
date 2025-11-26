#ifndef _java_awt_desktop_ScreenSleepEvent_h_
#define _java_awt_desktop_ScreenSleepEvent_h_
//$ class java.awt.desktop.ScreenSleepEvent
//$ extends java.awt.desktop.AppEvent

#include <java/awt/desktop/AppEvent.h>

namespace java {
	namespace awt {
		namespace desktop {

class $import ScreenSleepEvent : public ::java::awt::desktop::AppEvent {
	$class(ScreenSleepEvent, $NO_CLASS_INIT, ::java::awt::desktop::AppEvent)
public:
	ScreenSleepEvent();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x68621CF849BA0396;
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_ScreenSleepEvent_h_