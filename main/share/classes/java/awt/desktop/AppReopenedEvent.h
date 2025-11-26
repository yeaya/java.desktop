#ifndef _java_awt_desktop_AppReopenedEvent_h_
#define _java_awt_desktop_AppReopenedEvent_h_
//$ class java.awt.desktop.AppReopenedEvent
//$ extends java.awt.desktop.AppEvent

#include <java/awt/desktop/AppEvent.h>

namespace java {
	namespace awt {
		namespace desktop {

class $export AppReopenedEvent : public ::java::awt::desktop::AppEvent {
	$class(AppReopenedEvent, $NO_CLASS_INIT, ::java::awt::desktop::AppEvent)
public:
	AppReopenedEvent();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x14DC935347C29C36;
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_AppReopenedEvent_h_