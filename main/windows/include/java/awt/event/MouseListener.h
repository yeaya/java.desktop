#ifndef _java_awt_event_MouseListener_h_
#define _java_awt_event_MouseListener_h_
//$ interface java.awt.event.MouseListener
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

class $import MouseListener : public ::java::util::EventListener {
	$interface(MouseListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) {}
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) {}
	virtual void mouseExited(::java::awt::event::MouseEvent* e) {}
	virtual void mousePressed(::java::awt::event::MouseEvent* e) {}
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_MouseListener_h_