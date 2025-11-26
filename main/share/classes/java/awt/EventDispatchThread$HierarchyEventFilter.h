#ifndef _java_awt_EventDispatchThread$HierarchyEventFilter_h_
#define _java_awt_EventDispatchThread$HierarchyEventFilter_h_
//$ class java.awt.EventDispatchThread$HierarchyEventFilter
//$ extends java.awt.EventFilter

#include <java/awt/EventFilter.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Component;
		class EventFilter$FilterAction;
	}
}

namespace java {
	namespace awt {

class EventDispatchThread$HierarchyEventFilter : public ::java::awt::EventFilter {
	$class(EventDispatchThread$HierarchyEventFilter, $NO_CLASS_INIT, ::java::awt::EventFilter)
public:
	EventDispatchThread$HierarchyEventFilter();
	void init$(::java::awt::Component* modalComponent);
	virtual ::java::awt::EventFilter$FilterAction* acceptEvent(::java::awt::AWTEvent* event) override;
	::java::awt::Component* modalComponent = nullptr;
};

	} // awt
} // java

#endif // _java_awt_EventDispatchThread$HierarchyEventFilter_h_