#ifndef _java_awt_desktop_QuitEvent_h_
#define _java_awt_desktop_QuitEvent_h_
//$ class java.awt.desktop.QuitEvent
//$ extends java.awt.desktop.AppEvent

#include <java/awt/desktop/AppEvent.h>

namespace java {
	namespace awt {
		namespace desktop {

class $import QuitEvent : public ::java::awt::desktop::AppEvent {
	$class(QuitEvent, $NO_CLASS_INIT, ::java::awt::desktop::AppEvent)
public:
	QuitEvent();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xFC7225AEEF989E36;
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_QuitEvent_h_