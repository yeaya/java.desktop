#ifndef _java_awt_event_HierarchyListener_h_
#define _java_awt_event_HierarchyListener_h_
//$ interface java.awt.event.HierarchyListener
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

class $export HierarchyListener : public ::java::util::EventListener {
	$interface(HierarchyListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void hierarchyChanged(::java::awt::event::HierarchyEvent* e) {}
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_HierarchyListener_h_