#ifndef _com_apple_eawt_event_MagnificationEvent_h_
#define _com_apple_eawt_event_MagnificationEvent_h_
//$ class com.apple.eawt.event.MagnificationEvent
//$ extends com.apple.eawt.event.GestureEvent

#include <com/apple/eawt/event/GestureEvent.h>

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

class MagnificationEvent : public ::com::apple::eawt::event::GestureEvent {
	$class(MagnificationEvent, $NO_CLASS_INIT, ::com::apple::eawt::event::GestureEvent)
public:
	MagnificationEvent();
	void init$(double magnification);
	virtual double getMagnification();
	double magnification = 0.0;
};

			} // event
		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_event_MagnificationEvent_h_