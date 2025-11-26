#ifndef _java_awt_event_KeyListener_h_
#define _java_awt_event_KeyListener_h_
//$ interface java.awt.event.KeyListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export KeyListener : public ::java::util::EventListener {
	$interface(KeyListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void keyPressed(::java::awt::event::KeyEvent* e) {}
	virtual void keyReleased(::java::awt::event::KeyEvent* e) {}
	virtual void keyTyped(::java::awt::event::KeyEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_KeyListener_h_