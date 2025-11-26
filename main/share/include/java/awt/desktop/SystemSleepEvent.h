#ifndef _java_awt_desktop_SystemSleepEvent_h_
#define _java_awt_desktop_SystemSleepEvent_h_
//$ class java.awt.desktop.SystemSleepEvent
//$ extends java.awt.desktop.AppEvent

#include <java/awt/desktop/AppEvent.h>

namespace java {
	namespace awt {
		namespace desktop {

class $import SystemSleepEvent : public ::java::awt::desktop::AppEvent {
	$class(SystemSleepEvent, $NO_CLASS_INIT, ::java::awt::desktop::AppEvent)
public:
	SystemSleepEvent();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x00286704E73472F5;
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_SystemSleepEvent_h_