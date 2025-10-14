#ifndef _java_awt_event_ContainerAdapter_h_
#define _java_awt_event_ContainerAdapter_h_
//$ class java.awt.event.ContainerAdapter
//$ extends java.awt.event.ContainerListener

#include <java/awt/event/ContainerListener.h>

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

class $import ContainerAdapter : public ::java::awt::event::ContainerListener {
	$class(ContainerAdapter, $NO_CLASS_INIT, ::java::awt::event::ContainerListener)
public:
	ContainerAdapter();
	void init$();
	virtual void componentAdded(::java::awt::event::ContainerEvent* e) override;
	virtual void componentRemoved(::java::awt::event::ContainerEvent* e) override;
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_ContainerAdapter_h_