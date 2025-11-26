#ifndef _java_awt_event_MouseMotionListener_h_
#define _java_awt_event_MouseMotionListener_h_
//$ interface java.awt.event.MouseMotionListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $import MouseMotionListener : public ::java::util::EventListener {
	$interface(MouseMotionListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) {}
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_MouseMotionListener_h_