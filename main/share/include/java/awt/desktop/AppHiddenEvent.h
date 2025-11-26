#ifndef _java_awt_desktop_AppHiddenEvent_h_
#define _java_awt_desktop_AppHiddenEvent_h_
//$ class java.awt.desktop.AppHiddenEvent
//$ extends java.awt.desktop.AppEvent

#include <java/awt/desktop/AppEvent.h>

namespace java {
	namespace awt {
		namespace desktop {

class $import AppHiddenEvent : public ::java::awt::desktop::AppEvent {
	$class(AppHiddenEvent, $NO_CLASS_INIT, ::java::awt::desktop::AppEvent)
public:
	AppHiddenEvent();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x249A28B2A29E71A8;
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_AppHiddenEvent_h_