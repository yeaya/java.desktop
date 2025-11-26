#ifndef _java_awt_event_FocusEvent_h_
#define _java_awt_event_FocusEvent_h_
//$ class java.awt.event.FocusEvent
//$ extends java.awt.event.ComponentEvent

#include <java/awt/event/ComponentEvent.h>

#pragma push_macro("FOCUS_FIRST")
#undef FOCUS_FIRST
#pragma push_macro("FOCUS_GAINED")
#undef FOCUS_GAINED
#pragma push_macro("FOCUS_LAST")
#undef FOCUS_LAST
#pragma push_macro("FOCUS_LOST")
#undef FOCUS_LOST

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent$Cause;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $import FocusEvent : public ::java::awt::event::ComponentEvent {
	$class(FocusEvent, $NO_CLASS_INIT, ::java::awt::event::ComponentEvent)
public:
	FocusEvent();
	void init$(::java::awt::Component* source, int32_t id, bool temporary, ::java::awt::Component* opposite);
	void init$(::java::awt::Component* source, int32_t id, bool temporary, ::java::awt::Component* opposite, ::java::awt::event::FocusEvent$Cause* cause);
	void init$(::java::awt::Component* source, int32_t id, bool temporary);
	void init$(::java::awt::Component* source, int32_t id);
	::java::awt::event::FocusEvent$Cause* getCause();
	virtual ::java::awt::Component* getOppositeComponent();
	virtual bool isTemporary();
	virtual $String* paramString() override;
	virtual $Object* readResolve();
	static const int32_t FOCUS_FIRST = 1004;
	static const int32_t FOCUS_LAST = 1005;
	static const int32_t FOCUS_GAINED = FOCUS_FIRST;
	static const int32_t FOCUS_LOST = 1005; // 1 + FOCUS_FIRST
	::java::awt::event::FocusEvent$Cause* cause = nullptr;
	bool temporary = false;
	::java::awt::Component* opposite = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x0744BF4B378F62CC;
};

		} // event
	} // awt
} // java

#pragma pop_macro("FOCUS_FIRST")
#pragma pop_macro("FOCUS_GAINED")
#pragma pop_macro("FOCUS_LAST")
#pragma pop_macro("FOCUS_LOST")

#endif // _java_awt_event_FocusEvent_h_