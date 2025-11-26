#ifndef _java_awt_event_WindowFocusListener_h_
#define _java_awt_event_WindowFocusListener_h_
//$ interface java.awt.event.WindowFocusListener
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

class $import WindowFocusListener : public ::java::util::EventListener {
	$interface(WindowFocusListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void windowGainedFocus(::java::awt::event::WindowEvent* e) {}
	virtual void windowLostFocus(::java::awt::event::WindowEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_WindowFocusListener_h_