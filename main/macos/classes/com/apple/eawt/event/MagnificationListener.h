#ifndef _com_apple_eawt_event_MagnificationListener_h_
#define _com_apple_eawt_event_MagnificationListener_h_
//$ interface com.apple.eawt.event.MagnificationListener
//$ extends com.apple.eawt.event.GestureListener

#include <com/apple/eawt/event/GestureListener.h>

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {
				class MagnificationEvent;
			}
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

class MagnificationListener : public ::com::apple::eawt::event::GestureListener {
	$interface(MagnificationListener, $NO_CLASS_INIT, ::com::apple::eawt::event::GestureListener)
public:
	virtual void magnify(::com::apple::eawt::event::MagnificationEvent* e) {}
};

			} // event
		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_event_MagnificationListener_h_