#ifndef _java_awt_event_ComponentListener_h_
#define _java_awt_event_ComponentListener_h_
//$ interface java.awt.event.ComponentListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export ComponentListener : public ::java::util::EventListener {
	$interface(ComponentListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) {}
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) {}
	virtual void componentResized(::java::awt::event::ComponentEvent* e) {}
	virtual void componentShown(::java::awt::event::ComponentEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_ComponentListener_h_