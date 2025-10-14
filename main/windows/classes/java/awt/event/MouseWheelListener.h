#ifndef _java_awt_event_MouseWheelListener_h_
#define _java_awt_event_MouseWheelListener_h_
//$ interface java.awt.event.MouseWheelListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseWheelEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export MouseWheelListener : public ::java::util::EventListener {
	$interface(MouseWheelListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void mouseWheelMoved(::java::awt::event::MouseWheelEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_MouseWheelListener_h_