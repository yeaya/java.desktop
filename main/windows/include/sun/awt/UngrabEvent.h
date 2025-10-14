#ifndef _sun_awt_UngrabEvent_h_
#define _sun_awt_UngrabEvent_h_
//$ class sun.awt.UngrabEvent
//$ extends java.awt.AWTEvent

#include <java/awt/AWTEvent.h>

#pragma push_macro("UNGRAB_EVENT_ID")
#undef UNGRAB_EVENT_ID

namespace java {
	namespace awt {
		class Component;
	}
}

namespace sun {
	namespace awt {

class $import UngrabEvent : public ::java::awt::AWTEvent {
	$class(UngrabEvent, $NO_CLASS_INIT, ::java::awt::AWTEvent)
public:
	UngrabEvent();
	void init$(::java::awt::Component* source);
	virtual $String* toString() override;
	static const int32_t UNGRAB_EVENT_ID = 1998;
};

	} // awt
} // sun

#pragma pop_macro("UNGRAB_EVENT_ID")

#endif // _sun_awt_UngrabEvent_h_