#ifndef _java_awt_event_ContainerEvent_h_
#define _java_awt_event_ContainerEvent_h_
//$ class java.awt.event.ContainerEvent
//$ extends java.awt.event.ComponentEvent

#include <java/awt/event/ComponentEvent.h>

#pragma push_macro("COMPONENT_ADDED")
#undef COMPONENT_ADDED
#pragma push_macro("COMPONENT_REMOVED")
#undef COMPONENT_REMOVED
#pragma push_macro("CONTAINER_FIRST")
#undef CONTAINER_FIRST
#pragma push_macro("CONTAINER_LAST")
#undef CONTAINER_LAST

namespace java {
	namespace awt {
		class Component;
		class Container;
	}
}

namespace java {
	namespace awt {
		namespace event {

class $import ContainerEvent : public ::java::awt::event::ComponentEvent {
	$class(ContainerEvent, $NO_CLASS_INIT, ::java::awt::event::ComponentEvent)
public:
	ContainerEvent();
	void init$(::java::awt::Component* source, int32_t id, ::java::awt::Component* child);
	virtual ::java::awt::Component* getChild();
	virtual ::java::awt::Container* getContainer();
	virtual $String* paramString() override;
	static const int32_t CONTAINER_FIRST = 300;
	static const int32_t CONTAINER_LAST = 301;
	static const int32_t COMPONENT_ADDED = CONTAINER_FIRST;
	static const int32_t COMPONENT_REMOVED = 301; // 1 + CONTAINER_FIRST
	::java::awt::Component* child = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xC6E4C9D335549777;
};

		} // event
	} // awt
} // java

#pragma pop_macro("COMPONENT_ADDED")
#pragma pop_macro("COMPONENT_REMOVED")
#pragma pop_macro("CONTAINER_FIRST")
#pragma pop_macro("CONTAINER_LAST")

#endif // _java_awt_event_ContainerEvent_h_