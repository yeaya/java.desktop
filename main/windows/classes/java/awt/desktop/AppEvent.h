#ifndef _java_awt_desktop_AppEvent_h_
#define _java_awt_desktop_AppEvent_h_
//$ class java.awt.desktop.AppEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace java {
	namespace awt {
		namespace desktop {

class $export AppEvent : public ::java::util::EventObject {
	$class(AppEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	AppEvent();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xAD4F242FF758FE28;
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_AppEvent_h_