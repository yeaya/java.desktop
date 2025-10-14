#ifndef _java_awt_event_HierarchyBoundsAdapter_h_
#define _java_awt_event_HierarchyBoundsAdapter_h_
//$ class java.awt.event.HierarchyBoundsAdapter
//$ extends java.awt.event.HierarchyBoundsListener

#include <java/awt/event/HierarchyBoundsListener.h>

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

class $import HierarchyBoundsAdapter : public ::java::awt::event::HierarchyBoundsListener {
	$class(HierarchyBoundsAdapter, $NO_CLASS_INIT, ::java::awt::event::HierarchyBoundsListener)
public:
	HierarchyBoundsAdapter();
	void init$();
	virtual void ancestorMoved(::java::awt::event::HierarchyEvent* e) override;
	virtual void ancestorResized(::java::awt::event::HierarchyEvent* e) override;
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_HierarchyBoundsAdapter_h_