#ifndef _java_awt_event_ComponentEvent_h_
#define _java_awt_event_ComponentEvent_h_
//$ class java.awt.event.ComponentEvent
//$ extends java.awt.AWTEvent

#include <java/awt/AWTEvent.h>

#pragma push_macro("COMPONENT_FIRST")
#undef COMPONENT_FIRST
#pragma push_macro("COMPONENT_HIDDEN")
#undef COMPONENT_HIDDEN
#pragma push_macro("COMPONENT_LAST")
#undef COMPONENT_LAST
#pragma push_macro("COMPONENT_MOVED")
#undef COMPONENT_MOVED
#pragma push_macro("COMPONENT_RESIZED")
#undef COMPONENT_RESIZED
#pragma push_macro("COMPONENT_SHOWN")
#undef COMPONENT_SHOWN

namespace java {
	namespace awt {
		class Component;
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export ComponentEvent : public ::java::awt::AWTEvent {
	$class(ComponentEvent, $NO_CLASS_INIT, ::java::awt::AWTEvent)
public:
	ComponentEvent();
	void init$(::java::awt::Component* source, int32_t id);
	virtual ::java::awt::Component* getComponent();
	virtual $String* paramString() override;
	static const int32_t COMPONENT_FIRST = 100;
	static const int32_t COMPONENT_LAST = 103;
	static const int32_t COMPONENT_MOVED = COMPONENT_FIRST;
	static const int32_t COMPONENT_RESIZED = 101; // 1 + COMPONENT_FIRST
	static const int32_t COMPONENT_SHOWN = 102; // 2 + COMPONENT_FIRST
	static const int32_t COMPONENT_HIDDEN = 103; // 3 + COMPONENT_FIRST
	static const int64_t serialVersionUID = (int64_t)0x706DFA954FA9DA45;
};

		} // event
	} // awt
} // java

#pragma pop_macro("COMPONENT_FIRST")
#pragma pop_macro("COMPONENT_HIDDEN")
#pragma pop_macro("COMPONENT_LAST")
#pragma pop_macro("COMPONENT_MOVED")
#pragma pop_macro("COMPONENT_RESIZED")
#pragma pop_macro("COMPONENT_SHOWN")

#endif // _java_awt_event_ComponentEvent_h_