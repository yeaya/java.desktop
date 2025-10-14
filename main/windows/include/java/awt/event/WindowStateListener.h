#ifndef _java_awt_event_WindowStateListener_h_
#define _java_awt_event_WindowStateListener_h_
//$ interface java.awt.event.WindowStateListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $import WindowStateListener : public ::java::util::EventListener {
	$interface(WindowStateListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void windowStateChanged(::java::awt::event::WindowEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_WindowStateListener_h_