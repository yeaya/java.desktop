#ifndef _com_apple_eawt_event_GestureListener_h_
#define _com_apple_eawt_event_GestureListener_h_
//$ interface com.apple.eawt.event.GestureListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

class GestureListener : public ::java::util::EventListener {
	$interface(GestureListener, $NO_CLASS_INIT, ::java::util::EventListener)
};

			} // event
		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_event_GestureListener_h_