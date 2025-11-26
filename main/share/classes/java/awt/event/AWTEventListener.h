#ifndef _java_awt_event_AWTEventListener_h_
#define _java_awt_event_AWTEventListener_h_
//$ interface java.awt.event.AWTEventListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export AWTEventListener : public ::java::util::EventListener {
	$interface(AWTEventListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void eventDispatched(::java::awt::AWTEvent* event) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_AWTEventListener_h_