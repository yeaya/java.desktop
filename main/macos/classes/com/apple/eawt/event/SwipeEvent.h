#ifndef _com_apple_eawt_event_SwipeEvent_h_
#define _com_apple_eawt_event_SwipeEvent_h_
//$ class com.apple.eawt.event.SwipeEvent
//$ extends com.apple.eawt.event.GestureEvent

#include <com/apple/eawt/event/GestureEvent.h>

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

class SwipeEvent : public ::com::apple::eawt::event::GestureEvent {
	$class(SwipeEvent, $NO_CLASS_INIT, ::com::apple::eawt::event::GestureEvent)
public:
	SwipeEvent();
	void init$();
};

			} // event
		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_event_SwipeEvent_h_