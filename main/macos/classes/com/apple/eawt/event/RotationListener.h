#ifndef _com_apple_eawt_event_RotationListener_h_
#define _com_apple_eawt_event_RotationListener_h_
//$ interface com.apple.eawt.event.RotationListener
//$ extends com.apple.eawt.event.GestureListener

#include <com/apple/eawt/event/GestureListener.h>

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {
				class RotationEvent;
			}
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

class RotationListener : public ::com::apple::eawt::event::GestureListener {
	$interface(RotationListener, $NO_CLASS_INIT, ::com::apple::eawt::event::GestureListener)
public:
	virtual void rotate(::com::apple::eawt::event::RotationEvent* e) {}
};

			} // event
		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_event_RotationListener_h_