#ifndef _com_apple_eawt_event_GesturePhaseEvent_h_
#define _com_apple_eawt_event_GesturePhaseEvent_h_
//$ class com.apple.eawt.event.GesturePhaseEvent
//$ extends com.apple.eawt.event.GestureEvent

#include <com/apple/eawt/event/GestureEvent.h>

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

class GesturePhaseEvent : public ::com::apple::eawt::event::GestureEvent {
	$class(GesturePhaseEvent, $NO_CLASS_INIT, ::com::apple::eawt::event::GestureEvent)
public:
	GesturePhaseEvent();
	void init$();
};

			} // event
		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_event_GesturePhaseEvent_h_