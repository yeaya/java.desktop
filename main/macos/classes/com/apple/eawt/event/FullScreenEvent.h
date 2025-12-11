#ifndef _com_apple_eawt_event_FullScreenEvent_h_
#define _com_apple_eawt_event_FullScreenEvent_h_
//$ class com.apple.eawt.event.FullScreenEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace java {
	namespace awt {
		class Window;
	}
}

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

class FullScreenEvent : public ::java::util::EventObject {
	$class(FullScreenEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	FullScreenEvent();
	void init$(::java::awt::Window* window);
	virtual ::java::awt::Window* getWindow();
	::java::awt::Window* window = nullptr;
};

			} // event
		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_event_FullScreenEvent_h_