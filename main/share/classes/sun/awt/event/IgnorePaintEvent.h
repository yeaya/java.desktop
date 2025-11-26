#ifndef _sun_awt_event_IgnorePaintEvent_h_
#define _sun_awt_event_IgnorePaintEvent_h_
//$ class sun.awt.event.IgnorePaintEvent
//$ extends java.awt.event.PaintEvent

#include <java/awt/event/PaintEvent.h>

namespace java {
	namespace awt {
		class Component;
		class Rectangle;
	}
}

namespace sun {
	namespace awt {
		namespace event {

class IgnorePaintEvent : public ::java::awt::event::PaintEvent {
	$class(IgnorePaintEvent, $NO_CLASS_INIT, ::java::awt::event::PaintEvent)
public:
	IgnorePaintEvent();
	void init$(::java::awt::Component* source, int32_t id, ::java::awt::Rectangle* updateRect);
};

		} // event
	} // awt
} // sun

#endif // _sun_awt_event_IgnorePaintEvent_h_