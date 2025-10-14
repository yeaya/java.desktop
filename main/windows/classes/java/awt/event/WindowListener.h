#ifndef _java_awt_event_WindowListener_h_
#define _java_awt_event_WindowListener_h_
//$ interface java.awt.event.WindowListener
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

class $export WindowListener : public ::java::util::EventListener {
	$interface(WindowListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void windowActivated(::java::awt::event::WindowEvent* e) {}
	virtual void windowClosed(::java::awt::event::WindowEvent* e) {}
	virtual void windowClosing(::java::awt::event::WindowEvent* e) {}
	virtual void windowDeactivated(::java::awt::event::WindowEvent* e) {}
	virtual void windowDeiconified(::java::awt::event::WindowEvent* e) {}
	virtual void windowIconified(::java::awt::event::WindowEvent* e) {}
	virtual void windowOpened(::java::awt::event::WindowEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_WindowListener_h_