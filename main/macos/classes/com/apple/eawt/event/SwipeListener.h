#ifndef _com_apple_eawt_event_SwipeListener_h_
#define _com_apple_eawt_event_SwipeListener_h_
//$ interface com.apple.eawt.event.SwipeListener
//$ extends com.apple.eawt.event.GestureListener

#include <com/apple/eawt/event/GestureListener.h>

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {
				class SwipeEvent;
			}
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

class SwipeListener : public ::com::apple::eawt::event::GestureListener {
	$interface(SwipeListener, $NO_CLASS_INIT, ::com::apple::eawt::event::GestureListener)
public:
	virtual void swipedDown(::com::apple::eawt::event::SwipeEvent* e) {}
	virtual void swipedLeft(::com::apple::eawt::event::SwipeEvent* e) {}
	virtual void swipedRight(::com::apple::eawt::event::SwipeEvent* e) {}
	virtual void swipedUp(::com::apple::eawt::event::SwipeEvent* e) {}
};

			} // event
		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_event_SwipeListener_h_