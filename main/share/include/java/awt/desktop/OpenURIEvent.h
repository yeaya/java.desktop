#ifndef _java_awt_desktop_OpenURIEvent_h_
#define _java_awt_desktop_OpenURIEvent_h_
//$ class java.awt.desktop.OpenURIEvent
//$ extends java.awt.desktop.AppEvent

#include <java/awt/desktop/AppEvent.h>

namespace java {
	namespace net {
		class URI;
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $import OpenURIEvent : public ::java::awt::desktop::AppEvent {
	$class(OpenURIEvent, $NO_CLASS_INIT, ::java::awt::desktop::AppEvent)
public:
	OpenURIEvent();
	void init$(::java::net::URI* uri);
	::java::net::URI* getURI();
	static const int64_t serialVersionUID = (int64_t)0x0311E4815A5EAE24;
	::java::net::URI* uri = nullptr;
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_OpenURIEvent_h_