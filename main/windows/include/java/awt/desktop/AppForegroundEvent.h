#ifndef _java_awt_desktop_AppForegroundEvent_h_
#define _java_awt_desktop_AppForegroundEvent_h_
//$ class java.awt.desktop.AppForegroundEvent
//$ extends java.awt.desktop.AppEvent

#include <java/awt/desktop/AppEvent.h>

namespace java {
	namespace awt {
		namespace desktop {

class $import AppForegroundEvent : public ::java::awt::desktop::AppEvent {
	$class(AppForegroundEvent, $NO_CLASS_INIT, ::java::awt::desktop::AppEvent)
public:
	AppForegroundEvent();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xB37BD1E0B54B8B69;
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_AppForegroundEvent_h_