#ifndef _java_awt_event_HierarchyBoundsListener_h_
#define _java_awt_event_HierarchyBoundsListener_h_
//$ interface java.awt.event.HierarchyBoundsListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace event {
			class HierarchyEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $import HierarchyBoundsListener : public ::java::util::EventListener {
	$interface(HierarchyBoundsListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void ancestorMoved(::java::awt::event::HierarchyEvent* e) {}
	virtual void ancestorResized(::java::awt::event::HierarchyEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_HierarchyBoundsListener_h_