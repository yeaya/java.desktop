#ifndef _java_awt_event_ContainerListener_h_
#define _java_awt_event_ContainerListener_h_
//$ interface java.awt.event.ContainerListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ContainerEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $import ContainerListener : public ::java::util::EventListener {
	$interface(ContainerListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void componentAdded(::java::awt::event::ContainerEvent* e) {}
	virtual void componentRemoved(::java::awt::event::ContainerEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_ContainerListener_h_