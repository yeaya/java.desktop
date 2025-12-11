#ifndef _com_apple_eawt_event_GesturePhaseListener_h_
#define _com_apple_eawt_event_GesturePhaseListener_h_
//$ interface com.apple.eawt.event.GesturePhaseListener
//$ extends com.apple.eawt.event.GestureListener

#include <com/apple/eawt/event/GestureListener.h>

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {
				class GesturePhaseEvent;
			}
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

class GesturePhaseListener : public ::com::apple::eawt::event::GestureListener {
	$interface(GesturePhaseListener, $NO_CLASS_INIT, ::com::apple::eawt::event::GestureListener)
public:
	virtual void gestureBegan(::com::apple::eawt::event::GesturePhaseEvent* e) {}
	virtual void gestureEnded(::com::apple::eawt::event::GesturePhaseEvent* e) {}
};

			} // event
		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_event_GesturePhaseListener_h_