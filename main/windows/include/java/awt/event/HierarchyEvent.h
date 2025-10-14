#ifndef _java_awt_event_HierarchyEvent_h_
#define _java_awt_event_HierarchyEvent_h_
//$ class java.awt.event.HierarchyEvent
//$ extends java.awt.AWTEvent

#include <java/awt/AWTEvent.h>

#pragma push_macro("ANCESTOR_MOVED")
#undef ANCESTOR_MOVED
#pragma push_macro("ANCESTOR_RESIZED")
#undef ANCESTOR_RESIZED
#pragma push_macro("DISPLAYABILITY_CHANGED")
#undef DISPLAYABILITY_CHANGED
#pragma push_macro("HIERARCHY_CHANGED")
#undef HIERARCHY_CHANGED
#pragma push_macro("HIERARCHY_FIRST")
#undef HIERARCHY_FIRST
#pragma push_macro("HIERARCHY_LAST")
#undef HIERARCHY_LAST
#pragma push_macro("PARENT_CHANGED")
#undef PARENT_CHANGED
#pragma push_macro("SHOWING_CHANGED")
#undef SHOWING_CHANGED

namespace java {
	namespace awt {
		class Component;
		class Container;
	}
}

namespace java {
	namespace awt {
		namespace event {

class $import HierarchyEvent : public ::java::awt::AWTEvent {
	$class(HierarchyEvent, $NO_CLASS_INIT, ::java::awt::AWTEvent)
public:
	HierarchyEvent();
	void init$(::java::awt::Component* source, int32_t id, ::java::awt::Component* changed, ::java::awt::Container* changedParent);
	void init$(::java::awt::Component* source, int32_t id, ::java::awt::Component* changed, ::java::awt::Container* changedParent, int64_t changeFlags);
	virtual int64_t getChangeFlags();
	virtual ::java::awt::Component* getChanged();
	virtual ::java::awt::Container* getChangedParent();
	virtual ::java::awt::Component* getComponent();
	virtual $String* paramString() override;
	static const int64_t serialVersionUID = (int64_t)0xB5ED1E0683939AAA;
	static const int32_t HIERARCHY_FIRST = 1400;
	static const int32_t HIERARCHY_CHANGED = HIERARCHY_FIRST;
	static const int32_t ANCESTOR_MOVED = 1401; // 1 + HIERARCHY_FIRST
	static const int32_t ANCESTOR_RESIZED = 1402; // 2 + HIERARCHY_FIRST
	static const int32_t HIERARCHY_LAST = ANCESTOR_RESIZED;
	static const int32_t PARENT_CHANGED = 1;
	static const int32_t DISPLAYABILITY_CHANGED = 2;
	static const int32_t SHOWING_CHANGED = 4;
	::java::awt::Component* changed = nullptr;
	::java::awt::Container* changedParent = nullptr;
	int64_t changeFlags = 0;
};

		} // event
	} // awt
} // java

#pragma pop_macro("ANCESTOR_MOVED")
#pragma pop_macro("ANCESTOR_RESIZED")
#pragma pop_macro("DISPLAYABILITY_CHANGED")
#pragma pop_macro("HIERARCHY_CHANGED")
#pragma pop_macro("HIERARCHY_FIRST")
#pragma pop_macro("HIERARCHY_LAST")
#pragma pop_macro("PARENT_CHANGED")
#pragma pop_macro("SHOWING_CHANGED")

#endif // _java_awt_event_HierarchyEvent_h_