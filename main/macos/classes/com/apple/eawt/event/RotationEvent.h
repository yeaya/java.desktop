#ifndef _com_apple_eawt_event_RotationEvent_h_
#define _com_apple_eawt_event_RotationEvent_h_
//$ class com.apple.eawt.event.RotationEvent
//$ extends com.apple.eawt.event.GestureEvent

#include <com/apple/eawt/event/GestureEvent.h>

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

class RotationEvent : public ::com::apple::eawt::event::GestureEvent {
	$class(RotationEvent, $NO_CLASS_INIT, ::com::apple::eawt::event::GestureEvent)
public:
	RotationEvent();
	void init$(double rotation);
	virtual double getRotation();
	double rotation = 0.0;
};

			} // event
		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_event_RotationEvent_h_